#include<stdio.h>
int main()
{
	int radius;
	float area,perimeter;
	printf("enter the radius of circle");
	scanf("%d",&radius);
	areaperi(radius,&area,&perimeter);
	printf("area=%f",area);
	printf("\nperimeter=%f",perimeter);
}
areaperi(int r,float*a,float*p)
{
	*a=3.14*r*r;
	*p=2*3.14*r;
}
