#include <iostream>
#include <string>

using namespace std;

class Transport {

protected:
	string type;

public:
	Transport(string type) {}
	double CalculateTime(double distance, int speed) { return 0; }
	double CalculatePrice(double distance, double price_km) { return 0; }
};

class Car : public Transport {
public:
	Car() : Transport("Car") {}

	double CalculateTime(double distance, int speed) {
		return distance / speed;
	}
	double CalculatePrice(double distance, double price_km) {
		return distance * price_km;
	}
};

class Taxi : public Transport {
public:
	Taxi() : Transport("Taxi") {}

	double CalculateTime(double distance, int speed) {
		return distance / speed;
	}
	double CalculatePrice(double distance, double price_km) {
		return distance * (40 + price_km); //Добавленна минимальная цена для начала поездки
	}
};

class Tramvay : public Transport {
public:
	Tramvay() : Transport("Tramvay") {}

	double CalculateTime(double distance, int speed) {
		return distance / speed;
	}
	double CalculatePrice(double distance, double price_km) {
		return distance * price_km;
	}
};

class Scooter : public Transport {
public:
	Scooter() : Transport("Scooter"), PriceKilovat(0) {}

	int PriceKilovat;

	double CalculateTime(double distance, int speed) {
		return distance / speed;
	}
	double CalculatePrice(double distance, double price_km) {
		return distance * PriceKilovat;
	}
};

class Airplane : public Transport {
public:
	Airplane() : Transport("Airplane") {}

	double CalculateTime(double distance, int speed) {
		return distance / speed;
	}
	double CalculatePrice(double distance, double price_km) {
		return distance * price_km;
	}
};

int main() {
	Car car;
	double distance = 474; // Расстояние 
	int speed = 110; // Скорость 
	double price_km = 10; // За километр (в гривне)

	cout << "Car:" << "\n";
	cout << "Time: " << car.CalculateTime(distance, speed) << " hours" << "\n";
	cout << "Cost: " << car.CalculatePrice(distance, price_km) << "\n";

	return 0;
}
