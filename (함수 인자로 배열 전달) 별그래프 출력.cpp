#include<stdio.h>

void drawGraph(int *score, int size);


int main(void)
{
	int score[5]={0};
	int i=0, size=5;
	
	printf("array's size? : ");
	scanf("%d", &size);
	
	printf("input score : ");
	for(i=0; i<size; i++)
		scanf("%d", &score[i]);
	
	printf("\n");
		
	drawGraph(score, size);
} 

void drawGraph(int *score, int size)
{
	int i=0, j=0;
	
	for(i=0; i<size; i++)
	{
		printf("(%3d) : ", score[i]);
		
		for(j=0; j<(score[i])/5; j++)
			printf("*");
			
		printf("\n");
	}
	
}
