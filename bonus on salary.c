#include<stdio.h>
int main()
{
	int s;
	char g;
	float b,t;
	printf("enter the grade:");
	scanf("%s",&g);
	printf("enter the employee salary:");
	scanf("%d",&s);
	if(s>0)
	{
		if (g=='A')
		{
		b=s*5/100;
		if(s<10000)
		{
			b=s*2/100;
		}
		t=s+b;
		printf("total paid=%f",t);
		}
		else if(g=='B')
		{
			b=s*10/100;
			if(s<10000)
			{
				b=s*2/100;
			}
			t=s+b;
			printf("total paid=%f",t);
		}
		else
		{
b=s*0/100;
			if(s<10000)
			{
				b=s*2/100;
			}
			t=s+b;
			printf("total paid=%f",t);
		}
		return 0;
	}

