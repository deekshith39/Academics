#include<stdio.h>
#include<stdlib.h>
void minrange(int arr[20][20],int n,int k);
void main()
{
    int arr[20][20],n,k;
    printf("enter the no. of lists : ");
    scanf("%d",&k);
    printf("enter the no. of elements per list : ");
    scanf("%d",&n);
    printf("enter the elements in three lists : \n");
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    minrange(arr,n,k);

}
void minrange(int arr[20][20],int n,int k)
{
    int minval,maxval,minele,maxele,minimumrange,minindex,flag;
    int ptr[100];
    for(int i=0;i<=k;i++)
        ptr[i]=0;
    minimumrange=9999;
    while(1)
    {
        minval=9999;
        maxval=-9999;
        flag=0;
        minindex=-1;
        for(int i=0;i<k;i++)
        {
            if(ptr[i]==n)
            {
                flag=1;
                break;
            }
            if(ptr[i]<n&&arr[i][ptr[i]]<minval)
            {
                minval=arr[i][ptr[i]];
                minindex=i;
            }
            if(ptr[i]<n&&arr[i][ptr[i]]>maxval)
                maxval=arr[i][ptr[i]];
        }
        if(flag)
            break;

        ptr[minindex]++;
        if((maxval-minval)<minimumrange)
        {
            maxele=maxval;
            minele=minval;
            minimumrange=maxele-minele;
        }

    }
    printf("the minimum range = %d %d",minele,maxele);
}
