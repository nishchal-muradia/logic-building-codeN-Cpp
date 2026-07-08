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
// Question 9: : Check if a number is palindrome (121 -> true).
int number = 121;
int value = number;
int reversed = 0;

while (value > 0) {
int digit = value % 10;
reversed = reversed * 10 + digit;
value /= 10;
}

cout << (number == reversed ? "Palindrome" : "Not palindrome") << endl;
return 0;
}

/*
* Explanation:
* The value stored in `reversed` is the input that the conditions or loops work on.
* The loop uses `% 10` to take the last digit and `/= 10` to remove that digit, which is the standard digit-processing pattern.
* The calculated answer is printed after the logic produces the final value.
*/
