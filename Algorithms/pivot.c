#include<stdio.h>
#include<conio.h>
int beg,mid,end,key,p,a[10],n,result;
int pivot(beg,mid,end);
int bs(int key,int beg,int end,int a[]);
void main()
{
    printf("enter the no. of elements");
    scanf("%d",&n);
    printf("enter the elements into the array");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the element to be searched");
    scanf("%d",&key);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    p=pivot(beg,mid,end);
    //now use binary search
    printf("the pivot element is %d",a[p]);
    beg=0;
    end=n-1;
    if((key>=a[beg])&&(key<=a[p-1]))
    result=bs(key,beg,p-1,a);
    else
    result=bs(key,p,end,a);

     if(result==-1)
        printf("not found");
    else
        printf("element is found at position %d",result);






}

int pivot(int beg,int mid,int end)
{
    if(a[mid]>a[mid+1])
    {
        return mid+1;
    }
    else if(a[beg]>a[mid])
    {
        end=mid-1;
        return pivot(beg,(beg+end)/2,end);
    }
    else
    {   beg=mid+1;
        return pivot(beg,(beg+end)/2,end);
    }
}

int bs(int key,int beg,int end,int a[])
{
     mid=(beg+end)/2;
    if(beg<end)
    {
    if(a[mid]==key)
        return mid;
    else if(a[mid]>key)
        return bs(key,beg,mid-1,a);
    else
        return bs(key,mid+1,end,a);

    }
    else return -1;


}
