#include<stdio.h>
int main()
{
	int p;
	float si,n,r;
	char response;
	printf("enter the principle amount:");
	scanf("%d",&p);
	printf("enter the rate of interest:");
	scanf("%f",&n);
	printf("enter that you is senior citizen(y/n)");
	scanf("%s",&response);
	if (response=='y')
	{
		si=(p*n*12)/100;
		printf("the simple interest of senior citizen is %f",si);
	}
	else
	{
		si=(p*n*10)/100;
		printf("the simple interest of non citizen is %f",si);
	}
	return 0;
}
