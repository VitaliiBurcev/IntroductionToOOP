//IntroductionToOOP
#include<iostream>
using namespace std;


class Point // ��� Class  ��� ���� ���������
{

	//�������� ��������� ��� ����� �� ������� ����� ��� ������.
	

	double x;
	double y;

public: //��������� ������� ��� ����������
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

	// Constructors:
	/*Point()
	{
		x = y = 0;
		cout << "Constructor: \t" << this << endl;
	}
	*/
	/*Point(double x)
	{
		this->x = x;
		y = 0;

		cout << "1ArgConstructor: \t" << this << endl;
	}
	*/
	Point(double x = 0, double y= 0)
	{
		this->x = x;
		this->y = y;
		

		cout << "Constructor: \t" << this << endl;
	}



	~Point()
	{
		cout << "Destructor: \t" << this << endl;
	}




	// Method:
	double distance(Point other)
	{
		//this ��� �����;
		//other ��� ������ ����� �� ������� ������� �������� (��������� �����);
		double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
		return distance;
	}

	void print()
	{
		cout << "X= " << x << "\tY = " << y << endl;
	}

};

double distance(Point A, Point B)
{
	//this ��� �����;
		//other ��� ������ ����� �� ������� ������� �������� (��������� �����);
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
		
	return sqrt(x_distance * x_distance + y_distance * y_distance);
}

//define STRUCT_POINT

//define DISTANCE_CHECK



void main()
{
	setlocale(LC_ALL, "");
#ifdef STRUCT_POINT



	// type name; 
	int a;  //���������� ���������� 'a' ���� 'int';
	Point A;//���������� ���������� 'A' ���� 'Point'
			//���������� ������� 'A' ���� 'Point'
			//���������� ����������  'A' ��������� 'Point'
			//Instance - ���������
	A.x = 2;
	A.y = 3;

	cout << A.x << "\t" << A.y << endl;
	Point* pA = &A;

	cout << pA->x << "\t" << pA->y << endl;

#endif STRUCT_POINT
#ifdef	DISTANCE_CHECK
	Point A;
	A.set_x(2);
	A.set_y(3);
	A.print();
	//cout << A.get_x() << "\t" << A.get_y() << endl;

	Point B;
	B.set_x(7);
	B.set_y(8);
	//cout << B.get_x() << "\t" << B.get_y() << endl;
	B.print();

	cout << "���������� �� ����� � �� ����� �: " << A.distance(B) << endl;
	cout << "���������� �� ����� B �� ����� A: " << B.distance(A) << endl;

	cout << "���������� ����� ������� � �� ����� �: " << distance(A,B) << endl;
	cout << "���������� ����� ������� � �� ����� �: " << distance(B,A) << endl;


#endif DISTANCE_CHECK

	Point A; // Default constractor
	A.print();
	Point B = 5;
	B.print();
	
	Point C(2,3);
	C.print();

}


/*
. ��� �������� ������� ������� (Point operator)
-> ��� �������� ���������� ������� (Arrow operator)

*/

/*
1. Encupsulation;
Encupsulation - ��� �������� ������������ ����� ������ �� �������� ����.
������������ �������:
private: �������� ���� ��������� ������ ������ ������

public: �������� ���� ��������� �� ������ ����� ���������

protected: ���������� ����

*/

//2.


