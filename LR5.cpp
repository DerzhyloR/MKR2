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
	 // ����� ��������� �������
	virtual void vud_savtsi() = 0;
};

class Animals: public Savtsi {

public:
	Animals(string animal_name) :Savtsi(animal_name) {
	}

	void vud_savtsi() {
		cout << name << "- �� �������";
	}
	virtual void pidvud() {
		cout << "��������";
	};

};

class People: public Savtsi {

public:
	People(string person_name) : Savtsi(person_name) {
	}

	void vud_savtsi() {
		cout << name<<"- �� ������\n";
	}
};

class Horses : public Animals {
public:
	Horses(string name_horse) :Animals(name_horse) {};

	void pidvud() {
		cout << "- ���\n";
	}
};

class Cows : public Animals {
public:
	Cows(string name_cow) : Animals(name_cow) {};

	void pidvud() {
		cout << "- ������\n";
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	People person("������");
	Horses horse("ǳ���");
	Cows cow("��������");

	person.vud_savtsi();
	horse.vud_savtsi();
	horse.pidvud();
	cow.vud_savtsi();
	cow.pidvud();
   
}
