#include<stdio.h>
#include<stdlib.h>
int a[20],n;
void  merge(int low,int mid,int high,int a[]);
void mergesort(int low,int high,int a[]);
void main()
{
    printf("enter the no. of elements in the array : \n");
    scanf("%d",&n);
    printf("enter the elements into the array : \n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);

    mergesort(0,n-1,a);

    printf("the sorted array is : \n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

}

void mergesort(int low,int high,int a[])
{
    int mid;
    if(low<high)
    {
    mid=(low+high)/2;
    mergesort(low,mid,a);
    mergesort(mid+1,high,a);
    merge(low,mid,high,a);
    }
}

void merge(int low,int mid,int high,int a[])
{ int i,j,k,c[20];
    i=low;
    j=mid+1;
    k=0;
    while(i<=mid&&j<=high)
    {
        if(a[i]<a[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=a[j];
            k++;
            j++;

        }

    }
    while(i<=mid)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        c[k]=a[j];
        k++;
        j++;
    }
for(int i=low,j=0;i<=high;i++,j++)
    a[i]=c[j];

}
