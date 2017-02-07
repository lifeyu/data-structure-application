#include "parenthesismatching.h"

void main()
{
	char *str = "[([][])]";
	boolean flag = checkmatching(str);	
	if (flag)
		printf("OK !\n");
	else
		printf("Error !\n");
}
