// C++ Program to explain the concept of 'Encapsulation'
// (Encapsulation: Encapsulation means the binding of the Data Members and the Member Function, which could be achieved by 'setter' and 'getter' methods)

#include<iostream>

class Student
{
	int roll_no; // Data Member
	
	public:
		void set(int roll_no) // Setter Function
		{
			this->roll_no = roll_no;
		}
		
		int get() // Getter Function
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