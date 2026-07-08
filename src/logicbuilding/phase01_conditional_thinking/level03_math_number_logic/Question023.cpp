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
// Question 23: : Take a 4-digit number and check if the first and last digits are equal.
int number = 4554;
int firstDigit = number / 1000;
int lastDigit = number % 10;
if (firstDigit == lastDigit) cout << "First and last digits are equal" << endl;
else cout << "First and last digits are not equal" << endl;
return 0;
}

/*
* Explanation:
* The variables `firstDigit`, and `lastDigit` hold the values that the logic checks, counts, or transforms.
* The condition `firstDigit == lastDigit` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
