#include<stdio.h>

void swap(int *pa, int *pb)
{
	int temp;
	
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

void line(int *maxp, int *midp, int *minp)
{
	if (*maxp<*midp) 
	{
		swap(maxp,midp);
		
		if(*maxp<*minp)
			swap(maxp,minp);	
	}
	
	if(*midp<*minp)
		swap(midp, minp);
}

void main()
{
	
	int max, mid, min;
	
	scanf("%d %d %d", &max, &mid, &min);
	
	line(&max, &mid, &min);
	
	printf("%d %d %d", max, mid, min);
}



