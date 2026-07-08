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


int factorial(int number) {
if (number == 0 || number == 1) {
return 1;
}
return number * factorial(number - 1);
}

int main() {
// Question 5: : Find the factorial of a number using recursion.
int number = 5;
cout << "Factorial = " << factorial(number) << endl;
return 0;
}

/*
* Explanation:
* The value stored in `number` is the number whose factorial has to be calculated.
* The base case returns 1 when the number reaches 0 or 1, because factorial stops there.
* The recursive step `number * factorial(number - 1)` multiplies the current number by the factorial of the smaller number.
* When all recursive calls return, the final multiplied value is printed as the factorial.
*/
