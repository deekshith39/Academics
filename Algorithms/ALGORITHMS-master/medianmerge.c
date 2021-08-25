#include<stdio.h>
#include<stdlib.h>
int a[20],b[20],n1,n2,c[50];
void merge(int a[],int b[]);
void median(int n);
void main()
{
    printf("enter the size of sorted array 1 :\n");
    scanf("%d",&n1);
    printf("enter the size of sorted array 2 :\n");
    scanf("%d",&n2);
    printf("enter the elements into the array 1 : \n");
    for(int i=0;i<n1;i++)
        scanf("%d",&a[i]);
    printf("enter the elements into the array 2 : \n");
    for(int i=0;i<n2;i++)
        scanf("%d",&b[i]);
    merge(a,b);

}
void merge(int a[],int b[])
{   int i,j,k;
    i=0;
    j=0;
    k=0;
    while(i<n1&&j<n2)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=b[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        c[k]=b[j];
        k++;
        j++;
    }
    printf("the sorted array : \n");
    for(int i=0;i<n1+n2;i++)
        printf("%d ",c[i]);
    median(n1+n2);
}
void median(int n)

{
    float a;
     printf("the median is: \n");
    if(n%2==0)
    {
        a=(c[n/2]+c[(n/2)-1])/2.0;
        printf("%f",a);
    }
    else
        printf("%d",c[n/2]);
}
