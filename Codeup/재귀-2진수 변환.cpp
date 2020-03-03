#include<stdio.h>

void recur(long n)
{
	if(n<=1) {printf("%d",n); return;}
	
	recur(n/2);
	printf("%d", n%2);
	
}

int main(void)
{
	long n;
	
	scanf("%d", &n); 
	
	recur(n);
	
	
	return 0;
}
