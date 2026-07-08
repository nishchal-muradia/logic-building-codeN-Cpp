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
// Question 27: : Print the second half of the string in reverse.
string text = "logicbuild";
string secondHalf = text.substr(text.size() / 2);
cout << reverseString(secondHalf) << endl;
return 0;
}

/*
* Explanation:
* The variables `text`, and `secondHalf` hold the values that the logic checks, counts, or transforms.
* The helper builds the answer from the last digit or last character toward the first one.
* The calculated answer is printed after the logic produces the final value.
*/
