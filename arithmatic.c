#include<stdio.h>
#include<math.h>
int main()
{ 
int x,n,choice,p;
printf("enter a two number:");
scanf("%d%d",&x,&n);
printf("1.add\n");
printf("2.sub\n");
printf("3.mul\n");
printf("4.div\n");
printf("5.pow\n");
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
	case 1:
		printf("sum of %d and %d is %d",x,n,x+n);
		break;
	case 2:
		printf("sub of %d and %d is %d",x,n,x-n);
		break;
	case 3:
		printf("mul of %d and %d is %d",x,n,x*n);
		break;
	case 4:
		printf("div of %d and %d is %d",x,n,x/n);
		break;
	case 5:
		p=pow(x,n);
		printf("pow is %d",p);
		break;
	default: 
		printf("print the correct choice:");
}
return 0;
}

