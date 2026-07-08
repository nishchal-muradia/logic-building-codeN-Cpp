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
// Question 10: : Print the product of digits of a given number.
int number = 2345;
cout << "Product of digits = " << productDigits(number) << endl;
return 0;
}

/*
* Explanation:
* The value stored in `number` is the input that the conditions or loops work on.
* The helper calculates the required result and returns it to the print statement.
* The calculated answer is printed after the logic produces the final value.
*/
