#include<stdio.h>

void recur(int n, int i)
{
	if(n == 1 && i==1) return;
	
	if(n-i == 0) { recur(n-1,0); printf("\n"); }
	else
	{
		recur(n,i+1);
		printf("*");			
	}
}


int main(void)
{
	int n;
	
	scanf("%d", &n);
	recur(n,0);
 } 
