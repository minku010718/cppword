#include <iostream>
#include <math.h>
using namespace std;

class Vector {
	double m_x, m_y;
public:
	Vector();
	Vector(double x, double y);
	double Get_Magnitude();
};

Vector::Vector()
{
	m_x = 1.0;
	m_y = 2.0;
}

Vector::Vector(double x, double y)
{
	m_x = x;
	m_y = y;
}

double Vector::Get_Magnitude()
{
	return sqrt(m_x * m_x + m_y * m_y);
}

int main()
{
	cout.setf(ios::fixed | ios::showpoint);
	cout.precision(2);

	Vector *p1 = new Vector;
	Vector *p2 = new Vector(2.0, 3.0);

	if (!p1 && !p2)
	{
		cout << "���� �޸� �Ҵ� ����\n";
		return 1;
	}

	cout << "p1�� ������ ũ��� : " << p1->Get_Magnitude() << "\n";
	cout << "p2�� ������ ũ��� : " << p2->Get_Magnitude() << "\n";
	Vector ob1;
	Vector ob2(3.0, 4.0);
	cout << "ob1�� ������ ũ��� : " << ob1.Get_Magnitude() << "\n";
	cout << "ob2�� ������ ũ��� : " << ob2.Get_Magnitude() << "\n";

	Vector* ob3 = new Vector[2];

	for (int i = 0; i < 3; i++)
		cout << "ob3[" << i << "]�� ������ ũ��� : " << ob3->Get_Magnitude() << "\n";
	delete p1;
	delete p2;

	return 0;
}