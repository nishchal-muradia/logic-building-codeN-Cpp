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


bool isPalindromeString(string text) {
string cleaned = "";
for (char ch : text) if (ch != ' ') cleaned += (char)tolower((unsigned char)ch);
int left = 0;
int right = cleaned.size() - 1;
while (left < right) {
if (cleaned[left] != cleaned[right]) return false;
left++;
right--;
}
return true;
}

int main() {
// Question 24: : Check whether a string is a palindrome.
string text = "level";
cout << (isPalindromeString(text) ? "Palindrome" : "Not palindrome") << endl;
return 0;
}

/*
* Explanation:
* The value stored in `text` is the input that the conditions or loops work on.
* The helper compares the original value with its reversed form, because a palindrome reads the same both ways.
* The calculated answer is printed after the logic produces the final value.
*/
