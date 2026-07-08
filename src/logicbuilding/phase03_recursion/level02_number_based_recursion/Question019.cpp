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


void printOddRecursive(int current, int n) {
if (current > n) return;
if (current % 2 != 0) cout << current << endl;
printOddRecursive(current + 1, n);
}

int main() {
// Question 19: : Calculate the sum of first n odd numbers recursively.
printOddRecursive(1, 10);
return 0;
}

/*
* Explanation:
* The values `1, 10` passed to `printOddRecursive` set the starting point and stopping limit for the recursive logic.
* Inside `printOddRecursive`, the condition `current > n` is the base case; it stops the repeated recursive calls.
* The recursive call `printOddRecursive(current + 1, n)` moves the work toward the base case by changing the argument each time.
* One value is printed before the next recursive call, so the output is built step by step.
*/
