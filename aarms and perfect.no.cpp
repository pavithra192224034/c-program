#include <stdio.h>
int main()
{
	int rem,num,i,num2,sum,arm=0;
	printf("Input any number:");
	scanf("%d",&num);
{
		num2=num;
	while(num2!=0)
	{
		rem=num2%10;
		arm=arm+(rem*rem*rem);
		num2=num2/10;
	}
	if (num==arm)
	{
		printf(" %d is an armstrong number\n",num);
	}
	else
	{
		printf(" %d is not an armstrong\n",num);
	}}
	{
		for(i=1;i<num;i++)
	{
		if(num%i==0)
		sum = sum + i;
		}
		if(sum==num)
		printf("%d is Perfect number\n",num);
		else
		printf("%d is Not perfect number\n",num);
	}
}
