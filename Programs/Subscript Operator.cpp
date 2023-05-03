#include<iostream>

class Demo
{
	public:
		int size, array[100];
	 
		Demo(int size)
		{
			this->size = size;
		}
		
	int& operator[](int index)
	{
		if(index < size && index > size)
		{
			std::cout<<"Invalid Index !"<<std::endl;
		}
		
		return array[index];
	}
};

int main()
{
	Demo d(10);
	int i;
	
	for(i = 0 ; i < d.size ; i++)
	{
		d[i] = i;
	}
	
	for(i = 0 ; i < d.size ; i++)
	{
		std::cout<<d[i]<<" ";
	}
	
	return 0;
}