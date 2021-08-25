#include<stdio.h>
#include<time.h>
int startt,endt,timesort;

int n,a[10],value,i,j;
void main()
{
printf("enter the no. of elements into array : ");
scanf("%d",&n);
printf("enter the elements into the array : ");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
startt=clock();
for(int i=1;i<n;i++)
  {
  j=i-1;
  value=a[i];
  while((j>=0)&&(value<a[j]))
   {
   a[j+1]=a[j];
   
   j--;
   }
   a[j+1]=value;
  }
 endt=clock();
 timesort=(endt-startt);
 printf("the time taken = %d",timesort);
printf("the sorted array is = ");
for(int i=0;i<n;i++)
printf("%d ",a[i]);
}
