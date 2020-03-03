#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rand_mat();
void mat_multi();

int A[9], B[9];



int main(void)
{

	mat_multi();
}


void rand_mat()
{

	int i,j;
	
	srand((unsigned)time(NULL));

	for (i = 0; i < 9; i++)        // rand함수를 돌려 행렬 A,B를 만든다.
	{
		A[i] = rand() % 10;
		B[i] = rand() % 10;
	}

	for(i=0; i<9; i+=3)
	{
		for(j=0; j<3; j++)
		{
			printf("%d  ",A[i+j]);
		}
		
		printf("| ");
		
		for(j=0; j<3; j++)
		{
			printf("%d  ",B[i+j]);
		}
		
		printf("\n\n");
	}
	printf("\n");
}

void mat_multi()
{
	int sum[9]={0,0,0,0,0,0,0,0,0};
	int i, j;
	int k = 0;
	int index=0;

	rand_mat();    // 행렬 생성함수를 호출
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			for(k=0; k<3; k++)
			{
				printf("%d*%d + ", A[(3*i)+k], B[k*3+j]);
				sum[index] += A[(3*i)+k] * B[k*3 + j];				
				
			}
			printf(" |  ");			
			index++;
			
		}
		
		printf("\n\n\n");
	}
	
	
	for(i=0; i<9; i+=3)
	{
		for(j=0; j<3; j++)
		{
			printf("%5d", sum[i+j]);
		}
		printf("\n\n");
	}

}


