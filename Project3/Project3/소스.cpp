#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1, str2, str3;

	cout << "ù ��° ���ڿ��� �Է��ϼ��� : ";
	getline(cin, str1);
	cout << "�� ��° ���ڿ��� �Է��ϼ��� : ";
	getline(cin, str2);
	cout << "\n";

	cout << str1 << "�� ���ڿ� ���̴� " << str1.length() << " ����Ʈ �̴�.\n";
	cout << str2 << "�� ���ڿ� ���̴� " << str2.length() << " ����Ʈ �̴�.\n\n";


	if (str1 == str2)
		cout << "�� ���ڿ��� ����.\n";
	else if (str1.compare(str2) < 0)
		cout << str1 << "�� " << str2 << "���� �۴�.\n";
	else
		cout << str1 << "�� " << str2 << "���� ũ��.\n";

	str3 = str1 + str2;
	cout << str3 << "\n";

	str3 = str1 + str2;


	str1 = str2;
	cout << str1 << " " << str2 << "\n";

	return 0;
}