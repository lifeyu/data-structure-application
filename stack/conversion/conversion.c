#include "conversion.h"

void conversion_octonary(int num)
{
	Stack stack;
	InitStack(&stack);

	while (num)
	{
		Push(&stack, num % 8);
		num /= 8;	
	}

	int item;
	while (!StackEmpty(&stack))
	{
		GetTop(&stack, &item);
		Pop(&stack);
		printf("%d", item);	
	}
	printf("\n");
}
