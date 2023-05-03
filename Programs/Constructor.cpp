#include<iostream>

class Demo
{
	public:
		int a, b, c;
		int *p = &c;
		
		Demo()
		{
			a = 1;
			b = 2;
			c = 3;
		}
		
		Demo(int A, int B, int C)
		{
			a = A;
			b = B;
			c = C;
		}
};

int main()
{
	Demo d1;
	std::cout<<"a = "<< d1.a <<std::endl<<"b = "<< d1.b <<std::endl<<"c = "<< d1.c <<std::endl;
	
	Demo d2(10,20,10);
	std::cout<<"a = "<< d2.a <<std::endl<<"b = "<< d2.b <<std::endl<<"c = "<< d2.c <<std::endl;
	
	Demo d3(d1);
	std::cout<<"a = "<< d3.a <<std::endl<<"b = "<< d3.b <<std::endl<<"c = "<< d3.c <<std::endl;
	return 0;
}