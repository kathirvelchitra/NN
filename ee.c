#include<stdio.h>
int main()
{
int i,j,n,temp,a[200];
printf("enter the array of an element");
scanf("%d",&n);
printf("enter the value");
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
 if(a[i]>a[j])
 {
 temp=a[i];
 a[j]=a[i];
 a[j]=temp;
 }
 printf("medium no is a[n/2]",\d\t);
 }
 }
 }
 
