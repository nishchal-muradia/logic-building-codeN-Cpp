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
// Question 7: : Print all prime numbers between 1 and N.
int n = 100;
for (int number = 2; number <= n; number++) {
if (isPrime(number)) cout << number << endl;
}
return 0;
}

/*
* Explanation:
* The value stored in `n` is the input that the conditions or loops work on.
* The helper tries possible divisors from 2 up to the square root of the number.
* If any divisor divides the number exactly, the number is not prime; otherwise it is prime.
* The `for` loop starts with `int number = 2`, keeps running while `number <= n` is true, and updates using `number++`.
* The condition `isPrime(number)` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
