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
// Question 16: : Check voting eligibility for a given age (18+).
int age = 19;
if (age >= 18) cout << "Eligible to vote" << endl;
else cout << "Not eligible to vote" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `age` is the input that the conditions or loops work on.
* The condition `age >= 18` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
