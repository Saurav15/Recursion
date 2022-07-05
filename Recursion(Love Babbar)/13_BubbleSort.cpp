#include<iostream>
using namespace std;

 int bubbleSort(int* arr, int size){
	 if (size == 0 || size == 1)
		 return arr[0];
	 else {
		 for (int i = 0; i < size-1; i++)
		 {
			 if (arr[i] > arr[i + 1])
				 swap(arr[i], arr[i + 1]);
		 }

		 return bubbleSort(arr, size - 1);
	 }
 }

 int bubbleSort_main() {
	 int arr[100];
	 int n;
	 cout << "Enter the number of elements : " << endl;
	 cin >> n;

	 for (int i = 0; i < n; i++)
	 {
		 cin >> arr[i];
	 }

	 bubbleSort(arr,n);

	 // sorted elements :
	 for (int i = 0; i < n; i++)
	 {
		 cout << arr[i] << endl;
	 }
	 return 0;
 }