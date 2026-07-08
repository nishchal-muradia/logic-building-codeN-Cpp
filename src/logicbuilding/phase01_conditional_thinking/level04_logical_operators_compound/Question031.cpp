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
// Question 31: : Take a character and check if it is a letter, a digit, or neither.
char ch = '9';
if (isalpha(ch)) cout << "Letter" << endl;
else if (isdigit(ch)) cout << "Digit" << endl;
else cout << "Neither" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `ch` is the input that the conditions or loops work on.
* The if/else checks test the important cases in order: `isalpha(ch)`, `isdigit(ch)`.
* Only the branch whose condition becomes true prints its message.
*/
