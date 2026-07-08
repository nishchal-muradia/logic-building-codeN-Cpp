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


void printCharactersRecursive(string text, int index) {
if (index == text.size()) return;
cout << text[index] << endl;
printCharactersRecursive(text, index + 1);
}

int main() {
// Question 37: : Print all characters of a string one by one recursively.
printCharactersRecursive("logic", 0);
return 0;
}

/*
* Explanation:
* The values `"logic", 0` passed to `printCharactersRecursive` set the starting point and stopping limit for the recursive logic.
* The recursive call `printCharactersRecursive(text, index + 1)` moves the work toward the base case by changing the argument each time.
* One value is printed before the next recursive call, so the output is built step by step.
*/
