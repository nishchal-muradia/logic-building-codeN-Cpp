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
// Question 12: Print Repeated Numbers per Row (Same Number Repeated).
int rows = 5;

for (int row = 1; row <= rows; row++) {
for (int column = 1; column <= row; column++) {
cout << row;
}
cout << endl;
}
return 0;
}

/*
* Explanation:
* We set sample values at the top of the program so the question can run directly.
* The loop repeats the required work and conditionals decide which values should be processed.
* The final output is printed after the loop has completed the required logic.
*/
