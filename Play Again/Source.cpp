#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	char again = 'y';
	while (again == 'y')
	{
		cout << "\n ** Сыграл в интересную игру **";
		cout << "\nНачать игру с начала ? (n/y): ";
		cin >> again;
	}
	cout << "Окей. bye bye";
	return 0;

}