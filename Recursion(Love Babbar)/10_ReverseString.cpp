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

int reverseString_main() {
	string str;
	cout << "Enter string : " << endl;
	getline(cin, str);

	cout << str.length() << endl;
	reverseString(str,0,str.length() - 1);
	
	cout << "reversed string is : " << str << endl;

	return 0;
}