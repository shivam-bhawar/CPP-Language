/*
	Virtual Function
*/

#include<iostream>

class Parent
{
	public:
		virtual void display()
		{
			std::cout<<"Parent"<<std::endl;
		}
};

class Child1 : public Parent
{
	public:
		void display()
		{
			std::cout<<"Child 1"<<std::endl;
		}
};

class Child2 : public Parent
{
	public:
		void display()
		{
			std::cout<<"Child 2"<<std::endl;
		}
};

int main()
{
	Child1 c1obj;
	Child2 c2obj;
	
	Parent* ptr;
	
	ptr = &c1obj;	
	ptr->display();
	
	return 0;
}