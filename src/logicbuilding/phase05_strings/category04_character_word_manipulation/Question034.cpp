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
// Question 34: : Replace all spaces with '_'.
string text = "java logic building";
string result = "";

for (int i = 0; i < text.size(); i++) {
char ch = text[i];
if (ch == ' ') {
result += "_";
} else {
result += ch;
}
}

cout << result << endl;
return 0;
}

/*
* Explanation:
* The variables `text`, and `ch` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 0`, keeps running while `i < text.size()` is true, and updates using `i++`.
* A `StringBuilder` is used so characters or words can be added gradually while building the final string.
* `charAt(i)` lets the code inspect one character at a time by index.
* The condition `ch == ' '` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
