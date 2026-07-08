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
// Question 10: : Take a character and check whether it's uppercase, lowercase, a digit, or a special character.
char ch = 'A';
if (isupper(ch)) cout << "Uppercase" << endl;
else if (islower(ch)) cout << "Lowercase" << endl;
else if (isdigit(ch)) cout << "Digit" << endl;
else cout << "Special character" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `ch` is the input that the conditions or loops work on.
* The if/else checks test the important cases in order: `isupper(ch)`, `islower(ch)`, `isdigit(ch)`.
* Only the branch whose condition becomes true prints its message.
*/
