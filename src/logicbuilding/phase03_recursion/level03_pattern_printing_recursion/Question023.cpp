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

void printTriangleTopDown(int row, int n) {
if (row > n) return;
printStars(row);
cout << endl;
printTriangleTopDown(row + 1, n);
}

int main() {
// Question 23: : Print a triangle of stars recursively (top-down).
printTriangleTopDown(1, 5);
return 0;
}

/*
* Explanation:
* The values `1, 5` passed to `printTriangleTopDown` set the starting point and stopping limit for the recursive logic.
* Inside `printTriangleTopDown`, the condition `row > n` is the base case; it stops the repeated recursive calls.
* The recursive call `printTriangleTopDown(row + 1, n)` moves the work toward the base case by changing the argument each time.
* One value is printed before the next recursive call, so the output is built step by step.
*/
