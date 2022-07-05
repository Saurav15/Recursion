#include<iostream>
#include<string>
using namespace std;

string reverseString(string& str, int low ,int high) {
	cout << "Low : " << low << " high : " << high << endl;
	if (low > high)
		return "";
	else {
		swap(str[low], str[high]);
		return reverseString(str, low + 1, high - 1);
	}
}

string reverseStringSinglePointer(string& str, int i) {
	cout << "Pointer : " << i << endl;
	if (i == ((str.length() - 1) / 2))
		return "";
	else {
		swap(str[i], str[str.length() - i - 1]);
		return reverseStringSinglePointer(str, i + 1);
	}
}

int reverseString_main() {
	string str;
	cout << "Enter string : " << endl;
	getline(cin, str);

	//reverseString(str,0,str.length() - 1);
	reverseStringSinglePointer(str, 0);

	cout << "reversed string is : " << str << endl;

	return 0;
}