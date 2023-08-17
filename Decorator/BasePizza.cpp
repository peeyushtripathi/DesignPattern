#include<iostream>

using namespace std;

class BasePizza
{
	public:
	virtual int cost()=0;
};


class Farmhouse: public BasePizza
{
	public:
	int cost()
	{
		return 100;
	}
};

class Veg: public BasePizza
{
	public:
	int cost()
	{
		return 150;
	}
};


