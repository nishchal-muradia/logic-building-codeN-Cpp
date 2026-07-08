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
// Question 14: : Replace every vowel in a string with its position (a=1, e=2...).
string text = "education";
string result = "";
for (int i = 0; i < text.size(); i++) {
char ch = text[i];
if (isVowel(ch)) result += to_string((int)string("aeiou").find(tolower(ch)) + 1);
else result += ch;
}
cout << result << endl;
return 0;
}

/*
* Explanation:
* The variables `text`, and `ch` hold the values that the logic checks, counts, or transforms.
* The helper checks characters against `a`, `e`, `i`, `o`, and `u`, so the main loop only needs to use that true/false result.
* The `for` loop starts with `int i = 0`, keeps running while `i < text.size()` is true, and updates using `i++`.
* A `StringBuilder` is used so characters or words can be added gradually while building the final string.
* `charAt(i)` lets the code inspect one character at a time by index.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
