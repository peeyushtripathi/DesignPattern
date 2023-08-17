#include"BasePizza.cpp"

class Toppings: public BasePizza
{
};


class ExtraCheese: public Toppings
{
	public:
	BasePizza *bp;

	ExtraCheese(BasePizza *bp1)
	{
		this->bp=bp1;
	}
	int cost()
	{
		return bp->cost() +20;
	}
};


class Mushroom: public Toppings
{
	//ye has a property  hai Pizza ke liye.. kyuki pizza iska member hai
	//Topping inherit kar rha hai Pizza ko usse isme is a Property bhi bann rhi hai
	public:
	BasePizza *bp;

	Mushroom(BasePizza *bp1)
	{
		this->bp=bp1;
	}
	int cost()
	{
		return bp->cost() +40;
	}
};


int main()
{
	BasePizza *bp=new Farmhouse();
	cout<<"cost of farmhouse is "<<bp->cost()<<"\n";


	//dhyaan ye rakhna hai ki toppings ke andar pizza pass karna nhi.. kyuki constructor esa hai
	//not otherway round
	BasePizza *bp1=new Mushroom(new Farmhouse());
	cout<<"cost of farmhouse +mushroom is "<<bp1->cost()<<"\n";

	BasePizza *bp2=new Mushroom(new ExtraCheese(new Farmhouse()));
	cout<<"cost of farmhouse +mushroom + ExtraCheese is "<<bp2->cost()<<"\n";

	return 0;

}
