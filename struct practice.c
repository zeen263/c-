#include <stdio.h>

typedef struct std
{
	int kor;
	int eng;

}Student;


void set(Student *st)
{
	st[0].kor=10;
	st[0].eng=5;
	
	st[1].kor=20;
	st[1].eng=20;	
	
}

void printStruct(Student *st)
{
		printf("%d %d / %d %d", st[0].kor, st[0].eng, st[1].kor, st[1].eng);
}

int main(void)
{
	Student st[2];	
	set(st);
	
	printStruct(st);
}


