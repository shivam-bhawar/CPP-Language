// C++ Program to explain the concept of 'Method Overridng'
// (Method Overridng: Method Overridng means in different scopes, a function is defined multiple times with the same name but have behaviours) 

#include<iostream>

class Parent
{
	protected:
		void fun(int a)
		{
			std::cout<<"a = "<< a <<std::endl;
		}
};

class Child : public Parent
{
	public:
		void fun(int a)
		{
			a = a * (-1);
			
			std::cout<<"a = "<< a <<std::endl;
		}
};

int main()
{
	Child c;
	
	c.fun(10);
	
	return 0;
}