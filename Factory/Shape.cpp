#include<iostream>

using namespace std;

class Shape_Interface
{
	public:
	virtual void draw()
	{}
};

class Circle: public Shape_Interface
{
	public:
	void draw()
	{
		cout<<"circle drawn\n";
	}
};

class Rectangle: public Shape_Interface
{
	public:
	void draw()
	{
		cout<<"Rectangle drawn\n";
	}
};

class Triangle: public Shape_Interface
{
	public:
	void draw()
	{
		cout<<"Triangle drawn\n";
	}
};

