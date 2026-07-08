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
// Question 35: : Take income and age, and check if eligible for tax (age > 18 and income > 5 L).
int age = 25;
int income = 600000;
if (age > 18 && income > 500000) cout << "Eligible for tax" << endl;
else cout << "Not eligible for tax" << endl;
return 0;
}

/*
* Explanation:
* The variables `age`, and `income` hold the values that the logic checks, counts, or transforms.
* The condition `age > 18 && income > 500000` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
