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
// Question 15: : Print characters that appear more than once (without map).
string text = "programming";
for (int i = 0; i < text.size(); i++) {
int count = 0;
for (int j = 0; j < text.size(); j++) if (text[i] == text[j]) count++;
if (count > 1 && text.find(text[i]) == i) cout << text[i] << endl;
}
return 0;
}

/*
* Explanation:
* The value stored in `text` is the input that the conditions or loops work on.
* The `for` loop starts with `int i = 0`, keeps running while `i < text.size()` is true, and updates using `i++`.
* The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
* `charAt(i)` lets the code inspect one character at a time by index.
* The if/else checks test the important cases in order: `text[i] == text[j]`, `count > 1 && text.find(text[i]) == i`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
