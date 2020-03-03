#include<stdio.h>

void recur(int a, int b, int n)
{
	if(n>b) return;
	if(n%2 == 1) printf("%d ", n);
	
	recur(a,b,n+1);
	
	
	
}

int main(void)
{
	int a, b, n;
	
	scanf("%d %d", &a, &b);
	
	recur(a,b, a);
	
	return 0;
 } 
