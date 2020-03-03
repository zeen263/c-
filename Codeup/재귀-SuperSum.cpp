#include<stdio.h>
 //¹ÌÇØ°á 
int memo[15][15]={};
int sum=0;

int recur(int k, int n)
{
	//printf("%d %d\n", k,n);
	
	if(k==0) { return n;}
	
	if(memo[k][n] != 0)
		return memo[k][n];
	else
	{		
		for(int i=1; i<=n; i++)
		{
			memo[k][n] += recur(k-1,i);
		}
	}	
	return memo[k][n];

}

int main(void)
{
	int k, n;
	
	while (scanf("%d %d", &k, &n)!=EOF)
	{
		int res = recur(k,n);
		printf("%d\n", res);
	}
	
	return 0;
}
