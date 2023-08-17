#include"Shape.cpp"

class Factory
{
	Shape_Interface *sh;

	public:
	Shape_Interface* getShape(int option)
	{
		if( option == 1)
			sh = new Circle();
		else if (option ==2)
			sh = new Rectangle();
		else if (option ==3)
			sh = new Triangle();
		else
			sh =NULL;
		return sh;
	}
};


int main()
{
	int i=0;
	Factory *f=new Factory();
	Shape_Interface *sh;
	while(1)
	{
		cout<< " enter 1 for circle 2 for rectange 3 for triangle ";
		cin>>i;
		sh =f->getShape(i);
		if(sh != NULL)
			sh->draw();
		else
		{
			cout<<"wrong option selected ..exitting!!!\n";
			exit(1);
		}
	}
}
