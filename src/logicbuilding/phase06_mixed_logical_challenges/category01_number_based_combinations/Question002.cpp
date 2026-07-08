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


int sumDigits(int number) {
int value = abs(number);
int sum = 0;
do {
sum += value % 10;
value /= 10;
} while (value > 0);
return sum;
}

int main() {
// Question 2: : Find the sum of digits of a number (use loop).
int number = 9876;
cout << "Sum of digits = " << sumDigits(number) << endl;
return 0;
}

/*
* Explanation:
* The value stored in `number` is the input that the conditions or loops work on.
* The helper calculates the required result and returns it to the print statement.
* The calculated answer is printed after the logic produces the final value.
*/
