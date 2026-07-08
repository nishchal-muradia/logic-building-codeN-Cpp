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
// Question 19: : Print Fibonacci series up to n terms.
int terms = 10;
int first = 0, second = 1;
for (int count = 1; count <= terms; count++) {
cout << first << " ";
int next = first + second;
first = second;
second = next;
}
cout << endl;
return 0;
}

/*
* Explanation:
* The variables `terms`, `first`, and `next` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int count = 1`, keeps running while `count <= terms` is true, and updates using `count++`.
* `System.out.println()` is used only to move to the next line after the pattern output is complete.
*/
