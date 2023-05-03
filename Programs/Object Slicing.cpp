#include<iostream>
#include<string.h>

class Person
{
	private:
		char name[20];
		int age;
		
	public:
		Person(const char* name = "", int age = 0)
		{
			strcpy(this->name, name);
			this->age = age;
		}
		
		char* getName()
		{
			return this->name;
		}
		
		int getAge()
		{
			return this->age;
		}
		
		void display()
		{
			std::cout<<"Name = "<<this->name<<std::endl<<"Age = "<<this->age<<std::endl;
		}
};

class Employee : public Person
{
	private:
		int id;
		float salary;
		
	public:
		Employee(const char* name = "", int age = 0, int id = 0, float salary = 0.0f) : Person(name, age)
		{
			this->id = id;
			this->salary = salary;
		}
		
		int getId()
		{
			return this->id;
		}
		
		float getSalary()
		{
			return this->salary;
		}
		
		void display()
		{
			Person::display();
			std::cout<<"ID = "<<id<<std::endl<<"Salary = "<<this->salary<<std::endl;
		}
};

int main()
{
	Person p1("Saddam", 5000);
	Employee e1("PIXEL", 6000, 999, 10000.0f);
	
	
	std::cout<<"---------------P1----------------"<<std::endl;
	p1.display();
	std::cout<<"---------------e1----------------"<<std::endl;
	e1.display();
	std::cout<<"------------p1 = e1--------------"<<std::endl;
	p1 = e1;
	p1.display();
	std::cout<<"------------pointer--------------"<<std::endl;
	Person* p2 = &e1;
	p2->display();
	std::cout<<"-----------reference-------------"<<std::endl;
	Person &p3 = e1;
	p3.display();
	std::cout<<"-------------------------------"<<std::endl;
	
	return 0;
}	