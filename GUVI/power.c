#include<stdio.h>
void main()
{
int result=1,base,exp;
scanf("%d%d",&base,&exp);
while(exp!=0)
{
	result=result*base;
	exp--;
}
printf("\n %d",result);
}
