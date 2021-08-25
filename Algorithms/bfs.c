#include<stdio.h>
#include<conio.h>
int a[10][10],visited[10],v,start,q[20],rear=-1,front=-1;
void bfs(int n)
{   int curr;
    visited[n]=1;
    q[++rear]=n;
    printf("%d ",n);
    while(front!=rear)
    {


    curr=q[++front];
    for(int i=1;i<=v;i++)
    {
        if((a[curr][i]==1)&&(!visited[i]))
        {
            q[++rear]=i;
            visited[i]=1;
            printf("%d ",i);
        }

    }
    }

}


void main()
{
    printf("enter the no. of vertices: ");
    scanf("%d",&v);
    printf("enter the adjacency matrix: ");
    for(int i=1;i<=v;i++)
        for(int j=1;j<=v;j++)
            scanf("%d",&a[i][j]);
    printf("enter the start vertex: ");
    scanf("%d",&start);
    for(int i=1;i<=v;i++)
        visited[i]=0;
    bfs(start);

}
