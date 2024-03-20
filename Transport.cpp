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
		return distance * (40 + price_km); //добавленна минимальная цена для начала поездки
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
	Scooter() : Transport("Scooter") {}

	int PriceKilovat;

	double CalculateTime(double distance, int speed) {
		return distance / speed;
	}
	double CalculatePrice(double distance) {
		return distance * PriceKilovat;
	}
};

int main() {
	Car car;
	double distance = 474; // Пример расстояния между городами (в км)
	int speed = 110; // Пример скорости автомобиля (в км/ч)
	double price_km = 10; // Пример стоимости за километр (в гривне)

	cout << "Car:" << endl;
	cout << "Time: " << car.CalculateTime(distance, speed) << " hours" << endl;
	cout << "Cost: " << car.CalculatePrice(distance, price_km) << endl;

	return 0;
}
