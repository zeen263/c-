#include<stdio.h>

void print(int n)
{
	printf("%d\n",n); // n���� 1���� ��� 
	
	if(n==1) return;
	
	else print(n-1);
	
	//printf("%d\n",n); // 1���� n���� ��� 
	
}

int main(void)
{
	int n;
	scanf("%d",&n);
	
	print(n);
	
	return 0;
}
