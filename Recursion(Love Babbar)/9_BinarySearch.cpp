// Consider array to be sorted

#include<iostream>
using namespace std;

int binarySearch(int *arr, int low, int high, int key) {
	if (low > high) {
		return -1;
	}
	else {
		cout << "Low : " << low << " high : " << high << endl;
		int mid = (low + high) / 2;
		if (arr[mid] == key) {
			return mid;
		}
		else if (key > arr[mid]) {
			return binarySearch(arr, mid + 1, high, key);
		}
		else {
			return binarySearch(arr, low, mid - 1, key);
		}
	}

}

int binarySearch_Main() {
	int n;
	cout << "Enter n : ";
	cin >> n;

	int arr[100];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int key;
	cout << "Enter key : " << endl;
	cin >> key;

	int a = binarySearch(arr,0,n-1,key);
	cout << "Index of " << key << " is : " << a << endl;

	return 0;
}