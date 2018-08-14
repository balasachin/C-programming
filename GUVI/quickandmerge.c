#include<stdio.h>
int  main()
{
int i,j,a[i],temp,n;
scanf("%d",&n);
printf("enter the num");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(i=0;i<n;i++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
  for(j=0;j<=n;j++)
  {
printf("%d",a[j]);
}
  printf("median element");
  n=(n+1)/2-1;
  printf("%d",&a[n]);
}
}
}
