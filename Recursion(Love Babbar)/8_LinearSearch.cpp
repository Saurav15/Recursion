#include<iostream>
using namespace std;

bool linearSearch(int* arr, int n, int key) {
	if (n == 0)
		return false;
	else {
		if (arr[0] == key) {
			return true;
		}
		else {
			return linearSearch(arr + 1, n - 1, key);
		}
	}
}

int linearSearch_main() {
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

	bool ans = linearSearch(arr, n , key);

	cout << "Found number : " << ans << endl ;
	return 0;
}