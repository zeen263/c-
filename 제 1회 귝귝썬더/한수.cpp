#include<stdio.h>

int main(void)
{
	int split[4]={};
	int X=0, i=0, j=0, res=0, cnt=0, t=0;
	
	// 1~99������ ������ ���������� �� 
	// 100~110������ ���������� �ƴ� 
	
	scanf("%d", &X);
	
	if(X<=99) res = X;
	
	else // X = 100���� 
	{
		for(i=100; i<=X; i++)
		{
			t=i;
			for(j=0; t>0; j++)
			{
				split[j] = t % 10;
				t/=10;
			}
			
			int sub_01 = split[0]-split[1]; // 1�ڸ��� 10�ڸ� 
			int sub_12 = split[1]-split[2]; // 10�ڸ��� 100�ڸ� 
			int sub_23 = split[2]-split[3]; // 100�ڸ��� 1000�ڸ� 
			// 1000�� ���������� �ƴϱ� ������ �����ϵ��� �� 
			if (sub_01 == sub_12 && i!=1000) 
				++cnt;	
		}
		
		res = 99+cnt;
	}
	
	
	printf("%d", res);
	return 0;
 } 
