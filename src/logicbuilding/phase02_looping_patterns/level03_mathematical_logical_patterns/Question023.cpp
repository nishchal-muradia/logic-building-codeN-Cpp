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
// Question 23: : Print all numbers between a and b divisible by 7.
int a = 1, b = 100;
for (int number = a; number <= b; number++) if (number % 7 == 0) cout << number << endl;
return 0;
}

/*
* Explanation:
* The value stored in `a` is the input that the conditions or loops work on.
* The `for` loop starts with `int number = a`, keeps running while `number <= b` is true, and updates using `number++`.
* The condition `number % 7 == 0` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
