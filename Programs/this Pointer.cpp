#include<iostream>

class Student
{
	int roll_no;
	
	public:
		void fun(int roll_no)
		{
			this->roll_no = roll_no;
			std::cout<<"Roll No. = "<< this->roll_no <<std::endl;
		}
};

int main()
{
	Student s;
	
	s.fun(10);
	
	return 0;
}