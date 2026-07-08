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
// Question 9: Print a Centered Pyramid of Stars.
int rows = 5;

for (int row = 1; row <= rows; row++) {
for (int space = 1; space <= rows - row; space++) {
cout << " ";
}
for (int star = 1; star <= 2 * row - 1; star++) {
cout << "*";
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
