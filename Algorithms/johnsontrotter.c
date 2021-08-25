#include<stdio.h>
#include<stdbool.h>
bool rtol=false;
bool ltor=true;
int search(int a[],int n,int mobile)
{
    for(int i=0;i<n;i++)
        if(mobile==a[i])
            return i+1;

}
int getmobile(int a[],bool dir[],int n)
{   int mobile_prev=0;
    int mobile=0;
    for(int i=0;i<n;i++)
    {
        if((dir[a[i]-1]==rtol)&&(i!=0))
        {
            if((a[i]>a[i-1])&&(a[i]>mobile_prev))
               {
                mobile=a[i];
                mobile_prev=mobile;
               }

        }
         if((dir[a[i]-1]==ltor)&&(i!=n-1))
        {
            if((a[i]>a[i+1])&&(a[i]>mobile_prev))
               {
                mobile=a[i];
                mobile_prev=mobile;
               }

        }


    }
    if(mobile==0&&mobile_prev==0)
        return 0;
    else
        return mobile;
}

int fact(int n)
{
    int res=1;
    for(int i=1;i<=n;i++)
    {
        res=res*i;
    }
    return res;
}
int printoneperm(int a[],bool dir[],int n)
{
    int mobile,pos,temp;
    mobile=getmobile(a,dir,n);
    pos=search(a,n,mobile);
    //swapping elements according to the direction
    if(dir[a[pos-1]-1]==rtol)
    {
        temp=a[pos-1];
        a[pos-1]=a[pos-2];
        a[pos-2]=temp;
    }

    else if(dir[a[pos-1]-1]==ltor)
    {
        temp=a[pos];
        a[pos]=a[pos-1];
        a[pos-1]=temp;

    }

    //changing the directions of the elements if necessary

    for(int i=0;i<n;i++)
    {
        if(a[i]>mobile)
        {
            if(dir[a[i]-1]==ltor)
                dir[a[i]-1]=rtol;
            else if(dir[a[i]-1]==rtol)
                dir[a[i]-1]=ltor;
        }

    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
void printpermutation(int n)
{   int a[n];
    bool dir[n];
    for(int i=0;i<n;i++)
    {
        a[i]=i+1;
        printf("%d",a[i]);
    }
    printf("\n");

    for(int i=0;i<n;i++)
        dir[i]=rtol;
    for(int i=1;i<fact(n);i++)
        printoneperm(a,dir,n);
}


void main()
{
    int n;
printf("enter the number = ");
scanf("%d",&n);
printpermutation(n);
}

