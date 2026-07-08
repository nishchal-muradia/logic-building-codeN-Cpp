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


int recursiveSeriesStep(int n) {
if (n == 0) return 0;
int partial = recursiveSeriesStep(n - 1);
cout << partial << " + " << n << " = " << (partial + n) << endl;
return partial + n;
}

int main() {
// Question 29: : Print sum of series 1 + 2 + 3 + ... + n recursively and display each step.
cout << "Total = " << recursiveSeriesStep(5) << endl;
return 0;
}

/*
* Explanation:
* The values `"Total = " + recursiveSeriesStep(5)` passed to `println` set the starting point and stopping limit for the recursive logic.
* Inside `recursiveSeriesStep`, the condition `n == 0` is the base case; it stops the repeated recursive calls.
* The recursive call `recursiveSeriesStep(n - 1)` moves the work toward the base case by changing the argument each time.
* One value is printed before the next recursive call, so the output is built step by step.
* The calculated answer is printed after the logic produces the final value.
*/
