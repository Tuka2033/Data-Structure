#include<iostream>
using namespace std;
#define max 20
char stack[max];
int top = -1;

void push(char symbol)
{
	stack[++top] = symbol;
}
char pop()
{
	char c;
	c = stack[top--];
	return c;
}
char peek()
{
	return stack[top];
}
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
int main()
{
	char infix[100];
	char postfix[100];
	char temp, symbol;
	int i, j;
	std::cout << "\nEnter an infix expression::";
	cin >> infix;
	reverse(infix);
	cout << "\nReverse Infix Exp::" << infix;
	i = j = 0;

	//step-1
	push('(');

	//step-2
	while (infix[i] != '\0')
	{
		symbol = infix[i];


		//step-3
		if (isoperand(symbol))
		{
			postfix[j] = symbol;
			j++;
		}

		//step-4
		else if (symbol == '(')
		{
			push(symbol);
		}

		//step-5
		else if (isoperator(symbol))
		{
			//step-5(a)
			while (isprecedence(stack[top]) >= isprecedence(symbol))
			{
				temp = pop();
				postfix[j] = temp;
				j++;
			}
			//step-5(b)
			push(symbol);
		}

		//step-6
		else if (symbol == ')')
		{
			//step-6(a)
			while (stack[top] != '(')
			{
				temp = pop();
				postfix[j] = temp;
				j++;
			}
			//step-6(b)
			temp = pop();
		}
		i++;
	}

	//remove leftover of elemet 
	while (stack[top] != '(')
	{
		temp = pop();
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