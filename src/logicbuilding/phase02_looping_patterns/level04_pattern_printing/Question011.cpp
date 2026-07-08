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
// Question 11: Print Numbers in an Increasing Sequence (1, 12, 123, 1234, 12345).
int rows = 5;

for (int row = 1; row <= rows; row++) {
for (int number = 1; number <= row; number++) {
cout << number;
}
cout << endl;
}
return 0;
}

/*
* Explanation:
* We use a counter variable to represent the current number.
* The loop prints the counter while it stays inside the required range.
* After every print, the counter changes so the loop can move toward the ending value.
*/
