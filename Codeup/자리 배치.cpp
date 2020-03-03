#include<stdio.h>

int main(void)
{
	int student[100]={};
	int n,c, temp, t=0;
	
	scanf("%d %d", &n,&c);
	
	for(int i=1; i<=n; i++)
		scanf("%d", &student[i]);

	for(int i=1; i<=n; i++)
	{
		for(int j=i; j<=n; j++)
		{
			if(student[j] < student[i])
				{
					temp=student[i];
					student[i]=student[j];
					student[j]=temp;
				}
		}
	}

	for(int i=1; i<=n; i++)
	{	
		printf("%d ", student[i]);

		if(i%c == 0)
			printf("\n");
		
	}
	
	return 0;
 } 
