#include<iostream>
#include <stack>
using namespace std;
stack<char> s;
int isOperator(char symbol)
{
	if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || symbol == '%')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int isPrecedence(char symbol)
{
	int res=-1;
	switch(symbol)
	{
		case '(':
			res = 0;
			break;
		case '+':
		case '-':
			res = 1;
			break;
		case '*':
		case '/':
		case '%':
			res = 2;
			break;
		default:
			res= -1;
	}
	return res;
}
int calc(int a, int b, char op) {
	switch (op)
	{
	case '$':	return (int)pow(a, b);
	case '*':	return a * b;
	case '/':	return a / b;
	case '+':	return a + b;
	case '-':	return a - b;
	}
	return 0;
}
int postfixEvl(char postfix[])
{
	stack<int> s;
	int i=0;
	while (postfix[i] != '\0')
	{
		if (isdigit(postfix[i]))
		{
			s.push(postfix[i]-'0');
		}
		else
		{
			int b = s.top(); s.pop();
			int a = s.top(); s.pop();
			int res=calc(a, b, postfix[i]);
			s.push(res);
		}
		i++;
	}
	int r = s.top(); s.pop();
	return r;
}
void main()
{
	char infix[15];
	char postfix[15];
	cout << "\n Enter Infix Expression::";
	cin >> infix;
	int i, j,a,b;
	i = j = 0;
	s.push('(');
	while (infix[i] != '\0')
	{
		char symbol = infix[i];
		//int i = symbol;
		if (isdigit(infix[i]))
		{
			postfix[j++] = infix[i];
		}
		else if (isOperator(infix[i]))
		{
			while (isPrecedence(s.top()) >= isPrecedence(infix[i]))
			{
				char ch = s.top(); s.pop();
				postfix[j++] = ch;
			}
			s.push(infix[i]);
		}
		else if (infix[i] == '(')
		{
			s.push(infix[i]);
		}
		else if (infix[i] == ')')
		{
			char ch;
			while (s.top()!='(')
			{
			   ch = s.top();s.pop();
				postfix[j++] = ch;
			}
			ch= s.top(); s.pop();
		}
		i++;
	}
	
	while (s.top() != '(')
	{
		char temp;
		temp = s.top(); s.pop();
		postfix[j++] = temp;
	}
	postfix[j] = '\0';
	cout<< "\npostfix Expression::" << postfix;

	
	cout << "\n\n\n";
	int res = postfixEvl(postfix);
	cout << "\nEvaluation of postfix exp::" << res;
}
