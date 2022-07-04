#include<iostream>
using namespace std;

int sum(int* arr, int n) {
	if (n == 1) {
		return arr[0];
	}
	else {
		return arr[0] + sum(arr + 1, n - 1);
	}
}

int sum_main() {
	int n;
	cout << "Enter n : " << endl;
	cin >> n;

	int arr[100];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	/*for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}*/

	int a = sum(arr, n);
	cout << "sum is : " << a;
	return 0;
}