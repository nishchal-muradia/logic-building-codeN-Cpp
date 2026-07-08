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
// Question 22: : Take a 3-digit number and determine if the middle digit is the largest, smallest, or neither.
int number = 582;
int hundreds = number / 100;
int middle = (number / 10) % 10;
int ones = number % 10;
if (middle > hundreds && middle > ones) cout << "Middle digit is largest" << endl;
else if (middle < hundreds && middle < ones) cout << "Middle digit is smallest" << endl;
else cout << "Middle digit is neither" << endl;
return 0;
}

/*
* Explanation:
* The variables `hundreds`, `middle`, and `ones` hold the values that the logic checks, counts, or transforms.
* The if/else checks test the important cases in order: `middle > hundreds && middle > ones`, `middle < hundreds && middle < ones`.
* Only the branch whose condition becomes true prints its message.
*/
