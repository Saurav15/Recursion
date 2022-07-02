#include<iostream>
using namespace std;

int counting(int number) {
	if (number == 0)
		return 0;
	else {
		counting(number - 1);
		cout << number << endl;
	}
}

int counting_reverse(int number) {
	if (number == 0)
		return 0;
	else {
		cout << number << endl;
		counting_reverse(number - 1);
	}
}

int counting_main() {
	int number;
	cout << "Enter the number : " << endl;
	cin >> number;

	counting(number);
	counting_reverse(number);

	return 0;
}