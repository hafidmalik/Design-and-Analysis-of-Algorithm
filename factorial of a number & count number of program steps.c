#include<stdio.h>
#include<conio.h>
void main()
{
	  int factorial=1, i,n;
	  printf("Enter n ");
	  scanf("%d",&n);
	  while (i<=n)
	  {
	  	factorial=factorial*i;
	  	i=i+1;
	  }
	  printf(" Factorial = %d", factorial);
}
