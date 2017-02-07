#include "parenthesismatching.h"

boolean checkmatching(char *str)
{
	Stack stack;
	InitStack(&stack);

	char item;
	while (*str != '\0')
	{
		if (*str == '[' || *str == '(')
		{
			Push(&stack, *str);
		}
		else if (*str == ']')
		{
			GetTop(&stack, &item);	
			if (item != '[') return false;
			Pop(&stack);
		}
		else if (*str == ')')
		{
			GetTop(&stack, &item);
			if (item != '(') return false;
			Pop(&stack);	
		}	
		else
		{}
		str++;
	}

	return StackEmpty(&stack);
}
