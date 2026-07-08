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
// Question 14: Print a continuous digit triangle that wraps after 9.
int rows = 7;
int digit = 1;

for (int row = 1; row <= rows; row++) {
for (int column = 1; column <= row; column++) {
cout << digit << " ";
digit++;
if (digit == 10) {
digit = 0;
}
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
