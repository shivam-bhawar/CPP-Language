 /*
	Downcasting
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

class D : public A, public B, public C
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
	
	D* dptr = static_cast<D*>(aptr);
	std::cout<<"Address in pointer of class D, which has the value assigned of pointer of class A: "<<dptr<<std::endl;
	
	dptr = static_cast<D*>(bptr);
	std::cout<<"Address in pointer of class D, which has the value assigned of pointer of class B: "<<dptr<<std::endl;
	
	dptr = static_cast<D*>(cptr);
	std::cout<<"Address in pointer of class D, which has the value assigned of pointer of class C: "<<dptr<<std::endl;
	 
	return 0;
}