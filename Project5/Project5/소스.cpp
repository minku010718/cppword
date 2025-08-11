#include <iostream>
#include <string>
using namespace std;

class Student
{
	int m_count;
	string m_gender;
	int m_age;
public:
	Student(string gender = "NONE", int age = 0);
	~Student();
	Student(const Student& s);
	int Get_Age() { return m_age; }
	string Get_Gender() { return m_gender; }
};

Student::Student(string gender, int age)
{
	m_count++;
	m_gender = gender;
	m_age = age;
	cout << m_gender << "�⼮, ���� : " << m_count << endl;
}

Student::Student(const Student& s)
{
	m_count++;
	m_gender = s.m_gender;
	m_age = s.m_age;
	cout << m_gender << " ��������� ȣ���, ���� : " << m_count << endl;
};

Student::~Student()
{
	m_count--;
	cout << m_gender << " �Ҹ� : ���� �л� �� : " << m_count << endl;
}

void Print_Student(Student s, string str)
{
	cout << "\n--- Print_Student() �Լ� ���� ---\n";
	cout << str << "��ü�� (" << s.Get_Gender() << ")�Դϴ�.\n";
	cout << "���̴� " << s.Get_Age() << "�� �Դϴ�.\n";
	cout << "--- Print_Student() �Լ� ���� ---\n\n";
}

Student* m_count = new Student(0);

int main()
{
	Student stud1;
	Student stud2("���л�", 21);
	Student stud3("���л�", 23);
	cout << "\n------ Main() �Լ� ���� ------\n";
	cout << "stud1 ��ü�� ������ (" << stud1.Get_Gender() << ")�Դϴ�.\n";
	Print_Student(stud1, "stud1");

	cout << "stud2 ��ü�� ������ (" << stud2.Get_Gender() << ")�Դϴ�.\n";
	Print_Student(stud2, "stud2");

	cout << "stud3 ��ü�� ������ (" << stud3.Get_Gender() << ")�Դϴ�.\n";
	Print_Student(stud3, "stud3");

	cout << "------ main() �Լ� �� ------\n";

	return 0;
}