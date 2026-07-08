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


bool isArmstrong(int number) {
int value = number;
int digits = 0;
do {
digits++;
value /= 10;
} while (value > 0);
int sum = 0;
value = number;
do {
int digit = value % 10;
int power = 1;
for (int i = 1; i <= digits; i++) power *= digit;
sum += power;
value /= 10;
} while (value > 0);
return sum == number;
}

int main() {
// Question 3: : Check if a number is an Armstrong number.
int number = 153;
cout << (isArmstrong(number) ? "Armstrong number" : "Not Armstrong number") << endl;
return 0;
}

/*
* Explanation:
* The value stored in `number` is the input that the conditions or loops work on.
* The helper counts how many digits the number has by repeatedly dividing a copy of the number by 10.
* Then it extracts each digit with `% 10`, raises that digit to the digit-count power, and adds it to `sum`.
* If the final `sum` equals the original number, the helper returns true.
* The calculated answer is printed after the logic produces the final value.
*/
