// C++ Program to explain the concept of 'Inheritance'
// (Inheritance: Inheritance is nothing but Inherit the properties of the parent class to child class, so we can use the properties of parent class inside the child class, in order to reuse the code)

#include<iostream>

class Parent // Parent Class
{
	protected:
		int a;
};

class Child : public Parent // Child Class Inherited from the Parent Class
{
	public:
		void set(int a)
		{
			this->a = a;
		}
			
		int get()
		{
			return (this->a);
		}
};

int main()
{
	Child c;
	
	c.set(10);
	
	std::cout<< c.get() <<std::endl;
	
	return 0;
}

