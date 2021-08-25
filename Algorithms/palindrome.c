#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int a[20][20];
char s[50];
void pal(char s[],int n);
void main()
{
    int n;

    printf("enter the string \n");
    gets(s);
    n=strlen(s);
    pal(s,n);

}

void pal(char s[],int n)
{   int beg;
    int max;
    int j;
    max=1;
    for(int i=0;i<n;i++)//all the diagonal elements should be 1 since single alphabets are considered as palindromes
        a[i][i]=1;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            a[i][i+1]=1;
            beg=i;
            max=2;
        }
    }
    for(int k=3;k<=n;k++)
    {
        for(int i=0;i<n-k+1;i++)
        {
            j=k+i-1;
            if(s[i]==s[j]&&a[i+1][j-1]==1)
            {
                a[i][j]=1;
                if(k>max)
                {
                beg=i;
                max=k;
                }

            }
        }
    }

    printf("maximum length of the palindrome is : %d \n",max);
    printf("the palindrome is : \n");
    for(int i=beg;i<beg+max;i++)
        printf("%c",s[i]);
}
