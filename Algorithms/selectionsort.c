#include<stdio.h>
#include<conio.h>
#include<time.h>
int startt,endt,timesort;
void  ss(int a[],int n);

void main()
{
    int n,a[10];
    printf("enter the no. of elements");
    scanf("%d",&n);
    printf("enter the elements into the array");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    startt=clock();
    ss(a,n);
    endt=clock();
    timesort=endt-startt;
    printf("\nthe time taken = %d",timesort);
}
void ss(int a[],int n)
{
    int small,pos,temp;
    for(int i=0;i<(n-1);i++)
    {
        pos=i;
        small=a[i];
        for(int j=i+1;j<n;j++)
        {
            if(small>a[j]){
                small=a[j];
                pos=j;}
        }
        temp=a[i];
        a[i]=a[pos];
        a[pos]=temp;
    }
    printf("the sorted elements are :");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
