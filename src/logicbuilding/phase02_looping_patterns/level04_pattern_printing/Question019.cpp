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
// Question 19: Print a centered continuous alphabet pyramid.
int rows = 5;
char letter = 'A';

for (int row = 1; row <= rows; row++) {
for (int space = 1; space <= rows - row; space++) {
cout << " ";
}
for (int column = 1; column <= 2 * row - 1; column++) {
cout << letter;
letter++;
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
