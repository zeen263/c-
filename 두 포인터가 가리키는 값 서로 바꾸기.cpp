#include<iostream>
using namespace std;

void swap(int &(p1), int &(p2))
{
	int tmp;
	tmp=p1;
	p1=p2;
	p2=tmp;
}

int main(void)
{
	int n1=5, n2=10;
	int *p1=&n1, *p2=&n2;
	
	swap(p1, p2);
	
	cout << *p1 << endl;
	cout << *p2 << endl;
	

}
