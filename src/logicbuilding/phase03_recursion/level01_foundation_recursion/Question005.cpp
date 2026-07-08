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


int recursiveSum(int n) {
if (n == 0) return 0;
return n + recursiveSum(n - 1);
}

int main() {
// Question 5: : Print sum of first n natural numbers recursively.
int n = 10;
cout << "Sum = " << recursiveSum(n) << endl;
return 0;
}

/*
* Explanation:
* The value stored in `n` is the input that the conditions or loops work on.
* Inside `recursiveSum`, the condition `n == 0` is the base case; it stops the repeated recursive calls.
* The recursive return `n + recursiveSum(n - 1)` solves a smaller part first, then combines it with the current value.
* The recursive call `recursiveSum(n - 1)` moves the work toward the base case by changing the argument each time.
* The calculated answer is printed after the logic produces the final value.
*/
