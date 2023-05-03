#include<iostream>

int a = 10, b = 20;
static int c = 30;

void add();

void fun()
{
	static int like = 0;
	std::cout<<"like = "<< like <<std::endl;
	like++;
}

class Demo
{
	public:
		static void fun()
		{
			std::cout<<"This is the Static Member Function"<<std::endl;
		}
};

int main()
{
	std::cout<<"a = "<< a <<std::endl<<"b = "<< b <<std::endl<<"c = "<< c <<std::endl;
	
	add();
	
	fun();
	fun();
	fun();
	fun();
	fun();
	
	Demo::fun();
	return 0;
}