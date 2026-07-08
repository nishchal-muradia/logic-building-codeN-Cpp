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


long long factorial(int number) {
long long result = 1;
for (int value = 2; value <= number; value++) result *= value;
return result;
}

int main() {
// Question 28: : Check if a number is a strong number (sum of factorials of digits = number).
int number = 5;
cout << number << "! = " << factorial(number) << endl;
return 0;
}

/*
* Explanation:
* The value stored in `number` is the input that the conditions or loops work on.
* The helper multiplies all numbers from 2 up to the given number to build the factorial step by step.
* The calculated answer is printed after the logic produces the final value.
*/
