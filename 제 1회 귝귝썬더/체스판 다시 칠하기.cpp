#include<stdio.h>
char board[51][51];


// BW���Ϳ� WB���͸� ���� ���� �� 

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
			   
int cnt_WB, cnt_BW, cnt_min=99;			   
		
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
		for(j=0; j<M-7; j++) // board ������ ��ĭ�� ������ 
		{
			
			cnt_BW=cnt_WB=0;
			
			//printf("i : %d j : %d\n", i, j);
			for(int k=0; k<8; k++)
			{
				for(int l=0; l<8; l++)
				{
					if(board[i+k][j+l] != BW[k][l]) cnt_BW++;
					if(board[i+k][j+l] != WB[k][l]) cnt_WB++;	
				}	
			} 
			if(cnt_BW<cnt_min) cnt_min = cnt_BW;
			if(cnt_WB<cnt_min) cnt_min = cnt_WB;
		}
	}
	
	printf("%d", cnt_min);
	
	return 0;
}
