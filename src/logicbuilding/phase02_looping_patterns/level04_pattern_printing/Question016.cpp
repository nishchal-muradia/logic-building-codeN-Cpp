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
// Question 16: Print a continuous alphabet triangle.
int rows = 5;
char letter = 'A';

for (int row = 1; row <= rows; row++) {
for (int column = 1; column <= row; column++) {
cout << letter << " ";
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
