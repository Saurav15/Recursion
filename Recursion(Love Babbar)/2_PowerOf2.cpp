#include<iostream>

using namespace std;

int power_of_2(int power) {
	if (power == 0)
		return 1;
	else 
		return 2 * power_of_2(power - 1);
}

int power_of_2_main() {
	int power;
	cout << "Enter the power of 2 : " << endl;
	cin >> power;

	int a = power_of_2(power);
	cout << "2^" << power << " is : " << a;

	return 0;
}