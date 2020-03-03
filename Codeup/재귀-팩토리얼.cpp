#include<stdio.h>

int recur(int n)
{
	if(n==1) return 1;

	return n*recur(n-1);

	
}

int main(void)
{
	int res, n, sum=0;
	
	scanf("%d", &n);
	
	res = recur(n);
	printf("%d", res);
	
	return 0;
 } 
