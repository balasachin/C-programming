#include <stdio.h>
#include<math.h>
int main() 
{
int n;
scanf("%d",&n);
int temp,mod,sum=0;
temp=n;
while(temp>0)
{
mod=temp%10;
sum=sum*10+mod;
temp=temp/10;
}
if(sum==n)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
return 0;

}
