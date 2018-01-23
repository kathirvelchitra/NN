# NN
#include<stdio.h>
void main()
{
int a[30],i,j,n;
int temp;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
if(n<100)
{
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}
