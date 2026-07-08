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
// Question 38: : Print factorial of each number from 1 to n.
int n = 6;
for (int number = 1; number <= n; number++) cout << number << "! = " << factorial(number) << endl;
return 0;
}

/*
* Explanation:
* The value stored in `n` is the input that the conditions or loops work on.
* The helper multiplies all numbers from 2 up to the given number to build the factorial step by step.
* The `for` loop starts with `int number = 1`, keeps running while `number <= n` is true, and updates using `number++`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
