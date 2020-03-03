#include<stdio.h>

int main(void)
{
	int score[5]={0};
	char name[5]={'a', 'b', 'c', 'd', 'e'};
	int i=0, max=0, maxi=0;
	
	for(i=0; i<5; i++)
		scanf("%c %d", &name[i], &score[i]);	
	
	max=score[0];
	
	for(i=0; i<5; i++)
   		{
			if(score[i]>max) max=score[i];
			maxi=i;
		}

	
	printf("%c : %d",name[maxi],max);
}
