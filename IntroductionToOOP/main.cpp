//IntroductionToOOP
#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;



#define delimiter "\n----------------------------------------------------------------\n"

//struct Point ��� struct  ��� ���� ��������;
class Point // ��� Class  ��� ���� ���������;
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

	//Deep copy -  �����������
	//Shallow copy - ������������� �����������

	Point(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;

		cout << "CopyConstructor:" << this << endl;
	}

	~Point()
	{
		cout << "Destructor: \t" << this << endl;
	}

		//Operators:
	Point& operator=(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;

		cout << "CopyAssignment:\t" << this << endl;
		return *this;
	}




	// Method:
	double distance(const Point& other)
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

//Methods:

double distance(const Point& A, Point& B)
{
	//this ��� �����;
		//other ��� ������ ����� �� ������� ������� ��������� (��������� �����);
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
		
	return sqrt(x_distance * x_distance + y_distance * y_distance);
}

#define STRUCT_POINT

#define DISTANCE_CHECK

#define CONSTRUCTOR_CHECK

#define ASSIGNMENT_OPERATOR



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
	
	cout << delimiter << endl;
	
	cout << "���������� �� ����� B �� ����� A: " << B.distance(A) << endl;
	cout << delimiter << endl;
	cout << "���������� ����� ������� � �� ����� �: " << distance(A,B) << endl;
	cout << delimiter << endl;
	cout << "���������� ����� ������� � �� ����� �: " << distance(B,A) << endl;
	cout << delimiter << endl;


#endif DISTANCE_CHECK
#ifdef CONSTRUCTOR_CHECK

	Point A; // Default constractor
	A.print();
	Point B = 5;
	B.print();

	Point C(2, 3);
	C.print();

	Point D = C; // Copy constractor
	D.print();


	Point E; //Assignment operator
	E = D;
	E.print();

#endif // CONSTRUCTOR_CHECK
#ifdef ASSIGNMENT_OPERATOR

	int a, b, c;
	a = b = c = 0;

	cout << a << "\t" << b << "\t" << c << endl;

	Point A, B, C;
	cout << delimiter << endl;
	A = B = C = Point(2, 3);
	cout << delimiter << endl;
	A.print();
	B.print();
	C.print();
#endif // ASSIGNMENT_OPERATOR

}


/*
. ��� �������� ������� ������� (Point operator)
-> ��� �������� ���������� ������� (Arrow operator)

*/

/*
1. Encupsulation;
Encupsulation - ��� �������� ������������ ����� ������ �� �������� ����.
Encupsulation ����������� �������������� ������� � Get/Set ��������.

������������ �������:
private: �������� ���� ��������� ������ ������ ������. � ���� ������ ������ ����������� ���������� ����� ������.

public: �������� ���� ��������� �� ������ ����� ���������. � public ������ ������ ����������� ������. 
��,� public ������ �� � ���� ������ ������ ��������� ���������� ����� ������.

protected: ���������� ����, �������� ������ ������ ������ � ��� �������� �������. 
���� ����������� ������� ������������ ������ ��� ������������.

Get/Set ������: ����� ��� ��������� ������� � �������� ���������� � ������.

Get (�����, ��������) ��������� ������ � �������� ����� �� ������,
�.�. ��������� ����� ��� �������� �������� �������� ����������.
����� ���� Set ������ ����������� ���������� ������, 

Set(������ , ����������) ��������� ������ � ���������� �� ������, 
�.�. ��������� �������� �������� �������� ����������,
�.�. ������������� ��������� ������������ �������� � ���������� ����� ������.

2. Enheritance
3. Polimorphism
*/


/* ����������� ������ � ������ :
1.  Constructor - ��� �����,�������  ������� ������. 
�������� ������ ��� ������ � �������������� ��� ���� ��� ��������.
2. Destructor -  ��� �����, ������� ���������� ������ �� ����������� ��� ������� �����.
������� �����
Assignement operator; �������� ������������
*/



