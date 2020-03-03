#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void check_same(int *mynum, int *lotto);
void generate_num(int *arr);
void input_num(int *arr);
void sort(int *arr);


int main(void)
{
	int mynum[6] = {0};
	int lotto[6] = {0};
	
	int i=0, j=0, temp=0, seed;
	
	seed = time(NULL);
	srand(seed);
	
	
	printf("to quit, input -1\n");
	
	while(1)
	{
		printf("\n========================\n");
		printf("to random select, input 0\n");
		printf("input 6 num : ");
		
		if(mynum[0] == -1) break;
		
		
		input_num(mynum);		
		generate_num(lotto);
		
		
		printf("\n   my num : ");
		sort(mynum);
		
		printf("\nlotto num : ");
		sort(lotto);
		
		check_same(mynum, lotto);
		
	}

	printf("end\n"); 
}


void generate_num(int *arr)
{
	int i=0, j=0;
	int checker[46]={0};
	
	while(i<6)
	{	
		int tmp = (rand() % 45) + 1;
		if(checker[tmp] != 1)	
			{
				arr[i] = tmp;
				checker[tmp] = 1;
				i++;
			}
	}

}


void input_num(int *arr)
{
	int i=0; 
	
	for(i=0; i<6; i++)
		{
			scanf("%d",&arr[i]);
			arr[i] %= 46;
			
			if(arr[0] == 0) break;
		}
		
		if(arr[0] == 0)
			generate_num(arr);
}


void check_same(int *mynum, int *lotto)
{
	int i=0, j=0;
	int count=0;
	
	for(i=0; i<6; i++)
	{
		for(j=0; j<6; j++)
			if (lotto[i] == mynum[j]) count++;		
	}
	
	printf("\n\nmatch : %d", count);
}


void sort(int *arr)
{
	int i=0, j=0, temp=0;
	
	for(i=0; i<6; i++)
	{
		for(j=0; j<6; j++)
		{
			if(arr[i]<arr[j])
			{
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	
	for(i=0; i<6; i++)
			printf("%2d ", arr[i]);
}

