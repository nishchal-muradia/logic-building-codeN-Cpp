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
// Question 4: : Check if a number is divisible by both 3 and 5.
int number = 45;
if (number % 3 == 0 && number % 5 == 0) cout << "Divisible by both 3 and 5" << endl;
else cout << "Not divisible by both 3 and 5" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `number` is the input that the conditions or loops work on.
* The condition `number % 3 == 0 && number % 5 == 0` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
