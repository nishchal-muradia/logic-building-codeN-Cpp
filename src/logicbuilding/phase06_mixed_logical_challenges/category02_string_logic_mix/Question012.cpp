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

int countVowels(string text) {
int count = 0;
for (int i = 0; i < text.size(); i++) {
if (isVowel(text[i])) count++;
}
return count;
}

int main() {
// Question 12: : Count vowels in each word of a sentence.
string sentence = "logic building";
vector<string> wordsList1;
stringstream wordStream1(sentence);
string currentWord1;
while (wordStream1 >> currentWord1) wordsList1.push_back(currentWord1);
for (auto word : wordsList1) cout << word << " -> " << countVowels(word) << endl;
return 0;
}

/*
* Explanation:
* The value stored in `sentence` is the input that the conditions or loops work on.
* The helper checks characters against `a`, `e`, `i`, `o`, and `u`, so the main loop only needs to use that true/false result.
* The loop goes word by word after splitting the sentence, so each word can be checked separately.
* `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
