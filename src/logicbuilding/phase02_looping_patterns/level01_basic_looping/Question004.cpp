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
// Question 4: : Print numbers from 10 down to 1.
for (int number = 10; number >= 1; number--) cout << number << endl;
return 0;
}

/*
* Explanation:
* The value stored in `number` is the input that the conditions or loops work on.
* The `for` loop starts with `int number = 10`, keeps running while `number >= 1` is true, and updates using `number--`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
