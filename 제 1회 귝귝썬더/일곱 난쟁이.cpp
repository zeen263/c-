#include<stdio.h>

int main(void)
{
	int dwarf[9]={};
	int real[7]={};
	int sum=0, byebye1=0, byebye2=0, cnt=0, t=0;
	
	for(int i=0; i<9; i++)
		{
			scanf("%d",&dwarf[i]);
			sum += dwarf[i];
		}
		
	// 9명의 키를 전부 더하고 2명의 키를 빼는 식으로 진행 
	
	for(int i=0; i<9; i++) // 첫번째로 뺄 난쟁이 
	{
		for(int j=0; j<9; j++) // 두번째로 뺄 난쟁이 
		{
			if (sum - (dwarf[i]+dwarf[j]) == 100) 
			{
				byebye1=i;
				byebye2=j;
				
				break;
			}
		}
	}
	
	
	
	for(int i=0; i<9; i++)
	{
		if(i != byebye1 && i!= byebye2)
		{
			real[cnt] = dwarf[i];
			cnt++;
		}		
	}
	
	
	for (int i=0; i<7; i++)
	{
		for(int j=i+1; j<7; j++)
		{
			if(real[j] < real[i])
				{
					t = real[i];
					real[i]=real[j];
					real[j]=t;
				}
		}
	}

	for(int i=0; i<7; i++)
		printf("%d\n", real[i]);

	return 0;
 } 
