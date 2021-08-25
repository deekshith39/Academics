#include<stdio.h>
#include<conio.h>
int a[10][10],v,e,k,indegree[10],temp[10],x,y;
void topo()
{
    k=0;
    for(int i=1;i<=v;i++)
    {
        if(indegree[i]==0)
        {
            indegree[i]=1;
            temp[++k]=i;
            for(int j=1;j<=v;j++)
            {
                if((a[i][j]==1)&&(indegree[j]!=-1))
                {
                    indegree[j]--;

                }

            }
            i=0;
        }
    }



}

void main()
{
    printf("enter the no.of edges and vertices : \n");
    scanf("%d%d",&v,&e);
    printf("enter the adjacency matrix : ");
    for(int i=1;i<=v;i++)
        indegree[i]=0;
    for(int i=1;i<=v;i++)
        for(int j=1;j<=v;j++)
    {
    scanf("%d",&a[i][j]);
    if(a[i][j]==1)
    indegree[j]++;
    }
    topo();
    if(k!=v)
        printf("\nthere is no topological ordering");
    else
    {
        for(int i=1;i<=v;i++)
            printf("%d ",temp[i]);
    }


}
