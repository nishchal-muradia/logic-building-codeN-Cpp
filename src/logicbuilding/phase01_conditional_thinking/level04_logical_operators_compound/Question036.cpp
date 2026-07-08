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
// Question 36: : Take two numbers and check if both are positive and their sum is less than 100.
int first = 30, second = 40;
if (first > 0 && second > 0 && first + second < 100) cout << "Condition satisfied" << endl;
else cout << "Condition not satisfied" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `first` is the input that the conditions or loops work on.
* The condition `first > 0 && second > 0 && first + second < 100` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
