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
// Question 12: : Count the number of digits, letters, and special characters in a string.
int number = 98765;
int value = abs(number);
int count = 0;
do {
count++;
value /= 10;
} while (value > 0);
cout << "Digits = " << count << endl;
return 0;
}

/*
* Explanation:
* The variables `number`, `value`, and `count` hold the values that the logic checks, counts, or transforms.
* The `while` or `do-while` loop keeps repeating until the changing value reaches the stopping condition.
* The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
* The calculated answer is printed after the logic produces the final value.
*/
