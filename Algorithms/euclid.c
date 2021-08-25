#include<stdio.h>

int gcd(int m,int n);
int rem;
void main()
{
int n,m,ans;
printf("enter two numbers = ");
scanf("%d%d",&m,&n);
ans=gcd(m,n);
printf("GCD = %d",ans);
}

int gcd(int m,int n)
{
if(m==0)
return n;
if(n==0)
return m;
rem=m%n;
gcd(n,rem);
}

