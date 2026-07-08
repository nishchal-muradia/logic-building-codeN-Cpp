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
// Question 18: : Find the count of prime numbers in the array.
vector<int> numbers = {4, -2, 7, 0, 7, 3};
int count = 0;
for (auto number : numbers) if (isPrime(number)) count++;
cout << "Prime count = " << count << endl;
return 0;
}

/*
* Explanation:
* The value stored in `numbers` is the input that the conditions or loops work on.
* The helper tries possible divisors from 2 up to the square root of the number.
* If any divisor divides the number exactly, the number is not prime; otherwise it is prime.
* The enhanced `for` loop visits every element in the array one by one.
* The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
* The condition `isPrime(number)` decides whether the current value matches the requirement.
*/
