#include<stdio.h>
int MasterArray[100];
int main()
{
	int a = 10;
	int b = 20;
	char *name = "ABC";
	int d = 30;
	
	int *ptr;
	MasterArray[0] = &a;
	MasterArray[1] = &b;
	MasterArray[2] = &name;
	MasterArray[3] = &d;

	printf("%d,%d,%d,%d",MasterArray[0],MasterArray[1],MasterArray[2],*name);
}
