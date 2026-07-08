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
// Question 43: : Find the longest word in a sentence.
string sentence = "logic building practice";
string best = "";
vector<string> wordsList1;
stringstream wordStream1(sentence);
string currentWord1;
while (wordStream1 >> currentWord1) wordsList1.push_back(currentWord1);
for (auto word : wordsList1) {
if (word.size() > best.size()) best = word;
}
cout << best << endl;
return 0;
}

/*
* Explanation:
* The variables `sentence`, and `best` hold the values that the logic checks, counts, or transforms.
* The loop goes word by word after splitting the sentence, so each word can be checked separately.
* `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
* The condition `word.size() > best.size()` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
