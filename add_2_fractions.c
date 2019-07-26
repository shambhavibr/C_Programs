typedef struct fraction
{
  int n,d;
}fraction;

void input( fraction *, fraction*);

fraction compute( fraction, fraction);

void output(fraction);

main()
{
  fraction f1,f2;
  
  input(&f1,&f2);
  f1=compute(f1,f2);
  output(f1);
}

void input (fraction *f1, fraction *f2)
{
  char x,num1[4],num2[4];
  printf("Enter the first fraction");
  scanf("%[^/]s",num1);
  scanf("%c",&x);
  scanf("%s",num2);
  
  f1->n=atoi(num1);
  f1->d=atoi(num2);
  
  
  printf("Enter the second fraction");
  scanf("%[^/]s",num1);
  scanf("%c",&x);
  scanf("%s",num2);
  
  f2->n=atoi(num1);
  f2->d=atoi(num2);
}

fraction compute(fraction f1,fraction f2)
{
  fraction f3;
  
  int i,a,b,c,d,x,y,gcd;
  a=f1.n;
  b=f1.d;
  c=f2.n;
  d=f2.d;
  
  x=(a*d)+(b*c); 
  y=b*d; 

  for(i=1; i <= x && i <= y; ++i)
  {
        if(x%i==0 && y%i==0)
              gcd = i;
  }
  
  f3.n=x/gcd;
  f3.d=y/gcd;
  
  return f3;
  
}

void output(fraction f1)
{
  printf("The sum of the fractions is %d/%d", f1.n,f1.d);
}

