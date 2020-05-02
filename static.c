#include<stdio.h>
void fun();
int main()
{
	
	fun();
	fun();
	fun();
}
void fun()
{
	int count = 10;
	printf("%d\n",count);
	count++;
}
