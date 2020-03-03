#include<stdio.h>

int main(void)
{
	int a[10000] = {0};
	int n=0, i=0, j=0;
	int temp=0, min=0;
	
	printf("input size : "); 
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);	
	

	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			if(a[i]<a[j]) 
			{
			temp = a[j];
			a[j] = a[i];
			a[i] = temp;
			}
		}
		
	}	
	
	printf("\n======================\n\n");
	
	for(i=0; i<n; i++)
		printf("%d ", a[i]);
	
	
	
}
