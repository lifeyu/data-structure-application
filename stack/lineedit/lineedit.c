#include "lineedit.h"

void lineedit()
{
	Stack stack;
	InitStack(&stack);

	char ch = getchar();
	while (ch != '$')
	{
		while (ch != '$' && ch != '\n')
		{
			switch (ch)
			{
			case '#':
				// 仅当栈非空时出栈
				Pop(&stack);
				break;
			case '@':
				// 将栈清空
				ClearStack(&stack);
				break;
			default:
				// 有效字符进栈
				Push(&stack, ch);
				break;
			}	
		
			ch = getchar();
		}	

		PrintBottomToTop(&stack);	// 将栈按照从底到顶的顺序打印

		ClearStack(&stack);
		if (ch != '$') ch = getchar();
	}

	DestroyStack(&stack);
}

void PrintBottomToTop(Stack *stack)
{
	for (int i = 0; i < stack -> top; i++)
	{
		printf("%c", stack -> base[i]);	
	}
	printf("\n");
}
