#include<iostream>
#include<string>

using namespace std;

string checkPlaindrome(string& str , int i) {
	if (i == ((str.length() - 1) / 2))
		return "It is a Palindrome";
	else {
		if (str[i] == str[(str.length() - i - 1)])
			return checkPlaindrome(str, i + 1);
		else
			return "Not a Plaindrome!";
	}
}

int checkPlaindrome_main() {
	string str;
	cout << "Enter the string : " << endl;
	getline(cin, str);

	string ans = checkPlaindrome(str , 0);
	cout << ans << endl;

	return 0;
}