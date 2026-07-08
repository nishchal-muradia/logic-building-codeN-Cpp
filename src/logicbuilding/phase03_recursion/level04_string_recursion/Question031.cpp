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


string reverseRecursive(string text) {
if (text.empty()) return "";
return reverseRecursive(text.substr(1)) + text[0];
}

int main() {
// Question 31: : Reverse a string using recursion.
string text = "logic";
cout << reverseRecursive(text) << endl;
return 0;
}

/*
* Explanation:
* The value stored in `text` is the input that the conditions or loops work on.
* The recursive return `reverseRecursive(text.substr(1)) + text[0]` solves a smaller part first, then combines it with the current value.
* The calculated answer is printed after the logic produces the final value.
*/
