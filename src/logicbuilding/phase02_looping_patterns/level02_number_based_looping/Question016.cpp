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


bool isPerfect(int number) {
if (number <= 1) return false;
int sum = 1;
for (int factor = 2; factor <= number / 2; factor++) {
if (number % factor == 0) sum += factor;
}
return sum == number;
}

int main() {
// Question 16: : Check if a number is a perfect number.
int number = 28;
cout << (isPerfect(number) ? "Perfect number" : "Not perfect number") << endl;
return 0;
}

/*
* Explanation:
* The value stored in `number` is the input that the conditions or loops work on.
* The helper calculates the required result and returns it to the print statement.
* The calculated answer is printed after the logic produces the final value.
*/
