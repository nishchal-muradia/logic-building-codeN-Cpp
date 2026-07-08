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
// Question 29: : Reverse only characters, keeping digits in place.
string text = "a1b2c3";
vector<char> chars(text.begin(), text.end());
int left = 0, right = chars.size() - 1;
while (left < right) {
if (isdigit(chars[left])) left++;
else if (isdigit(chars[right])) right--;
else {
char temp = chars[left];
chars[left] = chars[right];
chars[right] = temp;
left++;
right--;
}
}
cout << string(chars.begin(), chars.end()) << endl;
return 0;
}

/*
* Explanation:
* The variables `text`, `left`, `temp`, and `chars` hold the values that the logic checks, counts, or transforms.
* The `while` or `do-while` loop keeps repeating until the changing value reaches the stopping condition.
* The if/else checks test the important cases in order: `isdigit(chars[left])`, `isdigit(chars[right])`.
* Only the branch whose condition becomes true prints its message.
*/
