#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	char again = 'y';
	while (again == 'y')
	{
		cout << "\n ** ������ � ���������� ���� **";
		cout << "\n������ ���� � ������ ? (n/y): ";
		cin >> again;
	}
	cout << "����. bye bye";
	return 0;

}