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
// Question 15: : Count how many spaces are there in a sentence.
string text = "logic building is fun";
int spaces = 0;
for (int i = 0; i < text.size(); i++) if (text[i] == ' ') spaces++;
cout << "Spaces = " << spaces << endl;
return 0;
}

/*
* Explanation:
* The variables `text`, and `spaces` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 0`, keeps running while `i < text.size()` is true, and updates using `i++`.
* `charAt(i)` lets the code inspect one character at a time by index.
* The condition `text[i] == ' '` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
