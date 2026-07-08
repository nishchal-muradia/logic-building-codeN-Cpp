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
// Question 21: : Reverse a string without using built-in reverse.
string text = "logic";
cout << reverseString(text) << endl;
return 0;
}

/*
* Explanation:
* The value stored in `text` is the input that the conditions or loops work on.
* The helper builds the answer from the last digit or last character toward the first one.
* The calculated answer is printed after the logic produces the final value.
*/
