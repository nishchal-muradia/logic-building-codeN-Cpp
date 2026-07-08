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


int reverseNumber(int number) {
int value = abs(number);
int reversed = 0;
do {
reversed = reversed * 10 + value % 10;
value /= 10;
} while (value > 0);
return number < 0 ? -reversed : reversed;
}

bool isPalindromeNumber(int number) {
return abs(number) == abs(reverseNumber(number));
}

int main() {
// Question 32: : Check if a string is palindrome using recursion.
int number = 12321;
cout << (isPalindromeNumber(number) ? "Palindrome" : "Not palindrome") << endl;
return 0;
}

/*
* Explanation:
* The value stored in `number` is the input that the conditions or loops work on.
* The helper compares the original value with its reversed form, because a palindrome reads the same both ways.
* The calculated answer is printed after the logic produces the final value.
*/
