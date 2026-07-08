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
// Question 5: : Count how many characters (excluding spaces) are in the string.
string text = "logic building";
int count = 0;
for (int i = 0; i < text.size(); i++) if (text[i] != ' ') count++;
cout << "Characters = " << count << endl;
return 0;
}

/*
* Explanation:
* The value stored in `text` is the input that the conditions or loops work on.
* The `for` loop starts with `int i = 0`, keeps running while `i < text.size()` is true, and updates using `i++`.
* The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
* `charAt(i)` lets the code inspect one character at a time by index.
* The condition `text[i] != ' '` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
