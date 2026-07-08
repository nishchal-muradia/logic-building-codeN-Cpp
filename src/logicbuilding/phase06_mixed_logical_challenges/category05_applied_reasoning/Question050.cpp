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
// Question 50: : Print all palindromic words from a sentence.
string sentence = "madam and level are words";
vector<string> wordsList1;
stringstream wordStream1(sentence);
string currentWord1;
while (wordStream1 >> currentWord1) wordsList1.push_back(currentWord1);
for (auto word : wordsList1) if (isPalindromeString(word)) cout << word << endl;
return 0;
}

/*
* Explanation:
* The value stored in `sentence` is the input that the conditions or loops work on.
* The helper calculates the required result and returns it to the print statement.
* The loop goes word by word after splitting the sentence, so each word can be checked separately.
* `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
* The condition `isPalindromeString(word)` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
