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
// Question 14: : Find the frequency of each character in a string (without using a map).
string text = "banana";
vector<bool> visited(text.size(), false);
for (int i = 0; i < text.size(); i++) {
if (visited[i]) continue;
int count = 1;
for (int j = i + 1; j < text.size(); j++) {
if (text[i] == text[j]) {
visited[j] = true;
count++;
}
}
cout << text[i] << " -> " << count << endl;
}
return 0;
}

/*
* Explanation:
* The variables `text`, and `visited` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int i = 0`, keeps running while `i < text.size()` is true, and updates using `i++`.
* `charAt(i)` lets the code inspect one character at a time by index.
* The condition `text[i] == text[j]` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
