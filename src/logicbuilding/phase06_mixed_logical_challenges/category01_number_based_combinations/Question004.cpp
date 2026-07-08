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


long long factorial(int number) {
long long result = 1;
for (int value = 2; value <= number; value++) result *= value;
return result;
}

int main() {
// Question 4: : Print all Armstrong numbers between 1 and 1000.
int number = 145;
int value = number;
int sum = 0;
while (value > 0) {
int digit = value % 10;
sum += factorial(digit);
value /= 10;
}
cout << (sum == number ? "Strong number" : "Not strong number") << endl;
return 0;
}

/*
* Explanation:
* The variables `number`, `value`, `sum`, and `digit` hold the values that the logic checks, counts, or transforms.
* The helper counts how many digits the number has by repeatedly dividing a copy of the number by 10.
* Then it extracts each digit with `% 10`, raises that digit to the digit-count power, and adds it to `sum`.
* If the final `sum` equals the original number, the helper returns true.
* The loop uses `% 10` to take the last digit and `/= 10` to remove that digit, which is the standard digit-processing pattern.
* The variable `sum` starts at 0 and collects values as the loop finds numbers that should be included.
*/
