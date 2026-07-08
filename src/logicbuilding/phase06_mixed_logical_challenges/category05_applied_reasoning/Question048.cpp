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


int main() {
// Question 48: : Print characters that are common in two strings.
string first = "logic";
string second = "coding";
for (int i = 0; i < first.size(); i++) {
char ch = first[i];
if (second.find(ch) >= 0 && first.find(ch) == i) cout << ch << endl;
}
return 0;
}

/*
* Explanation:
* The variables `first`, `second`, and `ch` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 0`, keeps running while `i < first.size()` is true, and updates using `i++`.
* `charAt(i)` lets the code inspect one character at a time by index.
* The condition `second.find(ch) >= 0 && first.find(ch) == i` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
