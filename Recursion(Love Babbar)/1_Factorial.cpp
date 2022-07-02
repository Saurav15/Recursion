#include<iostream>

using namespace std;

int factorial(int number) {
	if (number == 0)
		return 1;
	else
		return number * factorial(number - 1);
}

int factorial_main() {
	int number;
	cout << "Enter the number : " << endl;
	cin >> number;

	int ans = factorial(number);
	cout << "Factorial of " << number << " is : " << ans;

	return 0;
}