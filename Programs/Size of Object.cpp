#include<iostream>

class Parent
{
	private:
		int a;
		
	protected:
		int b;
		
	public: 
		int c;
};

class Child : public Parent
{
	int d;
};

class ThirdParty
{
	
};

int main()
{
	Parent p;
	Child c;
	ThirdParty tp;
	
	std::cout<<"Size of Parent = "<<sizeof(p)<<std::endl<<"Size of Child = "<<sizeof(c)<<std::endl<<"Size of Third Party = "<<sizeof(tp)<<std::endl;
	
	return 0;
}