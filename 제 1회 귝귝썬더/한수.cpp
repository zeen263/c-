#include<stdio.h>

int main(void)
{
	int split[4]={};
	int X=0, i=0, j=0, res=0, cnt=0, t=0;
	
	// 1~99까지는 무조건 등차수열인 듯 
	// 100~110까지는 등차수열이 아님 
	
	scanf("%d", &X);
	
	if(X<=99) res = X;
	
	else // X = 100부터 
	{
		for(i=100; i<=X; i++)
		{
			t=i;
			for(j=0; t>0; j++)
			{
				split[j] = t % 10;
				t/=10;
			}
			
			int sub_01 = split[0]-split[1]; // 1자리와 10자리 
			int sub_12 = split[1]-split[2]; // 10자리와 100자리 
			int sub_23 = split[2]-split[3]; // 100자리와 1000자리 
			// 1000은 등차수열이 아니기 때문에 제외하도록 함 
			if (sub_01 == sub_12 && i!=1000) 
				++cnt;	
		}
		
		res = 99+cnt;
	}
	
	
	printf("%d", res);
	return 0;
 } 
