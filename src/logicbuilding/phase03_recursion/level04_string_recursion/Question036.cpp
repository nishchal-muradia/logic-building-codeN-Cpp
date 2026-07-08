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


string removeCharRecursive(string text, int index, char target) {
if (index == text.size()) return "";
char ch = text[index];
return (ch == target ? "" : string(1, ch)) + removeCharRecursive(text, index + 1, target);
}

int main() {
// Question 36: : Remove all occurrences of a character from a string recursively.
string text = "banana";
cout << removeCharRecursive(text, 0, 'a') << endl;
return 0;
}

/*
* Explanation:
* The value stored in `text` is the input that the conditions or loops work on.
* The recursive return `(ch == target ? "" : ch) + removeCharRecursive(text, index + 1, target)` solves a smaller part first, then combines it with the current value.
* The recursive call `removeCharRecursive(text, index + 1, target)` moves the work toward the base case by changing the argument each time.
* The calculated answer is printed after the logic produces the final value.
*/
