#include<stdio.h>
void main()
{
int result=1,base,e;
scanf("%d%d",&base,&e);
while(e!=0)
{
	result=result*base;
	e--;
}
printf("\n %d",result);
}
