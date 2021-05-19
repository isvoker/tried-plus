#include <iostream>
#include <string>
class Transport {
public:
	virtual std::string Name() = 0;
	virtual int Wheels() = 0;
	virtual int max() = 0;

};
class All {
private:
	class Car : public Transport {
	public:
		std::string Name() { return "Car"; }
		int Wheels() { return 4; }
		int max() { return 150; }
	};
	class Bike : public Transport {
	public:
		std::string Name() { return "Bike"; }
		int Wheels() { return 2; }
		int max() { return 200; }
	};

	class Scooter : public Transport {
	public:
		std::string Name() { return "Scooter"; }
		int Wheels() { return 2; }
		int max() { return 30; }
	};

	class Buss : public Transport {
	public:
		std::string Name() { return "BUSS"; }
		int Wheels() { return 6; }
		int max() { return 80; }
	};

public:
	enum Type { T_Buss, T_Bike, T_Car, T_Scooter };

	Transport * Transport(Type vtype) const {
		switch (vtype) {
		case T_Car:
			return new Car();
		case T_Buss:
			return new Buss();
		case T_Bike:
			return new Bike();
		case T_Scooter:
			return new Scooter();
		default:
			return 0;
		}

	}
};


int main()
{

	int a;
	std::cin >>a;
	All tr;
	Transport* car = tr.Transport(All::T_Car);
	Transport* buss = tr.Transport(All::T_Buss);
	Transport* bike = tr.Transport(All::T_Bike);
	Transport* scooter = tr.Transport(All::T_Scooter);
	if (a == 0 ) {
		std::cout << "Type name: " << car->Name() << std::endl;
		std::cout << "Max speed: " << car->max() << " km/h" << std::endl;
		std::cout << "Number of wheels: " << car->Wheels() << std::endl;

	}
	else if (a == 1) {
		std::cout << "Type name: " << buss->Name() << std::endl;
		std::cout << "Max speed: " << buss->max() << " km/h" << std::endl;
		std::cout << "Number of wheels: " << buss->Wheels() << std::endl;

	}

	else if (a == 2) {
		std::cout << "Type name: " << bike->Name() << std::endl;
		std::cout << "Max speed: " << bike->max() << " km/h" << std::endl;
		std::cout << "Number of wheels: " << bike->Wheels() << std::endl;
	
	}

	else if (a == 3 ) {
		std::cout << "Type name: " << scooter->Name() << std::endl;
		std::cout << "Max speed: " << scooter->max() << " km/h" << std::endl;
		std::cout << "Number of wheels: " << scooter->Wheels() << std::endl;
		
	}
	else {
		std::cout << "UNKNOWN TYPE OF TRANSPORT";
	}
}