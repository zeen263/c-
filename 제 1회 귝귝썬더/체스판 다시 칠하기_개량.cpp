#include<stdio.h>
#include <algorithm>
char board[51][51];


// BW필터와 WB필터를 만들어서 각각 비교 

char BW[8][8] = {{'B','W','B','W','B','W','B','W'},
			   {'W','B','W','B','W','B','W','B'},
			   {'B','W','B','W','B','W','B','W'},
			   {'W','B','W','B','W','B','W','B'},
			   {'B','W','B','W','B','W','B','W'},
			   {'W','B','W','B','W','B','W','B'},
			   {'B','W','B','W','B','W','B','W'},
			   {'W','B','W','B','W','B','W','B'}};
			   
char WB[8][8] = {{'W','B','W','B','W','B','W','B'},
			   {'B','W','B','W','B','W','B','W'},
			   {'W','B','W','B','W','B','W','B'},
			   {'B','W','B','W','B','W','B','W'},
			   {'W','B','W','B','W','B','W','B'},
			   {'B','W','B','W','B','W','B','W'},
			   {'W','B','W','B','W','B','W','B'},
			   {'B','W','B','W','B','W','B','W'}};
			   
int cnt, cnt_WB, cnt_BW, cnt_min=99;			   
		
int main(void)
{
	int N, M, i, j;	
	scanf("%d %d", &N, &M);
	 
	for(i=0; i<N; i++)
	{
		scanf("%s", &board[i]);
	}
	

	
	for(i=0; i<N-7; i++)
	{
		for(j=0; j<M-7; j++) // board 위에서 한칸씩 옆으로 
		{
			
			cnt = 0;
			cnt_BW=cnt_WB=0;
			
			//printf("i : %d j : %d\n", i, j);
			for(int k=0; k<8; k++)
			{
				for(int l=0; l<8; l++)
				{
					if((k+l)%2==0)
					{
						if(board[i+k][j+l]=='B')
							cnt++;
					}
					else
					{
						if(board[i+k][j+l]=='W')
							cnt++;
					}	
				}	
			} 
			
		}
	}
	
	printf("%d", cnt_min);
	
	return 0;
}
