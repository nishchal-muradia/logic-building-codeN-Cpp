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
// Question 18: : Count how many substrings start and end with the same character (simple logic).
string text = "abca";
int count = 0;
for (int start = 0; start < text.size(); start++) {
for (int end = start; end < text.size(); end++) {
if (text[start] == text[end]) count++;
}
}
cout << "Count = " << count << endl;
return 0;
}

/*
* Explanation:
* The variables `text`, `start`, and `end` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int start = 0`, keeps running while `start < text.size()` is true, and updates using `start++`.
* The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
* `charAt(i)` lets the code inspect one character at a time by index.
* The condition `text[start] == text[end]` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
