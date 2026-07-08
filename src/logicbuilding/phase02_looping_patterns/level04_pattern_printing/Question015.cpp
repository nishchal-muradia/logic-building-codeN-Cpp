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
// Question 15: Print a binary triangle with continuous 1 and 0 values.
int rows = 5;
int value = 1;

for (int row = 1; row <= rows; row++) {
for (int column = 1; column <= row; column++) {
cout << value << " ";
value = 1 - value;
}
cout << endl;
}
return 0;
}

/*
* Explanation:
* The outer loop controls the rows of the pattern.
* Inner loops print the required spaces, stars, numbers, or letters for each row.
* After each row is complete, System.out.println() moves the output to the next line.
*/
