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


string toUpperRecursive(string text, int index) {
if (index == text.size()) return "";
return string(1, (char)toupper((unsigned char)text[index])) + toUpperRecursive(text, index + 1);
}

int main() {
// Question 39: : Convert a string to uppercase recursively.
cout << toUpperRecursive("logic", 0) << endl;
return 0;
}

/*
* Explanation:
* The values `toUpperRecursive("logic", 0)` passed to `println` set the starting point and stopping limit for the recursive logic.
* The recursive return `toupper(text[index]) + toUpperRecursive(text, index + 1)` solves a smaller part first, then combines it with the current value.
* The recursive call `toUpperRecursive(text, index + 1)` moves the work toward the base case by changing the argument each time.
* The calculated answer is printed after the logic produces the final value.
*/
