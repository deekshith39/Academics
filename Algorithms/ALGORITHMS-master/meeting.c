#include<stdio.h>
#include<conio.h>
int a[10],b[10],n;
int evaluate(int a[],int b[]);
void main()
{
    printf("enter the no. of meetings");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
     printf("enter the start timing of the meeting %d\n",i+1);
     scanf("%d",&a[i]);
     printf("enter the end timing of the meeting %d\n",i+1);
     scanf("%d",&b[i]);
    }


    evaluate(a,b);

}

int evaluate(int a[],int b[])
{
    //sorting the end timings array
    int i, key,c, j,key1;
    for (i = 1; i < n; i++)
    {
        key = b[i];
        key1=a[i];
        j = i - 1;

        while (j >= 0 && b[j] >= key)
        {
            b[j + 1] = b[j];
            a[j+1]=a[j];
            j = j - 1;
        }
        b[j + 1] = key;
        a[j+1]=key1;
    }
    for(int i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
    printf("%d ",b[i]);

    }

    //sorting is done!
    printf("the meetings which are accepted are : ");
    printf("\nMeeting at %d - %d\n",a[0],b[0]);
    j=0;
    for(int i=1;i<n;i++)
    {
        c=b[j];
         if(a[i]>=c)
         {
        printf("Meeting at %d - %d\n",a[i],b[i]);
        j=i;
        }


    }



}
