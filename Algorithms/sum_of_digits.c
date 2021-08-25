#include<stdio.h>
int sum=0;

int  binary(int n)
{
int count=0;

    while(n!=0)
    {
        if(n%2)
        count++;
        n=n/2;
    }
  if(count%2==0)
  return 1;
  else
  return 0;

}
void sod(int a)
{
    while(a!=0)
    {
        sum=sum+(a%10);
        a=a/10;
    }
}


void main()
{
    int a[10],n;
printf("enter the no. of elements in the array : \n ");
scanf("%d",&n);
printf("enter the array of numbers:\n");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
for(int i=0;i<n;i++)
{
    if(binary(a[i]))
        sod(a[i]);
}

printf("%d",sum);



}
