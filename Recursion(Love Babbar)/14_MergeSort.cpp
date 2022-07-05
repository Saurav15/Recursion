#include<iostream>
using namespace std;

int* combine(int* arr1, int* arr2, int lengthArray1 , int lengthArray2) {
	//cout << "Low to mid : " << " low: " << low << " Mid:" << mid << " high:" << high << endl;
	cout << "Array length1 : " << lengthArray1 << "Array Length 2 : " << lengthArray2 << endl;
	int arrFinal[100];
	int arrFinalIndex = 0;

	// Copy array 1
	//cout << "Array 1 : " << endl;
	for (int i = 0; i <= 6; i++)
	{
		//cout << arr1[i] << endl;
		arrFinal[arrFinalIndex] = arr1[i];
		arrFinalIndex++;
	}

	// Copy array 2
	//cout << "Array 2 : " << endl;
	for (int i = 0; i <= 6; i++)
	{
		//cout << arr2[i] << endl;
		arrFinal[arrFinalIndex] = arr2[i];
		arrFinalIndex++;
	}

	cout << "Final array : " << endl;
	for (int i = 0; i <= 5; i++)
	{
		cout << arrFinal[i] << endl;
	}

	return arrFinal;
}

int* mergeSort(int* arr, int low , int high) {
	if (low >= high) {
		int arrReturn[1] = { arr[low] };
		cout << "Low : " << low << " Mid : " << (low+high)/2 << " high : " << high << endl;
		cout << arr[low] << endl;
		return arrReturn;
	}
	else {
		int mid = (low + high) / 2;
		cout << "Low : " << low << " Mid : " << mid << " high : " << high << endl;

		int lengthArray1 = mid - low;
		int lengthArray2 = high - (mid + 1);
		return combine(mergeSort(arr, low, mid), mergeSort(arr, mid + 1, high), lengthArray1 , lengthArray2);
	}
}

int mergeSort_main() {
	int n;
	int arr[100];
	cout << "Enter number of elements : " << endl;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	mergeSort(arr, 0 , n-1);

	
	return 0;
}