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

string toText(const string& value) { return value; }
string toText(const char* value) { return string(value); }
string toText(char value) { return string(1, value); }
string toText(int value) { return to_string(value); }
string toText(long long value) { return to_string(value); }
string toText(double value) { return to_string(value); }
string toText(bool value) { return value ? "true" : "false"; }

string toUpper(string text) {
    for (char& ch : text) ch = (char)toupper((unsigned char)ch);
    return text;
}

string toLower(string text) {
    for (char& ch : text) ch = (char)tolower((unsigned char)ch);
    return text;
}

string trim(string text) {
    size_t start = text.find_first_not_of(" \t\n\r");
    if (start == string::npos) return "";
    size_t end = text.find_last_not_of(" \t\n\r");
    return text.substr(start, end - start + 1);
}
string removeSpaces(string text) {
    string cleaned;
    for (char ch : text) if (ch != ' ') cleaned += ch;
    return cleaned;
}

string removeSpacesToLower(string text) {
    string cleaned;
    for (char ch : text) if (ch != ' ') cleaned += (char)tolower((unsigned char)ch);
    return cleaned;
}

vector<string> splitWords(const string& text);

string normalizeSpaces(string text) {
    vector<string> words = splitWords(text);
    string result;
    for (size_t i = 0; i < words.size(); i++) {
        if (i > 0) result += " ";
        result += words[i];
    }
    return result;
}

vector<string> splitWords(const string& text) {
    vector<string> words;
    stringstream ss(text);
    string word;
    while (ss >> word) words.push_back(word);
    return words;
}


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
for (auto word : splitWords(sentence)) cout << word << " -> " << countVowels(word) << endl;
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
