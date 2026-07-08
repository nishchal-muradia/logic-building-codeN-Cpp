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
// Question 37: : Take a single digit (0-9) and print its word form ("Zero" to "Nine").
int digit = 7;
vector<string> words = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
if (digit >= 0 && digit <= 9) cout << words[digit] << endl;
else cout << "Invalid digit" << endl;
return 0;
}

/*
* Explanation:
* The value stored in `words` is the input that the conditions or loops work on.
* The condition `digit >= 0 && digit <= 9` decides whether the current value matches the requirement.
* Only the branch whose condition becomes true prints its message.
*/
