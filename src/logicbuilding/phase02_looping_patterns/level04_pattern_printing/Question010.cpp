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
// Question 10: Print Stars and Spaces Alternating (Stars and Blank Spaces).
int rows = 5;

for (int row = 1; row <= rows; row++) {
for (int space = 1; space <= rows - row; space++) {
cout << " ";
}

for (int star = 1; star <= row; star++) {
cout << "*";
if (star < row) {
cout << " ";
}
}
cout << endl;
}
return 0;
}

/*
* Explanation:
* The outer loop controls how many rows are printed.
* The first inner loop prints the leading blank spaces so the pattern is right-aligned.
* The second inner loop prints stars, and it prints one blank space after each star except the last star in that row.
*/
