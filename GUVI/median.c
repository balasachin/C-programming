#include<stdio.h>
#include<conio.h>
void main() 
{
 clrscr();
int x[100],n,i;
int median(int,int[]);
scanf("%d",&n);
for(i=0;i<n;i++)
    scanf("%d",&x[i]);
printf("median=%d\n",median(n,x));
getch();
}



int median(int n, int x[]) {
    int temp;
    int i, j;
    for(i=0; i<n-1; i++) {
        for(j=i+1; j<n; j++) {
            if(x[j] < x[i]) {
                // swap elements
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }

    if(n%2==0) {
        return((x[n/2] + x[n/2 - 1]) / 2.0);
    } else {
        return x[n/2];
    }
}
  
