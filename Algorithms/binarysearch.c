#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,pos,key,a[10],mid,beg,end;
         int max,min,p,q;
         int count=0;
                  p=q=-1;

    printf("enter the no of elements =");
    scanf("%d",&n);
    printf("enter the elements into the array =");
    for(int i=0;i<n;i++)
    {

        scanf("%d",&a[i]);

    }
    printf("enter the element to be searched - ");
    scanf("%d",&key);
    beg=0;
    end=n-1;
    mid=(beg+end)/2;
    while(beg<=end)
    {

        if(a[mid]==key)
        {   count++;
            break;

        }
        else if(a[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            beg=beg+1;

        }

        mid=(beg+end)/2;

    }
    if(count==0)
    {
        printf("%d %d %d",p,q,count);
    }
else{
    max=mid;
    min=mid;

    while(max<=(n-1))
    {
        if(a[max]==key)
            {
                count++;
             p=max;

            }
            max++;
    }
    while(min>=0)
    {

        if(a[min]==key)
        {
            count++;
            q=min;
        }
        min--;
    }

    printf("count =%d",count-2);
    printf("the first and last occurrence of the key element is %d and %d",q+1,p+1);
}
}
