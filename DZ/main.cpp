#include<iostream>
using namespace std;
class Point // при Class  все пол€ приватные
{

	//—оздава€ структуру или класс мы создаем новый тип данных.


	double x;
	double y;

public: //публичные пишутс€ под приватными
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
	int a;  //обь€вление переменной 'a' типа 'int';
	Point A;//обь€вление переменной 'A' типа 'Point'
	//обь€вление объекта 'A' типа 'Point'
	//обь€вление экземпл€ра  'A' структуры 'Point'
	//Instance - экземпл€р
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