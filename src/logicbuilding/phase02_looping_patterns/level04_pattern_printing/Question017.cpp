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
// Question 17: Print repeated alphabets per row.
int rows = 5;

for (int row = 1; row <= rows; row++) {
char letter = (char) ('A' + row - 1);
for (int column = 1; column <= row; column++) {
cout << letter << " ";
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
