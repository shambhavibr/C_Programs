#include <stdio.h>

void input(int *, int *);

int compute(int, int);

void output(int);

main()
{
  int num1,num2;
  input(&num1,&num2);
  num2=compute(num1,num2);
  output(num2); 
}

void input(int *x,int *y)
{
  printf("Enter first number");
  scanf("%d",&x);
  
  printf("Enter second number");
  scanf("%d",&y);
}

int compute(int x, int y)
{
  return x+y;
}

void output(int x)
{
  printf("Sum of the two numbers is %d",x);
}
  






