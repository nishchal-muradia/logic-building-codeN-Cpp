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
// Question 27: : Find the sum of all factors of a number.
int number = 36;
int sum = 0;
for (int factor = 1; factor <= number; factor++) if (number % factor == 0) sum += factor;
cout << "Factor sum = " << sum << endl;
return 0;
}

/*
* Explanation:
* The variables `number`, `sum`, and `factor` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int factor = 1`, keeps running while `factor <= number` is true, and updates using `factor++`.
* The variable `sum` starts at 0 and collects values as the loop finds numbers that should be included.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
