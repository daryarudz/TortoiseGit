#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int n, reverse = 0, rem;
	cout << "¬ведите число: " << endl;
	cin >> n;

	while (n>0)
	{
		rem = n % 10;
		reverse = reverse * 10 + rem;
		n /= 10;
	}
	cout << reverse;

	return 0;
}