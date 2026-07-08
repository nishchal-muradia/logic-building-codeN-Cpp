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
// Question 16: : Count how many times a given character appears in a string.
string text = "banana";
char target = 'a';
int count = 0;
for (int i = 0; i < text.size(); i++) if (text[i] == target) count++;
cout << "Count = " << count << endl;
return 0;
}

/*
* Explanation:
* The variables `text`, and `target` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 0`, keeps running while `i < text.size()` is true, and updates using `i++`.
* The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
* `charAt(i)` lets the code inspect one character at a time by index.
* The condition `text[i] == target` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
