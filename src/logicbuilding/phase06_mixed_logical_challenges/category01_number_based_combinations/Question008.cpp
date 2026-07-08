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

int main() {
// Question 8: : Print the reverse of a number (123 -> 321).
int number = 12345;
cout << "Reverse = " << reverseNumber(number) << endl;
return 0;
}

/*
* Explanation:
* The value stored in `number` is the input that the conditions or loops work on.
* The helper builds the answer from the last digit or last character toward the first one.
* The calculated answer is printed after the logic produces the final value.
*/
