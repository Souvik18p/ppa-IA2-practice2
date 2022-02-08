#include<stdio.h>

int input()
{
  int a;
  printf("enter the value of a =\n");
  scanf("%d",&a);
  return a;
}

int check_scalene(int a,int b,int c)
{
  if(a!=b && b!=c)
  return 0;
  else
  return 1;
}

int output(int a,int b,int c)
{
  int scalene;
  if(scalene==1)
  printf("IS SCALENE");
  else 
  printf("NOT SCALENE");
}

int main()
{
  int a,b,c;
  a=input();
  b=input();
  c=input();
  check_scalene(a,b,c);
  output(a,b,c);
  return 0;
}