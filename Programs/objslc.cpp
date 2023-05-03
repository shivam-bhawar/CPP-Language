#include<iostream>

class  A
{
	private:
		int a;
		
	public:
		A()
		{
			a = 10;
		}
		
		int getA()
		{
			return a;
		}
		
		void display()
		{
			std::cout<<"A = "<<this->a<<std::endl;
		}
};

class  B
{
	private:
		int b;
		
	public:
		B()
		{
			b = 20;
		}
		
		int getB()
		{
			return b;
		}
		
		void display()
		{
			std::cout<<"B = "<<this->b<<std::endl;
		}
};

class  C
{
	private:
		int c;
		
	public:
		C()
		{
			c = 0;
		}
		
		int getC()
		{
			return c;
		}
		
		void display()
		{
			std::cout<<"C = "<<this->c<<std::endl;
		}
};

class  D : public A, public B, public C
{
	private:
		int d;
		
	public:
		D()
		{
			d = 40;
		}
		
		int getD()
		{
			return d;
		}
		
		void display()
		{
			A :: display();
			B :: display();
			C :: display();
			std::cout<<"D = "<<this->d<<std::endl;
		}
};

int main()
{
	A a;
	B b;
	C c;
	D d;
	
	A* pa = &d;
	B* pb = &d;
	C* pc = &d;
	
	pa->display();
	pb->display();
	pc->display();
	
	std::cout<<"-------------------------------"<<std::endl;
	
	d.display();
	
	return 0;
}