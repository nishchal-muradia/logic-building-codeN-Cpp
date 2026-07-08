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


bool isPrime(int number) {
if (number <= 1) return false;
for (int divisor = 2; divisor * divisor <= number; divisor++) {
if (number % divisor == 0) return false;
}
return true;
}

int main() {
// Question 18: : Check if a number is prime or not.
int number = 29;
cout << (isPrime(number) ? "Prime" : "Not prime") << endl;
return 0;
}

/*
* Explanation:
* The value stored in `number` is the input that the conditions or loops work on.
* The helper tries possible divisors from 2 up to the square root of the number.
* If any divisor divides the number exactly, the number is not prime; otherwise it is prime.
* The calculated answer is printed after the logic produces the final value.
*/
