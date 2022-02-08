#include<stdio.h>

void input(float*base,float*hight)
{
  printf("Enter the value of base ");
  scanf("%f", base);
  printf("Enter the value of hight ");
  scanf("%f" , hight);
}
  void area(float base , float hight, float * area  )
  {
*area = ((base*hight)/2);
  }
  void output(float base, float height, float area)
  {
    printf("The area of triangle is =%f",area);

  }
  int main()
  { 
    float b,h,a;
    input(&b,&h);
    area(b,h,&a);
    output(b,h,a);
    return 0;
  }