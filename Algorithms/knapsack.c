#include<stdio.h>
#include<stdlib.h>
int n,m,p[20],w[20],v[20][20],i,j;
void knap()
{   int x[10];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if((i==0)||(j==0))
                v[i][j]=0;
            else if(w[i-1]>j)
                v[i][j]=v[i-1][j];
            else
                v[i][j]=max(v[i-1][j],v[i-1][j-w[i-1]]+p[i-1]);
        }
    }
    printf("the matrix is = \n");
    for(i=0;i<=n;i++){
    for(j=0;j<=m;j++)
        printf("%d ",v[i][j]);
    printf("\n");
    }
    printf("the optimal solution is %d\n",v[i-1][j-1]);
    i=n;
    j=m;
    while(i!=0&&j!=0)
    {
        if(v[i][j]!=v[i-1][j-1])
        {
            x[i]=1;
            j=j-w[i];
        }
        i--;
    }
    for(int i=1;i<=n;i++)
        if(x[i]==1)
        printf("object %d is selected\n",i);
}

int max(int a,int b)
{
    return (a>b)?a:b;
}

void main()
{

    printf("enter the no.of objects = \n");
    scanf("%d",&n);
    printf("enter the maximum weight = \n");
    scanf("%d",&m);
    printf("enter the weights = \n");
    for(int i=0;i<n;i++)
        scanf("%d",&w[i]);
    printf("enter the profits = \n");
    for(int j=0;j<n;j++)
        scanf("%d",&p[j]);
    for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++)
            v[i][j]=0;
    knap();
}


