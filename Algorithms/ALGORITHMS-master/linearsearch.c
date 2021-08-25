#include<stdio.h>
#include<stdlib.h>
void push(int);
void display();
int top=-1;
int c[5],n;
void main()
{
int a[10],key,n1,b[5],m=0;
int q=0;
//int m=0;
printf("enter the no of test cases = ");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
  printf("enter the size of the array= ");
  scanf("%d",&n1);
              printf("enter the element to be found in the array = ");
              scanf("%d",&key);
 printf("enter the elements into the array =");
 for(int j=0;j<n1;j++)
  {
  scanf("%d",&a[j]);
  }
//fflush(stdin);
for(int i=0;i<n1;i++)
{
 if(a[i]==key)
 {
 m=1;
 push(1);
 break;
 }
}
if(m==0)
push(-1);
}
display();
}
void push(int ele)
{
top++;
c[top]=ele;
}
void display()
{
for(int i=0;i<n;i++)
printf("%d ",c[i]);
}


