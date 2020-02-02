#include<stdio.h>

int add(int x,int y)
{
	return x+y;
}
void main()
{
	int a;
	int b;
	int c;
	printf("Enter Two Numbers ex-10:20 :\n");
	scanf("%d:%d",&a,&b);
	c=add(a,b);
	printf("%d+%d = %d\n",a,b,c);
}

