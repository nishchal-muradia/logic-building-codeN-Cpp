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
// Question 38: : Print Pascal's triangle up to N rows.
int rows = 5;
for (int row = 0; row < rows; row++) {
int value = 1;
for (int col = 0; col <= row; col++) {
cout << value << " ";
value = value * (row - col) / (col + 1);
}
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
