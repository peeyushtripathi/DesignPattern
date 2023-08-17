#include<iostream>
using namespace std;

class Drive_Interface
{
	public:
	virtual void drive()=0;
};


// ek pure virtaul ke 2 child bna ke .. run time polymorphism kara rhe .
// isey vehicle ke sath HAS A relation mai rakha hai
class simpleDrive: public Drive_Interface
{
	public:
	void drive()
	{
		cout<<"simple drive \n";
	}
};

class complexDrive: public Drive_Interface
{
	public:
	void drive()
	{
		cout <<" complex drive \n";
	}
};
