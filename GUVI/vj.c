#include <stdio.h>
#include<math.h>
int main()
{
int n=0,sum=0,count=0,rem=0,i,num1,num2,n1;
scanf("%d,%d",&num1,&num2);

for(i=num1+1;i<num2;i++)
{
    n=i;
    n1=i;
while(n!=0)
{
count++;
n=n/10;
}
while(n1!=0)
{
rem=n1%10;
sum=sum+pow(rem,count);
n1=n1/10;
}

if(sum==i)
{
printf("%d\n",i);
}

sum=0;
count=0;
}

return 0;
}
