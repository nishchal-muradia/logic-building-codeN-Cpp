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
// Question 8: : Print the sum of all odd numbers up to n.
int n = 20;
int sum = 0;
for (int number = 1; number <= n; number++) if (number % 2 != 0) sum += number;
cout << "Odd sum = " << sum << endl;
return 0;
}

/*
* Explanation:
* The value stored in `n` is the input that the conditions or loops work on.
* The `for` loop starts with `int number = 1`, keeps running while `number <= n` is true, and updates using `number++`.
* The variable `sum` starts at 0 and collects values as the loop finds numbers that should be included.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
