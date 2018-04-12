#include <iostream>
#include <cstring>
using namespace std;

class Human{
	private:
		int legs;
		int arms;
	public:
		string hair;
		string name;

		Human()
		{
			legs = 2;
			arms = 2;
			setName();
			setHair();
		}
		void setLegs()
		{
			cout << "Enter the number of legs this Human has: ", cin >> legs, cout << endl;
		}
		void setName()
		{
			cout << "Enter a name: ", cin >> name, cout << endl;
		}
		void setHair()
		{
			cout << "What hair color do you want? ";
			cin >> hair;
			cout << endl;
		}	

		int getLegs()
		{
			return legs;
		}
		int getArms()
		{
			return arms;
		}

};
//Inherit from human
class Man : public Human
{
	public:
		bool hasEgo = true;
		string pee = "standing";
};

class Woman : public Human
{
	public:
		bool hasEgo = false;
		string pee = "sitting";
};


int main()
{
	Man bob;
	Woman sue;
	cout << "Our person has " << bob.getLegs() << " legs and " << bob.getArms() << " arms, and their hair color is " << bob.hair << ".\n";
	if(bob.hasEgo)
	{
		cout << "	ALSO:	" << bob.name << " has an ego.\n";
	}
	
	cout << "Our " << sue.name << " has " << sue.getLegs() << " legs and " << sue.getArms() << " arms, and their hair color is " << sue.hair << ".\n";
	return 0;
}