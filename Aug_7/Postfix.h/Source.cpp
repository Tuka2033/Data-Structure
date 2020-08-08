#include<iostream>
using namespace std;
#define max 10
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
	int res;
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
	}
	return res;
}

int main()
{
	char infix[100];
	char postfix[100];
	char temp, symbol;
	int i, j;
	cout << "\nEnter an infix expression\n::";
	cin >> infix;
	i = j = 0;
	while (infix[i] != '\0')
	{
		symbol = infix[i];
		if (isoperand(symbol))
		{
			postfix[j] = symbol;
			j++;
		}
		if (symbol == '(')
		{
			push(symbol);
		}
		if (isoperator(symbol))
		{
			while (isprecedence(peek()) >= isprecedence(symbol))
			{
				temp = pop();
				postfix[j] = temp;
				j++;
			}
			push(symbol);
		}
		if (symbol == ')')
		{
			while (stack[top] != '(')
			{
				temp = pop();
				postfix[j] = temp;
				j++;
			}
			temp = pop();
		}
		i++;
	}
	while (stack[top] != '(')
	{
		temp = pop();
		postfix[j] = temp;
		j++;
	}
	postfix[j] = '\0';
	cout << "\npostfix Expression::" << postfix;
}