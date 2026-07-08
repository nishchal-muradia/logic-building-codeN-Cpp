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
// Question 39: : Swap case: uppercase -> lowercase and lowercase -> uppercase.
string text = "Java Logic";
string result = "";

for (int i = 0; i < text.size(); i++) {
char ch = text[i];
if (isupper(ch)) {
result += string(1, (char)tolower((unsigned char)ch));
} else if (islower(ch)) {
result += string(1, (char)toupper((unsigned char)ch));
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
* The if/else checks test the important cases in order: `isupper(ch)`, `islower(ch)`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
