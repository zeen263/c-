#include<stdio.h>

void star(int n); 

void recur(int n)
{
	if(n==0) return;
	
	recur(n-1);
	star(n);

}

void star(int n)
{
	if(n==0) {printf("\n"); return;	}
	printf("*");
	star(n-1);
}


int main(void)
{
	int n;
	
	scanf("%d", &n);
	recur(n);
 } 
