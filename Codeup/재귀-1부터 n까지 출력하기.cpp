#include<stdio.h>

void print(int n)
{
	printf("%d\n",n); // n부터 1까지 출력 
	
	if(n==1) return;
	
	else print(n-1);
	
	//printf("%d\n",n); // 1부터 n까지 출력 
	
}

int main(void)
{
	int n;
	scanf("%d",&n);
	
	print(n);
	
	return 0;
}
