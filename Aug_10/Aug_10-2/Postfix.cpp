#include<iostream>
#include<stack>
using namespace std;
stack<char> s;

int isoperand(char symbol)
{
	if ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z'))
		return 1;
	else
		return 0;
}
int isoperator(char symbol)
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

int isprecedence(char symbol)
{
	int res = -1;
	switch (symbol)
	{
	case '(':
		res = 0; break;
	case '+':
	case '-':
		res = 1; break;
	case '*':
	case '/':
	case '%':
		res = 2; break;
	default:
		res = -1;
	}
	return res;
}

void reverse(char infix[])
{
	int len;
	len = strlen(infix);
	char temp;
	for (int i = 0,j=len-1; i <= len / 2; i++,j--)
	{
			temp = infix[i];
			infix[i] = infix[j];
			infix[j] = temp;

	}

	for (int i = 0; i < len; i++)
	{
		if (infix[i] == ')')
		{
				infix[i] = '(';
				
		}
		else if (infix[i] == '(')
		{
			infix[i] = ')';
		}
	}
}
void infixTopostfix(char infix, char postfix)
{

}
int main()
{
	char infix[15];
	char postfix[15];
	char temp, symbol;
	int i, j;
	std::cout << "\nEnter an infix expression::";
	cin >> infix;
	reverse(infix);
	cout << "\nReverse Infix Exp::" << infix;
	i = j = 0;

	//step-1
	s.push('(');

	//step-2
	while (infix[i] != '\0')
	{
		symbol = infix[i];


		//step-3
		if (isdigit(infix[i]))
		{
			postfix[j++] = infix[i];
		}
		else if (isoperand(symbol))
		{
			postfix[j] = symbol;
			j++;
		}

		//step-4
		else if (symbol == '(')
		{
			s.push(symbol);
		}

		//step-5
		else if (isoperator(symbol))
		{
			//step-5(a)
			while (isprecedence(s.top()) >= isprecedence(symbol))
			{
				temp = s.top();   s.pop();
				postfix[j] = temp;
				j++;
			}
			//step-5(b)
			s.push(symbol);
		}

		//step-6
		else if (symbol == ')')
		{
			//step-6(a)
			while (s.top() != '(')
			{
				temp = s.top();   s.pop();
				postfix[j] = temp;
				j++;
			}
			//step-6(b)
			temp = s.top(); s.pop();
		}
		i++;
	}

	//remove leftover of elemet 
	while (s.top() != '(')
	{
		temp = s.top(); s.pop();
		postfix[j] = temp;
		j++;
	}
	postfix[j] = '\0';
	std::cout << "\npostfix Expression::" << postfix;
	reverse(postfix);
	std::cout << "\n\n";
	std::cout << "\nprefix Expression::" << postfix;
	std::cout << "\n\n\n";
}