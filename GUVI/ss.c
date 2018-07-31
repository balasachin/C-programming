#include<stdio.h>
int main()
{
int start,end,i,j,c;
scanf("%d%d",&start,&end);
for(i=start;i<end;i++)
{
    c=0;
	for(j=2;j<=i/2;++j)
	{
		if(i%j==0)
		{
		c=1;
		break;
		}
	}
	if(c==0)
	{
	printf("%d\n",i);
	}
}
return 0;
}
