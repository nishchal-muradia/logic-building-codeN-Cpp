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


int recursiveDigitCount(int number) {
number = abs(number);
if (number < 10) return 1;
return 1 + recursiveDigitCount(number / 10);
}

int main() {
// Question 11: : Count the number of digits in a number recursively.
int number = 98765;
cout << "Digits = " << recursiveDigitCount(number) << endl;
return 0;
}

/*
* Explanation:
* The value stored in `number` is the input that the conditions or loops work on.
* Inside `recursiveDigitCount`, the condition `number < 10` is the base case; it stops the repeated recursive calls.
* The recursive return `1 + recursiveDigitCount(number / 10)` solves a smaller part first, then combines it with the current value.
* The recursive call `recursiveDigitCount(number / 10)` moves the work toward the base case by changing the argument each time.
* The calculated answer is printed after the logic produces the final value.
*/
