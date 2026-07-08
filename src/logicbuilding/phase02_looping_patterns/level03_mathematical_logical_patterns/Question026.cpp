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
// Question 26: : Print all factors of a given number.
int number = 36;
for (int factor = 1; factor <= number; factor++) if (number % factor == 0) cout << factor << endl;
return 0;
}

/*
* Explanation:
* The variables `number`, and `factor` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int factor = 1`, keeps running while `factor <= number` is true, and updates using `factor++`.
* The condition `number % factor == 0` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
