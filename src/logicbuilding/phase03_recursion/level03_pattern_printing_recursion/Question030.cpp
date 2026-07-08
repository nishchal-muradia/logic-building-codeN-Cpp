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


void printCharacterPattern(int row, int n) {
if (row > n) return;
for (char ch = 'A'; ch < 'A' + row; ch++) cout << ch;
cout << endl;
printCharacterPattern(row + 1, n);
}

int main() {
// Question 30: : Print pattern of characters (A, AB, ABC, ...) recursively.
printCharacterPattern(1, 5);
return 0;
}

/*
* Explanation:
* The values `1, 5` passed to `printCharacterPattern` set the starting point and stopping limit for the recursive logic.
* Inside `printCharacterPattern`, the condition `row > n` is the base case; it stops the repeated recursive calls.
* The recursive call `printCharacterPattern(row + 1, n)` moves the work toward the base case by changing the argument each time.
* Inside each recursive step, the loop starts with `char ch = 'A'`, runs while `ch < 'A' + row` is true, and updates with `ch++` to print that row.
*/
