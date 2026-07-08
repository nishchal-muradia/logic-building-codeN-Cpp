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


string removeSpacesRecursive(string text, int index) {
if (index == text.size()) return "";
char ch = text[index];
return (ch == ' ' ? "" : string(1, ch)) + removeSpacesRecursive(text, index + 1);
}

int main() {
// Question 34: : Remove all spaces from a string recursively.
string text = "lo g ic";
cout << removeSpacesRecursive(text, 0) << endl;
return 0;
}

/*
* Explanation:
* The value stored in `text` is the input that the conditions or loops work on.
* The recursive return `(ch == ' ' ? "" : ch) + removeSpacesRecursive(text, index + 1)` solves a smaller part first, then combines it with the current value.
* The recursive call `removeSpacesRecursive(text, index + 1)` moves the work toward the base case by changing the argument each time.
* The calculated answer is printed after the logic produces the final value.
*/
