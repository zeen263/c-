#include<iostream>

void func1(void)
{
	std::cout << "func1(void)" << std::endl;
}

void func1(int a)
{
	std::cout << "func1(int)" << std::endl;
}

void func1(double a,double b)
{
	std::cout << "func1(double,double)" << std::endl;
}


int main(void)
{
	func1();
	func1(3);
	func1(3.5,2.7);
	
	return 0;
}


