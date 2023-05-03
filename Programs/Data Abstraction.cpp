// C++ Program to explain the concept of 'Data Abstraction'
// (Data Abstraction: Data Abstraction means hiding the data from outside the class, which is achieved by using the access specifier 'private')

#include<iostream>

class Student
{
	private:
		int roll_no; // Data Member hidden outside the class
	
	public:
		void set(int roll_no)
		{
			this->roll_no = roll_no;
		}
		
		int get() 
		{
			return (this->roll_no);
		}
};

int main()
{
	Student s;
	
	s.set(10);
	
	std::cout<<"Roll No. = "<< s.get() << std::endl;
	
}