#include<stdio.h>
int main()
{
	int num,reverse=0,remainder;
	print("enter the number:");
	scanf("%d",&num);
	while(num!=0)
	{
		remainder=num%10;
		reverse=reverse*10+remainder;
		num=num/10;
	}
	printf("the reverse is %d",reverse);
	return 0;
}
