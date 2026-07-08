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
// Question 43: : Validate a password (at least one uppercase, lowercase, digit, special char).
string password = "Code123!";
bool hasDigit = false, hasUpper = false, hasLower = false, hasSpecial = false;
for (int i = 0; i < password.size(); i++) {
char ch = password[i];
if (isdigit(ch)) hasDigit = true;
else if (isupper(ch)) hasUpper = true;
else if (islower(ch)) hasLower = true;
else hasSpecial = true;
}
if (password.size() >= 8 && hasDigit && hasUpper && hasLower && hasSpecial) cout << "Valid password" << endl;
else cout << "Invalid password" << endl;
return 0;
}

/*
* Explanation:
* The variables `password`, `hasDigit`, and `ch` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 0`, keeps running while `i < password.size()` is true, and updates using `i++`.
* `charAt(i)` lets the code inspect one character at a time by index.
* The if/else checks test the important cases in order: `isdigit(ch)`, `isupper(ch)`, `islower(ch)`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
