#include<iostream>
using namespace std;

// Non optimized approach
// Total iterations = b
int calculatePower(int a, int b) {
	if (b == 0)
		return 1;
	else
		return a * calculatePower(a, b - 1);
}

// More optimized approach 
// Here the function calls reduces drastically!
int calculatePowerOptimized(int a, int b) {
	 if (b == 1) 
		return a;
	
	int sum = calculatePowerOptimized(a, b / 2);

	if (b % 2 == 0) {
		// for even power
		return sum * sum;
	}
	else {
		// for odd power
		return a * sum * sum;
	}
}

int calculatePower_main() {
	int a, b;
	cout << "Enter a & b : ";
	cin >> a >> b;

	//int ans = calculatePower(a, b);
	int ans = calculatePowerOptimized(a, b);
	cout << ans << endl;
	return 0;
}