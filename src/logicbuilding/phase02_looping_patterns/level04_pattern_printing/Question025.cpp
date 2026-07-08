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
// Question 25: Print the centered number pattern 5, 545, 54345, 5432345, 543212345.
int rows = 5;

for (int row = 1; row <= rows; row++) {
for (int space = 1; space <= rows - row; space++) {
cout << " ";
}

int start = rows - row + 1;
for (int number = rows; number >= start; number--) {
cout << number;
}
for (int number = start + 1; number <= rows; number++) {
cout << number;
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
