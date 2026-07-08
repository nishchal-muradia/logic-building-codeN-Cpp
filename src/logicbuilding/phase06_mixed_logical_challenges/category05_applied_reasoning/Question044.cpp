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
// Question 44: : Simulate a simple calculator using switch-case.
int first = 20, second = 5;
char op = '*';
switch (op) {
case '+': cout << first << second << endl; break;
case '-': cout << first - second << endl; break;
case '*': cout << first * second << endl; break;
case '/': cout << first / second << endl; break;
default: cout << "Invalid operator" << endl;
}
return 0;
}

/*
* Explanation:
* The variables `first`, and `operator` hold the values that the logic checks, counts, or transforms.
* The calculated answer is printed after the logic produces the final value.
*/
