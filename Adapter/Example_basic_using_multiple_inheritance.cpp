#include<iostream>

using namespace std;
class Obsolete
{
	public:
		void go()
		{
			cout<<"go funtion getting called\n"<<endl;
		};
};


class Base
{
	public:
		virtual ~Base(){};
		virtual void run()=0;
};


class Derived1 : public Base
{
	public:
		void run()
		{
			cout<<"inside derived1 :Run\n"<<endl;
		};
};


class Derived2 : public Base
{
	public:
		void run()
		{
			cout<<"inside derived2 :Run\n"<<endl;
		};
};


//create an adepter class which has the API same as expected but it is calling the API of obsolete class.
class Adapter : public Base, private Obsolete
{
	//has a relation with Obsolete class
	//Obsolete *ob = new Obsolete();
	public:

	void run()
	{
		go();
	};
};

int main()
{
	Base* base1 = new Derived1();
	Base* base2 = new Derived2();
	Base* base_obsolete =new Adapter();


	base1->run();
	base2->run();
	base_obsolete->run();
	return 0;

}
