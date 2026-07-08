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


void printDecreasing(int n) {
if (n == 0) return;
cout << n << endl;
printDecreasing(n - 1);
}

int main() {
// Question 2: : Print numbers from n down to 1 using recursion.
printDecreasing(5);
return 0;
}

/*
* Explanation:
* The values `5` passed to `printDecreasing` set the starting point and stopping limit for the recursive logic.
* Inside `printDecreasing`, the condition `n == 0` is the base case; it stops the repeated recursive calls.
* The recursive call `printDecreasing(n - 1)` moves the work toward the base case by changing the argument each time.
* One value is printed before the next recursive call, so the output is built step by step.
*/
