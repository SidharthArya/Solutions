
#include<stdio.h>

int fib(int n)
{
  if(n == 0) return 0 ;
  if(n == 1) return 1;
  int Arr[n];
  Arr[0] = 0; Arr[1] = 1;
  for(int i = 2 ; i < n; i++)
    Arr[i] = Arr[i-1] + Arr[i-2];
  return Arr[n-1] + Arr[n-2];
}
int main()
{
  printf("%d", fib(40));
  return 0;
}
