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
// Question 2: : Check if a number is even or odd.
int number = 18;
if (number % 2 == 0) cout << "Even" << endl;
else cout << "Odd" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `number` is the input that the conditions or loops work on.
* The condition `number % 2 == 0` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
