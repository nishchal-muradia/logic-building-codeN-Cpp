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


string reverseString(string text) {
string builder = "";
for (int i = text.size() - 1; i >= 0; i--) builder += text[i];
return builder;
}

int main() {
// Question 13: : Reverse words in a string if their length is even.
string sentence = "code logic java";
vector<string> wordsList1;
stringstream wordStream1(sentence);
string currentWord1;
while (wordStream1 >> currentWord1) wordsList1.push_back(currentWord1);
for (auto word : wordsList1) {
if (word.size() % 2 == 0) cout << reverseString(word) << " ";
else cout << word << " ";
}
cout << endl;
return 0;
}

/*
* Explanation:
* The value stored in `sentence` is the input that the conditions or loops work on.
* The helper builds the answer from the last digit or last character toward the first one.
* The loop goes word by word after splitting the sentence, so each word can be checked separately.
* `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
* The condition `word.size() % 2 == 0` decides whether the current value matches the requirement.
* `System.out.println()` is used only to move to the next line after the pattern output is complete.
*/
