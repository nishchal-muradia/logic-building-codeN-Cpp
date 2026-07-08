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
// Question 20: : Count how many words end with 's'.
string sentence = "cats run across roads";
int count = 0;
vector<string> wordsList1;
stringstream wordStream1(sentence);
string currentWord1;
while (wordStream1 >> currentWord1) wordsList1.push_back(currentWord1);
for (auto word : wordsList1) if ((word.size() >= string("s").size() && word.compare(word.size() - string("s").size(), string("s").size(), "s") == 0)) count++;
cout << "Count = " << count << endl;
return 0;
}

/*
* Explanation:
* The value stored in `sentence` is the input that the conditions or loops work on.
* The loop goes word by word after splitting the sentence, so each word can be checked separately.
* The variable `count` starts at 0 and increases only when the current item satisfies the question's condition.
* `split("\\s+")` breaks the sentence wherever spaces appear, giving us separate words to process.
* The condition `(word.size() >= string("s").size() && word.compare(word.size() - string("s").size(), string("s").size(), "s") == 0)` decides whether the current value matches the requirement.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
