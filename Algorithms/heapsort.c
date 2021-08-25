#include<stdio.h>
#include<stdlib.h>
int a[20],n1;
void heapify(int a[],int n);
void heapsort(int a[],int n);
void main()
{
    printf("enter the no. of elements : \n");
    scanf("%d",&n1);
    printf("enter the array : \n");
    for(int i=0;i<n1;i++)
        scanf("%d",&a[i]);
    heapify(a,n1);
    heapsort(a,n1);
}

void heapify(int a[],int n)
{
    int p,c,item;
    for(int i=((n/2)-1);i>=0;i--)
    {
        p=i;
        item=a[p];
        c=(2*p)+1;
        while(c<n)      //proceeding if it is not a leaf node
        {
            if((c+1)<n)
            {
                if(a[c]<a[c+1])          //selecting the greater element between the two
                    c=c+1;
            }
            if(item<a[c])       //if parent is less than child
            {
                a[p]=a[c];
                p=c;
                c=(2*p)+1;
            }
            else
                break;

        }
        a[p]=item;
    }
  /*  printf("the heap array : \n");
    for(int i=0;i<n1;i++)
        printf("%d ",a[i]); */
}

void heapsort(int a[],int n)
{
    int temp;
    for(int i=n-1;i>=0;i--)
    {
        temp=a[0];       //swapping is done so that larger element is put at the end
        a[0]=a[i];
        a[i]=temp;
        heapify(a,i);
    }
    printf("the sorted array : \n");
    for(int i=0;i<n1;i++)
        printf("%d ",a[i]);


}
