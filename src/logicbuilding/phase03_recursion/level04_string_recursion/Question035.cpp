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


string replaceCharRecursive(string text, int index, char oldChar, char newChar) {
if (index == text.size()) return "";
char ch = text[index] == oldChar ? newChar : text[index];
return ch + replaceCharRecursive(text, index + 1, oldChar, newChar);
}

int main() {
// Question 35: : Replace all occurrences of a character (say 'a' -> 'x') recursively.
string text = "banana";
cout << replaceCharRecursive(text, 0, 'a', 'x') << endl;
return 0;
}

/*
* Explanation:
* The value stored in `text` is the input that the conditions or loops work on.
* The recursive return `ch + replaceCharRecursive(text, index + 1, oldChar, newChar)` solves a smaller part first, then combines it with the current value.
* The recursive call `replaceCharRecursive(text, index + 1, oldChar, newChar)` moves the work toward the base case by changing the argument each time.
* The calculated answer is printed after the logic produces the final value.
*/
