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


int main() {
// Question 42: : Take age inputs and count how many are adults, minors, seniors.
vector<int> ages = {12, 18, 35, 61, 8, 75};
int minors = 0;
int adults = 0;
int seniors = 0;

for (auto age : ages) {
if (age < 18) {
minors++;
} else if (age >= 60) {
seniors++;
} else {
adults++;
}
}

cout << "Minors = " << minors << endl;
cout << "Adults = " << adults << endl;
cout << "Seniors = " << seniors << endl;
return 0;
}

/*
* Explanation:
* The variables `minors`, `adults`, `seniors`, and `ages` hold the values that the logic checks, counts, or transforms.
* The `for` loop starts with `int age : ages) { if (age < 18) { minors++`, keeps running while `} else if (age >= 60) { seniors++` is true, and updates using `} else { adults++; } } System.out.println("Minors = " + minors`.
* The if/else checks test the important cases in order: `age < 18`, `age >= 60`.
* The print statement shows each value as soon as that value is calculated inside the loop.
*/
