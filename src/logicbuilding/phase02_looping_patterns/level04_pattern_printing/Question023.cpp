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
// Question 23: Print a star pattern that grows to five rows and then shrinks.
int rows = 5;

for (int row = 1; row <= rows; row++) {
for (int star = 1; star <= row; star++) {
cout << "*";
}
cout << endl;
}

for (int row = rows; row >= 1; row--) {
for (int star = 1; star <= row; star++) {
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
