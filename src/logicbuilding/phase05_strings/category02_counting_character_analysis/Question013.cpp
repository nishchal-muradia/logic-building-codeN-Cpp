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
// Question 13: : Count how many uppercase and lowercase letters a string has.
string text = "CodeN";
int upper = 0, lower = 0;
for (int i = 0; i < text.size(); i++) {
char ch = text[i];
if (isupper(ch)) upper++;
else if (islower(ch)) lower++;
}
cout << "Uppercase = " << upper << ", Lowercase = " << lower << endl;
return 0;
}

/*
* Explanation:
* The variables `text`, `upper`, and `ch` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 0`, keeps running while `i < text.size()` is true, and updates using `i++`.
* `charAt(i)` lets the code inspect one character at a time by index.
* The if/else checks test the important cases in order: `isupper(ch)`, `islower(ch)`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
