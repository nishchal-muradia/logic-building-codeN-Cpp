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


bool isVowel(char ch) {
char lower = tolower(ch);
return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
}

int main() {
// Question 31: : Remove all vowels from a string.
string text = "logic building";
string result = "";
for (int i = 0; i < text.size(); i++) if (!isVowel(text[i])) result += text[i];
cout << result << endl;
return 0;
}

/*
* Explanation:
* The value stored in `text` is the input that the conditions or loops work on.
* The helper checks characters against `a`, `e`, `i`, `o`, and `u`, so the main loop only needs to use that true/false result.
* The `for` loop starts with `int i = 0`, keeps running while `i < text.size()` is true, and updates using `i++`.
* A `StringBuilder` is used so characters or words can be added gradually while building the final string.
* `charAt(i)` lets the code inspect one character at a time by index.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
