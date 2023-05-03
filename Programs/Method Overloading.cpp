// C++ Program to explain the concept of 'Method Overloading'
// (Method Overloading: Method Overloading means in the same scope, a function is defined multiple times with the same name but having different number of arguments or different types of arguments or different sequence of arguments)

#include<iostream>

class Student
{
	public:
		void fun(int a)
		{
			std::cout<<"a = "<< a <<std::endl;
		}
		
		void fun(double a)
		{
			std::cout<<"a = "<< a <<std::endl;
		}
		
		void fun(int a, double b)
		{
			std::cout<<"a = "<< a <<" | b = "<< b <<std::endl;
		}
		
		void fun(double b, int a)
		{
			std::cout<<"b = "<< b <<" | a = "<< a <<std::endl;
		}
};

int main()
{
	Student s;
	
	s.fun(10);
	
	s.fun(20.13);
	
	s.fun(10, 20.13);
	
	s.fun(20.13, 10);
	
	return 0;
}