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
// Question 1: : Print numbers from 1 to 10.
for (int number = 1; number <= 10; number++) cout << number << endl;
return 0;
}

/*
* Explanation:
* The value stored in `number` is the input that the conditions or loops work on.
* The `for` loop starts with `int number = 1`, keeps running while `number <= 10` is true, and updates using `number++`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
