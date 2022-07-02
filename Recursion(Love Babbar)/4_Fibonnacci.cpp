#include<iostream>
using namespace std;

int fibonnacci(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return fibonnacci(n - 1) + fibonnacci(n - 2);
	}
}

int fibonnacci_main() {
	int n;
	cout << "Find nth fibonnacci number : " << endl;
	cin >> n;

	int a =fibonnacci(n);
	cout << a << endl;

	return 0;
}