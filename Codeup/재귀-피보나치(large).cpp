#include<stdio.h>

unsigned long long cache[201]={};
unsigned long long pibo=0;

unsigned long long recur(int n)
{
	if(n==2) return 1; 
	if(n==1) return 1;
	
	if (cache[n] != 0) pibo = cache[n];
	
	else
	{
		pibo = (recur(n-1)+recur(n-2)) % 10009;
		cache[n] = pibo;
	}

	return pibo;

}

int main(void)
{
	unsigned long long res, n, sum=0;
	cache[0]=1; cache[1]=1;

	scanf("%d", &n);
	
	res = recur(n);
	printf("%d", res%10009);
	
	
	return 0;
 } 
