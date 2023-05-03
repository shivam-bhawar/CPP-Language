#include<iostream>

class Parent
{
	private:
		int a = 10;
		
	public:		
		void fun()
		{
			std::cout<<"Private Data Member: a = "<< a <<std::endl;
		}
	
	protected:
		int b = 20;
		
	public:
		int c = 30;
};

class Child : public Parent
{
	public:
		void gun()
		{
			std::cout<<"Protected Data Member: b = "<< (this->b) <<std::endl;
		}
};

int main()
{	
	Parent p;
	p.fun();
	
	Child c;
	c.gun();
	
	std::cout<<"Public Data Member: c = "<< (p.c) <<std::endl;
	
	return 0;
}