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
// Question 21: : Take a 3-digit number and check if all digits are distinct.
int number = 427;
int hundreds = number / 100;
int tens = (number / 10) % 10;
int ones = number % 10;
if (hundreds != tens && tens != ones && hundreds != ones) cout << "All digits are distinct" << endl;
else cout << "Digits are not distinct" << endl;
return 0;
}

/*
* Explanation:
* The variables `hundreds`, `tens`, and `ones` hold the values that the logic checks, counts, or transforms.
* The condition `hundreds != tens && tens != ones && hundreds != ones` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
