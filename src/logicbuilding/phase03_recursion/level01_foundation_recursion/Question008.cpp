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


int fibonacci(int n) {
if (n <= 1) return n;
return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
// Question 8: : Find nth Fibonacci number recursively.
int n = 7;
cout << "Fibonacci = " << fibonacci(n) << endl;
return 0;
}

/*
* Explanation:
* The value stored in `n` is the input that the conditions or loops work on.
* Inside `fibonacci`, the condition `n <= 1` is the base case; it stops the repeated recursive calls.
* The recursive return `fibonacci(n - 1) + fibonacci(n - 2)` solves a smaller part first, then combines it with the current value.
* The recursive call `fibonacci(n - 2)` moves the work toward the base case by changing the argument each time.
* The calculated answer is printed after the logic produces the final value.
*/
