#include<stdio.h>
#include<conio.h>
#include<time.h>
int ls(int key,int i);
int bs(int key,int beg,int end1,int a[]);
int key,i,a[10],n,result,choice;
int beg,end1,mid;
clock_t start,end;
double time1;
void main()
{
    printf("enter the no. of elements in the array");
    scanf("%d",&n);
    printf("enter the elements into the array");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the element to be searched");
    scanf("%d",&key);
    i=0;
    printf("enter the choice:");
    scanf("%d",&choice);
    if(choice==1)
    {
    start=clock();
    result=ls(key,i);
    end=clock();
    time1=(end-start)/CLOCKS_PER_SEC;
    }
    else
    {
        beg=0;
        end1=n-1;

        start=clock();
    result=bs(key,beg,end1,a);
        end=clock();
    }
    printf("result =%f",time1);
    if(result==-1)
        printf("not found");
    else
        printf("element is found at position %d",result);


}

ls(int key,int i)
{
    if(i>n)
        return -1;
    if(key==a[i])
        return i;
    else
        return ls(key,++i);

}

bs(int key,int beg,int end1,int a[])
{
    mid=(beg+end1)/2;
    if(beg<end1)
    {
    if(a[mid]==key)
        return mid;
    else if(a[mid]>key)
        return bs(key,beg,mid-1,a);
    else
        return bs(key,mid+1,end1,a);

    }
    else return -1;

}
