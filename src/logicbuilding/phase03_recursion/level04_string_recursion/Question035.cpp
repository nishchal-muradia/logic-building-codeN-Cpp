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


string replaceCharRecursive(string text, int index, char oldChar, char newChar) {
if (index == text.size()) return "";
char ch = text[index] == oldChar ? newChar : text[index];
return ch + replaceCharRecursive(text, index + 1, oldChar, newChar);
}

int main() {
// Question 35: : Replace all occurrences of a character (say 'a' -> 'x') recursively.
string text = "banana";
cout << replaceCharRecursive(text, 0, 'a', 'x') << endl;
return 0;
}

/*
* Explanation:
* The value stored in `text` is the input that the conditions or loops work on.
* The recursive return `ch + replaceCharRecursive(text, index + 1, oldChar, newChar)` solves a smaller part first, then combines it with the current value.
* The recursive call `replaceCharRecursive(text, index + 1, oldChar, newChar)` moves the work toward the base case by changing the argument each time.
* The calculated answer is printed after the logic produces the final value.
*/
