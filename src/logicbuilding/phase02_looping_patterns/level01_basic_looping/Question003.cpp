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
// Question 3: : Print all odd numbers between 1 and 100.
for (int number = 1; number <= 100; number++) {
if (number % 2 != 0) cout << number << endl;
}
return 0;
}

/*
* Explanation:
* The value stored in `number` is the input that the conditions or loops work on.
* The `for` loop starts with `int number = 1`, keeps running while `number <= 100` is true, and updates using `number++`.
* The condition `number % 2 != 0` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
