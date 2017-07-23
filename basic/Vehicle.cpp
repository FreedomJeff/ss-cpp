#include <iostream>
using namespace std;

class Vehicle
{
	public:
		Vehicle()
		{
			cout<<"Vehicle constuctor."<<endl;	
		}
		virtual ~Vehicle()
		{
			cout<<"Vehicle deconstructor."<<endl;	
		}
};

class Car: public Vehicle
{
public:
	Car()
	{
		cout<<"Car constructor."<<endl;
	}
	~Car()
	{
		cout<<"Car deconstructor."<<endl;	
	}
};

int main()
{
	Vehicle *pVehicle = new Car();
	delete pVehicle;
	return 0;
}
