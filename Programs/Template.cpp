#include<iostream>

template <class T1, class T2>
class Demo
{
	public:
	
	T1 a;
	T2 b;
	
	Demo(T1 a, T2 b)
	{
		this->a = a;
		this->b = b;
	}
	
	void display()
	{
		std::cout<<"a = "<<a<<std::endl<<"b = "<<b<<std::endl;
	}
	
	template <class T3>
	T3 my_fun(T3 c)
	{
		c < 0 ? std::cout<<"C is Negative\n" : std::cout<<"C is Positive\n"; 

		return c;
	}
};

int main()
{
	Demo <int, char>d(10, 'Z');
	d.display();
	
	std::cout<<"c = "<<d.my_fun<float>(10.5)<<std::endl;
	
	return 0;
}