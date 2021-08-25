#include<conio.h>
#include<stdio.h>
int a[20][20],visited[20],v,e,x,y,count=0;
void dfs(int n)
{    visited[n]=1;
    for(int i=1;i<=v;i++)
    {
        if((a[n][i]==1)&&(visited[i]!=1))
        {
            printf("\n%d->%d",n,i);
            dfs(i);
        }

    }



}

void main()
{
    printf("enter the no. of edges and vertices\n");
    scanf("%d%d",&e,&v);
    for(int i=1;i<=v;i++)
        for(int j=1;j<v;j++){
                visited[i]=0;
            a[i][j]=0;}
    printf("enter the end points of the edges");
    while(e--)
    {
        scanf("%d%d",&x,&y);
        a[x][y]=a[y][x]=1;
    }
    dfs(1);
    for(int i=1;i<=v;i++)
    {
        if(visited[i]==1)
            count++;
    }
    if(count==v)
        printf("graph is connected");
    else
        printf("graph is not connected");


}
