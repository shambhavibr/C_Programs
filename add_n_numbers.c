#include <stdio.h>
void input(int *, int *);
int compute(int, int*);
void output(int);
  
main()
{
  int a[10],size,sum;
  
  input(&size,a);
  sum=compute(size,a);
  output(sum);
}

void input(int *n, int *a)
{
  int i;
  printf("Enter the number of integers to be added");
  scanf("%d",n);
  printf("Enter the elements");
         
  for(i=0;i<*n;i++)
  {
     scanf("%d",&a[i]);
  }
}

int compute(int n, int *a)
{
  int i,sum=0;
  for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  return sum;
}

void output(int x)
{
  printf("The sum is %d",x);
}

           
         
   
