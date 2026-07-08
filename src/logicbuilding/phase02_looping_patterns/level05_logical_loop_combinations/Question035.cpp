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
// Question 35: : Find the smallest and largest digit in a given number.
int number = 58231;
int value = abs(number);
int smallest = 9, largest = 0;
do {
int digit = value % 10;
if (digit < smallest) smallest = digit;
if (digit > largest) largest = digit;
value /= 10;
} while (value > 0);
cout << "Smallest = " << smallest << ", Largest = " << largest << endl;
return 0;
}

/*
* Explanation:
* The value stored in `smallest` is the input that the conditions or loops work on.
* The loop uses `% 10` to take the last digit and `/= 10` to remove that digit, which is the standard digit-processing pattern.
* The if/else checks test the important cases in order: `digit < smallest`, `digit > largest`.
* Only the branch whose condition becomes true prints its message.
*/
