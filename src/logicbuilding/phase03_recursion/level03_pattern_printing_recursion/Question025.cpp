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


void printNumberPattern(int row, int n) {
if (row > n) return;
for (int i = 1; i <= row; i++) cout << i << " ";
cout << endl;
printNumberPattern(row + 1, n);
}

int main() {
// Question 25: : Print pattern of numbers recursively (1 to n each row).
printNumberPattern(1, 5);
return 0;
}

/*
* Explanation:
* The values `1, 5` passed to `printNumberPattern` set the starting point and stopping limit for the recursive logic.
* Inside `printNumberPattern`, the condition `row > n` is the base case; it stops the repeated recursive calls.
* The recursive call `printNumberPattern(row + 1, n)` moves the work toward the base case by changing the argument each time.
* Inside each recursive step, the loop starts with `int i = 1`, runs while `i <= row` is true, and updates with `i++` to print that row.
*/
