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
// Question 20: : Take a month number (1-12) and print the number of days in that month (ignore leap years).
int year = 2024;
if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) cout << "Leap year" << endl;
else cout << "Not a leap year" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `year` is the input that the conditions or loops work on.
* The condition `(year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
