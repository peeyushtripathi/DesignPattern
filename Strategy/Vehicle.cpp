#include "DriveInterface.cpp"

class Vehicle
{
	//ye interface hai
	public:
	Drive_Interface *di;

	//ye constructor injection hai.. kon sa drive interface aaega 
	Vehicle(Drive_Interface *driveI)
	{
		this->di =driveI;
	}

	//waise hi getter setter type
	Drive_Interface* getInterface()
	{
		return di;
	}

	//vehicle ka drive ..interface waale drive ko call karega
	void drive()
	{
		di->drive();
	}
};


class sportsVehicle1:public Vehicle
{
	//yha constructor se parent constructor mai jis type ka drive object bhejenge wo
	// interface ke pointer ki help se child waale drive ko call krwa dega
	public:
	sportsVehicle1():Vehicle(new complexDrive())
	{
		cout<<"inside sportsVehicle1\n";
	}
};

class offroadVehicle:public Vehicle
{
	public:
	offroadVehicle():Vehicle(new simpleDrive())
	{
		cout<<"inside offroadVehicle\n";
	}
};

class sportsVehicle2:public Vehicle
{
	public:
	sportsVehicle2():Vehicle(new complexDrive())
	{
		cout<<"inside sportsVehicle2\n";
	}
};



int main()
{

	Vehicle *vi1 = new sportsVehicle1();
	vi1->drive();

	Vehicle *vi2 = new sportsVehicle2();
	vi2->drive();
	
	Vehicle *vi3 = new offroadVehicle();
	vi3->drive();

	return 0;
}

