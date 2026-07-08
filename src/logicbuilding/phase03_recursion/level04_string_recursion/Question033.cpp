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


bool isVowel(char ch) {
char lower = tolower(ch);
return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
}

int countVowelsRecursive(string text, int index) {
if (index == text.size()) return 0;
return (isVowel(text[index]) ? 1 : 0) + countVowelsRecursive(text, index + 1);
}

int main() {
// Question 33: : Count vowels in a string recursively.
string text = "recursion";
cout << "Vowels = " << countVowelsRecursive(text, 0) << endl;
return 0;
}

/*
* Explanation:
* The value stored in `text` is the input that the conditions or loops work on.
* The recursive return `(isVowel(text[index]) ? 1 : 0) + countVowelsRecursive(text, index + 1)` solves a smaller part first, then combines it with the current value.
* The recursive call `countVowelsRecursive(text, index + 1)` moves the work toward the base case by changing the argument each time.
* The calculated answer is printed after the logic produces the final value.
*/
