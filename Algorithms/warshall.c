#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[20][20],v;
    printf("enter the no.of vertices : ");
    scanf("%d",&v);
    printf("enter the adjacency matrix : ");
    for(int i=1;i<=v;i++)
        for(int j=1;j<=v;j++)
             scanf("%d",&a[i][j]);
    for(int k=1;k<=v;k++)
      for(int i=1;i<=v;i++)
        for(int j=1;j<=v;j++)
          if(a[i][j]!=1&&(a[i][k]==1&&a[k][j]==1))
            a[i][j]=1;

    printf("the transitive closure is : \n");
    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)
            printf("%d ",a[i][j]);
            printf("\n");

    }

}
