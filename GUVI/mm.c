#include<stdio.h>
void main()
{
  int m,n,count=0,i;
  scanf("%d",&m);
  scanf("%d",&n);
  for(i=m+1;i<n;i++)
  {
      if(i%2==0)
      {
          printf("%d\n",i);
      }
  }
}
