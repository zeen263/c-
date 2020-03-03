#include<stdio.h>

void rotate(int *pa, int *pb, int *pc)
{
	int temp = 0;
	
	temp = *pa;
	*pa = *pb;
	*pb = *pc;
	*pc = temp;
}

int main(void)
{
	int a=1, b=2, c=3;
	char ch[3] = {0,0,0};

	*ch = getch();
	if(*ch==10)
	{
		*ch=getch();
		printf("%d", *ch);
	}
	printf("%d %d %d",ch[0], ch[1], ch[2]);



}
 
