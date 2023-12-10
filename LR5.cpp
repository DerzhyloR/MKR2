#include <iostream>
#include <string>
#include <cmath>
#include <Windows.h>
using namespace std;

class Savtsi {

protected:
	string name;

public:
	Savtsi(string name_savtsi) :name(name_savtsi) {}
	 // Чисто віртуальна функція
	virtual void vud_savtsi() = 0;
};

class Animals: public Savtsi {

public:
	Animals(string animal_name) :Savtsi(animal_name) {
	}

	void vud_savtsi() {
		cout << name << "- це тварина";
	}
	virtual void pidvud() {
		cout << "Невідомий";
	};

};

class People: public Savtsi {

public:
	People(string person_name) : Savtsi(person_name) {
	}

	void vud_savtsi() {
		cout << name<<"- це людина\n";
	}
};

class Horses : public Animals {
public:
	Horses(string name_horse) :Animals(name_horse) {};

	void pidvud() {
		cout << "- кінь\n";
	}
};

class Cows : public Animals {
public:
	Cows(string name_cow) : Animals(name_cow) {};

	void pidvud() {
		cout << "- корова\n";
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	People person("Максим");
	Horses horse("Зірка");
	Cows cow("Блискітка");

	person.vud_savtsi();
	horse.vud_savtsi();
	horse.pidvud();
	cow.vud_savtsi();
	cow.pidvud();
   
}
