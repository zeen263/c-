#include<stdio.h>
#include<string.h>

char command[10];
int stack[10001];

int main(void)
{
	int N = 0, size_stack=0, num=0;
	scanf("%d", &N);
	
	while(N)
	{
		N--;
		scanf("%s", command);
		
		
		if(strcmp(command,"push")==0)
		{
			scanf("%d", &num);
			
			stack[size_stack++] = num;
			// stack[size_stack]에 집어넣는거 먼저 하고 1 증가 
		}
		
		if(strcmp(command,"pop")==0)
		{
			if(size_stack==0) printf("-1\n");
			else printf("%d\n", stack[--size_stack]);
			
		}
			

		
		if(strcmp(command,"size")==0)
			printf("%d\n", size_stack);
		
		if(strcmp(command,"empty")==0)
			printf("%d\n", size_stack==0);
			
		if(strcmp(command, "top")==0)
		{
			if(size_stack==0) printf("-1\n");
			else printf("%d\n", stack[size_stack-1]);
		}
		
		
		
	}
	
	return 0;
}



