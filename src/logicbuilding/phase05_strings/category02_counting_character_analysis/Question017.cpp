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
// Question 17: : Count how many alphabets are before 'm' and after 'm' in a given string.
string text = "alphabet";
int before = 0, after = 0;
for (int i = 0; i < text.size(); i++) {
char ch = tolower(text[i]);
if (ch >= 'a' && ch < 'm') before++;
else if (ch > 'm' && ch <= 'z') after++;
}
cout << "Before m = " << before << ", After m = " << after << endl;
return 0;
}

/*
* Explanation:
* The variables `text`, `before`, and `ch` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 0`, keeps running while `i < text.size()` is true, and updates using `i++`.
* `charAt(i)` lets the code inspect one character at a time by index.
* The if/else checks test the important cases in order: `ch >= 'a' && ch < 'm'`, `ch > 'm' && ch <= 'z'`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
