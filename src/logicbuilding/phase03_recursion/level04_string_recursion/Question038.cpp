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


void printReverseRecursive(string text, int index) {
if (index == text.size()) return;
printReverseRecursive(text, index + 1);
cout << text[index];
}

int main() {
// Question 38: : Print the string in reverse order recursively (without using loops).
printReverseRecursive("logic", 0);
cout << endl;
return 0;
}

/*
* Explanation:
* The values `"logic", 0` passed to `printReverseRecursive` set the starting point and stopping limit for the recursive logic.
* The recursive call `printReverseRecursive(text, index + 1)` moves the work toward the base case by changing the argument each time.
* One value is printed before the next recursive call, so the output is built step by step.
* `System.out.println()` is used only to move to the next line after the pattern output is complete.
*/
