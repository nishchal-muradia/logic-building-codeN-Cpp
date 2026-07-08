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
// Question 11: : Check if two strings are anagrams (without using collections).
string first = "listen";
string second = "silent";
vector<int> frequency(256);
for (int i = 0; i < first.size(); i++) frequency[first[i]]++;
for (int i = 0; i < second.size(); i++) frequency[second[i]]--;
bool anagram = first.size() == second.size();
for (auto value : frequency) if (value != 0) anagram = false;
cout << (anagram ? "Anagram" : "Not anagram") << endl;
return 0;
}

/*
* Explanation:
* The variables `first`, `second`, and `anagram` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 0`, keeps running while `i < first.size()` is true, and updates using `i++`.
* `charAt(i)` lets the code inspect one character at a time by index.
* The condition `value != 0` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
