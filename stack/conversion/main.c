#include "conversion.h"

void main()
{
	int select = 1;
	int num;
	while (select)
	{
		printf("*********************************************\n");
		printf("*  [1] octonary                             *\n");
		printf("*  [0] quit                                 *\n");
		printf("*********************************************\n");

		printf("请选择:>");
		scanf("%d", &select);

		if (select == 0) break;

		switch (select)
		{
		case 1:	
			printf("请输入要转换为 八进制 的数据:>\n");
			scanf("%d", &num);
			conversion_octonary(num);
			break;
		default:
			printf("输入的选择错误，请重新输入!\n");
			break;
		}
	}
		
}
