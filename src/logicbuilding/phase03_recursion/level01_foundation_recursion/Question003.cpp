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


void printIncreasing(int current, int n) {
if (current > n) return;
cout << current << endl;
printIncreasing(current + 1, n);
}

int main() {
// Question 3: : Print only even numbers from 1 to n recursively.
printIncreasing(1, 5);
return 0;
}

/*
* Explanation:
* The values `1, 5` passed to `printIncreasing` set the starting point and stopping limit for the recursive logic.
* Inside `printIncreasing`, the condition `current > n` is the base case; it stops the repeated recursive calls.
* The recursive call `printIncreasing(current + 1, n)` moves the work toward the base case by changing the argument each time.
* One value is printed before the next recursive call, so the output is built step by step.
*/
