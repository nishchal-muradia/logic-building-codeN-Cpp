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


int main() {
// Question 37: : Print a pattern where each row i prints i*i.
int rows = 5;
for (int row = 1; row <= rows; row++) {
for (int col = 1; col <= row; col++) cout << (row * row) << " ";
cout << endl;
}
return 0;
}

/*
* Explanation:
* The value stored in `rows` is the input that the conditions or loops work on.
* The outer loop controls each row of the pattern, and the inner loop controls what gets printed inside that row.
* After one row is printed, `System.out.println()` moves the cursor to the next line.
* `System.out.println()` is used only to move to the next line after the pattern output is complete.
*/
