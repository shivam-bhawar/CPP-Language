#include<iostream>

const int var = 100;

class Demo
{
	public:
		const int a = 10;
		
		const int fun()
		{
			std::cout<<"This is a Constant Function"<<std::endl;
			return 999;
		}
		
		void gun() const
		{
			int c = 30;
			std::cout<<"c = "<< c <<std::endl;
		}
		
		void sun()
		{
			const int d = 40;
			std::cout<<"Constant Local Variable: d = "<< d <<std::endl;
		}
};

int main()
{
	std::cout<<"Constant Global Variable: var = "<< var <<std::endl;
	
	Demo d;

	std::cout<<"Constant Data Member: a = "<< d.a <<std::endl;
	d.fun();
	d.gun();
	d.sun();
	
	return 0;
}