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

void printTriangleBottomUp(int row) {
if (row == 0) return;
printStars(row);
cout << endl;
printTriangleBottomUp(row - 1);
}

int main() {
// Question 26: : Print reverse triangle pattern recursively.
printTriangleBottomUp(5);
return 0;
}

/*
* Explanation:
* The values `5` passed to `printTriangleBottomUp` set the starting point and stopping limit for the recursive logic.
* Inside `printTriangleBottomUp`, the condition `row == 0` is the base case; it stops the repeated recursive calls.
* The recursive call `printTriangleBottomUp(row - 1)` moves the work toward the base case by changing the argument each time.
* One value is printed before the next recursive call, so the output is built step by step.
*/
