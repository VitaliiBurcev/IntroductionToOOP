//IntroductionToOOP
#include<iostream>
using namespace std;
class Point // при Class  все поля приватные
{

	//Создавая структуру или класс мы создаем новый тип данных.
	

	double x;
	double y;

public: //публичные пишутся под приватными
	double get_x()const
	{
		return x;
	}

	double get_y()const
	{
		return y;

	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}

};

//define STRUCT_POINT



void main()
{
	setlocale(LC_ALL, "");
#ifdef STRUCT_POINT



	// type name; 
	int a;  //обьявление переменной 'a' типа 'int';
	Point A;//обьявление переменной 'A' типа 'Point'
			//обьявление объекта 'A' типа 'Point'
			//обьявление экземпляра  'A' структуры 'Point'
			//Instance - экземпляр
	A.x = 2;
	A.y = 3;

	cout << A.x << "\t" << A.y << endl;
	Point* pA = &A;

	cout << pA->x << "\t" << pA->y << endl;

#endif STRUCT_POINT

	Point A;
	A.set_x(2);
	A.set_y(3);

	cout << A.get_x() << "\t" << A.get_y() << endl;

}

/*
. Это оператор прямого доступа (Point operator)
-> Это оператор косвенного доступа (Arrow operator)

*/

/*
1. Encupsulation;
Encupsulation - это сокрытие определенной части класса от внешнего мира.
Модификаторы доступа:
private: закрытые поля доступные только внутри класса

public: открытые поля доступные из лббого места программы

protected: Защищенные поля





*/