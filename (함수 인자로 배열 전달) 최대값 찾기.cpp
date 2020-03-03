#include<stdio.h>

void findMax(int *num, int size);
void print(int *num, int size);


int main(void)
{
	int num[5] = {0,0,0,0,0};
	int i=0, size=0;
	
	printf("size of array : ");
	scanf("%d", &size);
	
	print(num, size);
	
}


void print(int *num, int size)
{
	int i=0;
	
	for(i=0; i<size; i++)
	{
		scanf("%d", &num[i]);
	}
	
	findMax(num, size);
}

void findMax(int *num, int size)
{
	int i=0, max=0;
	
	for(i=0; i<size; i++)
	{
		if(num[i]>max) max=num[i];
	}
	
	printf("\nmax : %d ",max);
}

