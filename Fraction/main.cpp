//IntroductionToOOP
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;


class Point
{
	int x;
	int y;
	int z;

public: //публичные пишутся под приватными
	int get_x()const
	{
		return x;
	}

	int get_y()const
	{
		return y;

	}
	int get_z()const
	{
		return z;

	}
	void set_x(int x)
	{
		this->x = x;
	}
	void set_y(int y)
	{
		this->y = y;
	}
	
	void set_z(int z)
	{
		this->z = z;
	}

	Point(int x=2, int y=3, int z=4)
	{
		this->x = x;
		this->y = y;
		this->z = z;
		

		cout << "Constructor: \t" << this << endl;
	}

	double Fraction(int x, int y, int z)
	{
		double fraction;
		fraction = x * (y / z);

	}


	void print()
	{
		cout << "X= " << x << "\tY = " << y << "\tZ = " << z << endl;
	}
};
void main()
{
	Point A;
	A.set_x(2);
	A.set_y(3);
	A.set_z(4);
	A.print();
	cout << A.get_x() << "\t" << A.get_y() << A.get_z() << endl;

	Point B;
	B.set_x(0);
	B.set_y(1);
	B.set_y(2);
	//cout << B.get_x() << "\t" << B.get_y() << endl;
	B.print();

	cout << ": " << A.Fraction(x,y,z) << endl;

	
}