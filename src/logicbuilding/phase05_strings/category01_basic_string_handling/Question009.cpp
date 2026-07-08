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
// Question 9: : Print the ASCII value of each character in a string.
string text = "abc";
for (int i = 0; i < text.size(); i++) cout << text[i] << " = " << (int) text[i] << endl;
return 0;
}

/*
* Explanation:
* The value stored in `text` is the input that the conditions or loops work on.
* The `for` loop starts with `int i = 0`, keeps running while `i < text.size()` is true, and updates using `i++`.
* `charAt(i)` lets the code inspect one character at a time by index.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
