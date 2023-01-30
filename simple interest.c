#include<stdio.h>
int main()
{
	int p;
	float si,r,n;
	char response;
	printf("enter the principle amount:");
	scanf("%d",&p);
	printf("enter the number of years:");
	scanf("%f",&n);
	printf("enter the person is senior citizen(y/n)");
	scanf("%s",&response);
	if (response=='y')
	{
		si=(p*n*12)/100;
		printf("simple intrest=%f",si);
	}
	else
	{
		si=(p*n*10)/100;
		printf("simple interest=%f",si);
	}
	return 0;
}
