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
// Question 46: : Print all words that start and end with the same letter.
string sentence = "area code civic";
vector<string> wordsList1;
stringstream wordStream1(sentence);
string currentWord1;
while (wordStream1 >> currentWord1) wordsList1.push_back(currentWord1);
for (auto word : wordsList1) {
if (word[0] == word[word.size() - 1]) cout << word << endl;
}
return 0;
}

/*
* Explanation:
* The value stored in `sentence` is the input that the conditions or loops work on.
* The loop goes word by word after splitting the sentence, so each word can be checked separately.
* `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
* The condition `word[0] == word[word.size() - 1]` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
