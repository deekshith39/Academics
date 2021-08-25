#include<stdio.h>
#include<stdlib.h>
int a[20];
int partition(int a[],int low,int high);
void qs(int a[],int low,int high);

void main()
{
    int n;
    printf("enter the no.of elements : \n");
    scanf("%d",&n);
    printf("enter the elements into the array : \n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    qs(a,0,n-1);
    printf("the sorted elements are : \n");
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);

}

void qs(int a[],int low,int high)
{int pindex;
    if(low<high)
    {
        pindex=partition(a,low,high);
        qs(a,low,pindex-1);
        qs(a,pindex+1,high);
    }
}

int partition(int a[],int low,int high)
{int pivot,i,j,temp;
    pivot=a[low];
    i=low+1;
    j=high;
    while(1)
    {
        while(a[i]<=pivot&&i<=high)
            i=i+1;
        while(a[j]>pivot&&j>=low)
            j=j-1;
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        else{
             a[low]=a[j];
            a[j]=pivot;
            return j;
        }



    }

}
