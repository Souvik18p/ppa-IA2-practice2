#include<stdio.h>
int input_number()
{
  int n;
  printf("enter n value\n");
  scanf("%d",&n);
  return n;
}
int is_composite(int n)
{
  int i;
  for(i=2;i<=n/2;++i)
  {
    if(n%i==0)
    return 0;
    else
    return 1;
  }
}
void output(int n,int composite)
{
  if(composite==0)
  printf("COMPOSITE");
  else
  printf("NOT COMPOSITE");
}
int main()
{
  int n,x;
  n=input_number();
  x=is_composite(n);
  output(n,x);
  return 0;
}