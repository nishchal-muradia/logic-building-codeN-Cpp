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

int main() {
// Question 19: : Print how many words start with a vowel in a sentence.
string sentence = "apple code is easy";
int count = 0;
vector<string> wordsList1;
stringstream wordStream1(sentence);
string currentWord1;
while (wordStream1 >> currentWord1) wordsList1.push_back(currentWord1);
for (auto word : wordsList1) if (!word.empty() && isVowel(word[0])) count++;
cout << "Count = " << count << endl;
return 0;
}

/*
* Explanation:
* The value stored in `sentence` is the input that the conditions or loops work on.
* The helper checks characters against `a`, `e`, `i`, `o`, and `u`, so the main loop only needs to use that true/false result.
* The loop goes word by word after splitting the sentence, so each word can be checked separately.
* The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
* `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
* The condition `!word.empty() && isVowel(word[0])` decides whether the current value matches the requirement.
*/
