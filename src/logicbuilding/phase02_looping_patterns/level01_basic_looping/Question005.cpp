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
// Question 5: : Print the table of a given number (n x 1 to n x 10).
int n = 7;
for (int multiplier = 1; multiplier <= 10; multiplier++) {
cout << n << " x " << multiplier << " = " << (n * multiplier) << endl;
}
return 0;
}

/*
* Explanation:
* The variables `n`, and `multiplier` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int multiplier = 1`, keeps running while `multiplier <= 10` is true, and updates using `multiplier++`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
