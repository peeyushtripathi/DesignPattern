#include<iostream>
#include<memory>

//using namespace std;

class Obsolete
{
	public:
		void go()
		{
			std::cout<<"go funtion getting called\n"<<std::endl;
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
			std::cout<<"inside derived1 :Run\n"<<std::endl;
		};
};


class Derived2 : public Base
{
	public:
		void run()
		{
			std::cout<<"inside derived2 :Run\n"<<std::endl;
		};
};

//create an adepter class which has the API same as expected but it is calling the API of obsolete class.
class Adapter : public Base
{
	//has a relation with Obsolete class
	std::unique_ptr<Obsolete> ob;
	public:
	//command line assignment of ob using Obsolete object
	Adapter() : ob(std::make_unique<Obsolete>()) {};
	void run()
	{
		ob->go();
	};
};

int main()
{
	std::unique_ptr<Base> base0(std::make_unique<Derived1>());
	std::unique_ptr<Base> base1(std::make_unique<Derived2>());
	std::unique_ptr<Base> base2(std::make_unique<Adapter>()); 
	/*auto base[] ={
		std::make_unique<Derived1>(),
		std::make_unique<Derived2>(),
		std::make_unique<Adapter>()
		};
*/

	base0->run();
	base1->run();
	base2->run();
	return 0;

}
