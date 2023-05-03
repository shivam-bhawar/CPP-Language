// C++ Program to demonstrate various terms like: Class, Object, Data Member, Member Function, Local Variables, Global / Naked Function, etc.

#include<iostream>

class Demo // Class 'Demo'
{
	public: // Access Specifier
		int a; // Data Member or Class Variable 'a'
	
		void fun() // Member Function 'fun'
		{
			int b = 20; // Local Variable
			std::cout<<"This is a Member Function"<<std::endl<<"b = "<< b <<std::endl;
		}
};

void gun() // Global / Naked Function
{
	int c = 30; // Local Variable
	std::cout<<"This is a Global / Naked Function"<<std::endl<<"c = "<< c << std::endl;
}

int main() 
{
	Demo d; // Object Definition
	
	d.a = 10; // Accessing Data Member using 'Direct Accessing Operator'
	std::cout<<"a = "<< d.a <<std::endl;
	
	d.fun(); // Function Call to Member Function 'fun'
	
	gun(); // Function Call to Global / Naked Function 'gun'
}