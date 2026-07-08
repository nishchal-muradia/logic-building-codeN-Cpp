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
// Question 6: : Take two numbers and print the larger one.
int first = 20;
int second = 35;
if (first > second) cout << first << endl;
else cout << second << endl;
return 0;
}

/*
* Explanation:
* The variables `first`, and `second` hold the values that the logic checks, counts, or transforms.
* The condition `first > second` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
