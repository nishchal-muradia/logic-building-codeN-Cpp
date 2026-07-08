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


int sumDigits(int number) {
int value = abs(number);
int sum = 0;
do {
sum += value % 10;
value /= 10;
} while (value > 0);
return sum;
}

int productDigits(int number) {
int value = abs(number);
int product = 1;
if (value == 0) return 0;
while (value > 0) {
product *= value % 10;
value /= 10;
}
return product;
}

int main() {
// Question 48: : Take an integer (1-9999) and check if the sum of its digits is greater than the product of its digits.
int number = 1234;
int sum = sumDigits(number);
int product = productDigits(number);
if (sum > product) cout << "Digit sum is greater" << endl;
else cout << "Digit product is greater or equal" << endl;
return 0;
}

/*
* Explanation:
* The variables `number`, `sum`, and `product` hold the values that the logic checks, counts, or transforms.
* The helper calculates the required result and returns it to the print statement.
* The condition `sum > product` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
