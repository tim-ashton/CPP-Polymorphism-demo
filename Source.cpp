
#include <string>
#include <iostream>

class Animal
{
public:
	virtual std::string GetAnimalType() { return typeid(this).name(); };
	virtual int GetNumberOfLegs() = 0;
	virtual bool CanFly() = 0;
};


class Eagle : public Animal
{
public:
	std::string GetAnimalType() { return typeid(this).name(); };
	int GetNumberOfLegs() { return 2; }
	bool CanFly() { return true; }
};

class Dog : public Animal
{
	std::string GetAnimalType() { return typeid(this).name(); };
	int GetNumberOfLegs() { return 4; }
	bool CanFly() { return false; }
};

void GetAnimalDetails(Animal *animal)
{
	std::cout << "Animal Type: " << animal->GetAnimalType() << std::endl;
	std::cout << "Has " << animal->GetNumberOfLegs() << " legs." << std::endl;
	std::cout << "And " << (animal->CanFly() ? "can fly" : "cannot fly") << std::endl;
}

int main()
{
	Eagle e;
	Dog d;

	GetAnimalDetails(&e);
	GetAnimalDetails(&d);

	return 0;
}
