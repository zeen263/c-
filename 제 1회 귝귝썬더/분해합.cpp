#include<stdio.h>

int main(void)
{
	int N=0, t=0, i=0, sum=0, res=0;

	
	scanf("%d", &N);

	
	
	for(i=1; i<N; i++) // 1부터 N-1까지 생성자 체크 
	{
		t=i;
		while(t) //i 각 자릿수의 합 
		{
			sum += t % 10;
			t/=10;
			
		}
		
		
		if(i+sum == N)
		{
			res = i;  break;
		}
		
		
		sum=0;
	}
	
	if(res == 0) printf("0");
	else printf("%d", res);
	
	return 0;
}
