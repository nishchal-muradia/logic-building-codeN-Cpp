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
// Question 7: : Take three numbers and print the largest.
int first = 20, second = 35, third = 12;
int largest = first;
if (second > largest) largest = second;
if (third > largest) largest = third;
cout << "Largest = " << largest << endl;
return 0;
}

/*
* Explanation:
* The variables `first`, and `largest` hold the values that the logic checks, counts, or transforms.
* The if/else checks test the important cases in order: `second > largest`, `third > largest`.
* Only the branch whose condition becomes true prints its message.
*/
