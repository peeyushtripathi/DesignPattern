#include<iostream>

using namespace std;

class Singleton
{
	private:
	static Singleton *instance;

	Singleton()
	{
		
	};
	
	Singleton(const Singleton &instance)
	{
	};

	void operator = (const Singleton& b)
	{
	};
	
	public:
	static Singleton* getInstance()
	{
		if(instance!=NULL)
		{
			return instance;
		}
		else
		{
			instance = new Singleton();
			return instance;
		}	
	};

	void printer()
	{
		std::cout<<"Successfully called function via singleton design"<<std::endl;
	};

};

Singleton* Singleton::instance=NULL;


int main()
{
	Singleton *ptr = Singleton::getInstance();
	ptr->printer();
/*	try
	{
		Singleton *ptr1 =new Singleton();
	}
	catch(...)
	{
		std::cout<<"cannot create objectdirectly using ptr1"<<std::endl;
	}
*/	return 0;
}
