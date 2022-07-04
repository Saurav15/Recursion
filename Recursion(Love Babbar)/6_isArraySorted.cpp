#include<iostream>
using namespace std;

int isSorted(int* arr, int n, int size) {
	if (n == size - 1) {
		cout << "Sorted" << endl;
		return 1;
	}
	else {
		if (arr[n] < arr[n + 1]) {
			return isSorted(arr, n + 1, size);
		}
		else {
			cout << "Not Sorted" << endl;
			return 0;
		}
	}
}

int isSorted_main() {
	int n;
	cout << "Enter the elements in the array : ";
	cin >> n;

	int arr[100];

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	isSorted(arr,0,n);

	return 0; 
}