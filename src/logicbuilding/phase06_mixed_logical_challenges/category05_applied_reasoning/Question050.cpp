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


bool isPalindromeString(string text) {
string cleaned = removeSpacesToLower(text);
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
for (auto word : splitWords(sentence)) if (isPalindromeString(word)) cout << word << endl;
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
