/*
	Upcasting
*/

#include<iostream>

class A
{
	int a;
	
	public: 
		A()
		{
			a = 1;
		}
		
		void display()
		{
			std::cout<< this->a <<std::endl;
		}
};

class B
{
	int b;
	
	public: 
		B()
		{
			b = 2;
		}
		
		void display()
		{
			std::cout<< this->b <<std::endl;
		}
};

class C
{
	int c;
	
	public: 
		C()
		{
			c = 3;
		}
		
		void display()
		{
			std::cout<< this->c <<std::endl;
		}
};

class D : public A, public B, public C //Multiple Inheritance
{
	int d;
	
	public: 
		D()
		{
			d = 4;
		}
		
		void display()
		{
			A::display();
			B::display();
			C::display();
			
			std::cout<< this->d <<std::endl;
		}
};

int main()
{
	D obj;
	 
	A* aptr = &obj;
	B* bptr = &obj;
	C* cptr = &obj;
	 
	std::cout<<"Address in Pointer of class A, pointing to object of class D: "<<aptr<<std::endl;
	std::cout<<"Address in Pointer of class B, pointing to object of class D: "<<bptr<<std::endl;
	std::cout<<"Address in Pointer of class C, pointing to object of class D: "<<cptr<<std::endl;
	 
	return 0;
}