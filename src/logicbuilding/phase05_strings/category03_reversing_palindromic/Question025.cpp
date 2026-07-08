#include <algorithm>
#include <cctype>
#include <climits>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;


string reverseString(string text) {
string builder = "";
for (int i = text.size() - 1; i >= 0; i--) builder += text[i];
return builder;
}

int main() {
// Question 25: : Check if two strings are the reverse of each other.
string first = "abc";
string second = "cba";
cout << ((reverseString(first) == second) ? "Reverse of each other" : "Not reverse of each other") << endl;
return 0;
}

/*
* Explanation:
* The variables `first`, and `second` hold the values that the logic checks, counts, or transforms.
* The helper builds the answer from the last digit or last character toward the first one.
* The calculated answer is printed after the logic produces the final value.
*/
