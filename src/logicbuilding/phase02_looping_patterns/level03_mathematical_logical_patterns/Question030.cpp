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
// Question 30: : Print first n terms of a geometric progression (a, r).
int n = 5, term = 2, ratio = 3;
for (int i = 0; i < n; i++) {
cout << term << endl;
term *= ratio;
}
return 0;
}

/*
* Explanation:
* The value stored in `n` is the input that the conditions or loops work on.
* The `for` loop starts with `int i = 0`, keeps running while `i < n` is true, and updates using `i++`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
