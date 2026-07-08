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
// Question 21: Print a centered palindrome number pyramid.
int rows = 5;

for (int row = 1; row <= rows; row++) {
for (int space = 1; space <= rows - row; space++) {
cout << " ";
}
for (int number = 1; number <= row; number++) {
cout << number;
}
for (int number = row - 1; number >= 1; number--) {
cout << number;
}
cout << endl;
}
return 0;
}

/*
* Explanation:
* We reverse the number by taking one digit at a time from the end.
* After the reverse is ready, the code compares it with the original number.
* If both values are equal, the number reads the same forward and backward, so it is a palindrome.
*/
