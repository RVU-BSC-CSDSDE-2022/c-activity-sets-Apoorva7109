#include <stdio.h>
int main (){
  int a,b,sum;
  printf("enter the first number\n");
  scanf("%d",&a);
  printf("enter the second number\n");
  scanf ("%d",&b);
  sum=sum_func(&a,&b);
  printf("the sum of 2 number is %d",sum);
  return 0;
}
sum_func(int*a,int*b)
{
  int sum =*a+*b;
  return sum;
}