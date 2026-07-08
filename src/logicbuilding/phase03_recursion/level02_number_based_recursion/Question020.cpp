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


int nCr(int n, int r) {
if (r == 0 || r == n) return 1;
return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main() {
// Question 20: : Find nCr (Combination formula) recursively using Pascal's relation.
cout << "nCr = " << nCr(5, 2) << endl;
return 0;
}

/*
* Explanation:
* The values `"nCr = " + nCr(5, 2)` passed to `println` set the starting point and stopping limit for the recursive logic.
* Inside `nCr`, the condition `r == 0 || r == n` is the base case; it stops the repeated recursive calls.
* The recursive return `nCr(n - 1, r - 1) + nCr(n - 1, r)` solves a smaller part first, then combines it with the current value.
* The recursive call `nCr(n - 1, r)` moves the work toward the base case by changing the argument each time.
* The calculated answer is printed after the logic produces the final value.
*/
