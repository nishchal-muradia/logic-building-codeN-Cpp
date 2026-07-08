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


void printStars(int n) {
if (n == 0) return;
cout << "*";
printStars(n - 1);
}

int main() {
// Question 21: : Print a line of n stars recursively.
printStars(5);
cout << endl;
return 0;
}

/*
* Explanation:
* The values `5` passed to `printStars` set the starting point and stopping limit for the recursive logic.
* Inside `printStars`, the condition `n == 0` is the base case; it stops the repeated recursive calls.
* The recursive call `printStars(n - 1)` moves the work toward the base case by changing the argument each time.
* One value is printed before the next recursive call, so the output is built step by step.
* `System.out.println()` is used only to move to the next line after the pattern output is complete.
*/
