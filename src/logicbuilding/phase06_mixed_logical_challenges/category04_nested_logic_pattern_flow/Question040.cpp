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


void printArray(vector<int> values) {
for (auto value : values) cout << value << " ";
cout << endl;
}

int main() {
// Question 40: : Print numbers in a spiral-like pattern (conceptual dry run).
int n = 3;
vector<vector<int>> matrix(n, vector<int>(n));
int value = 1, top = 0, bottom = n - 1, left = 0, right = n - 1;
while (top <= bottom && left <= right) {
for (int col = left; col <= right; col++) matrix[top][col] = value++;
top++;
for (int row = top; row <= bottom; row++) matrix[row][right] = value++;
right--;
for (int col = right; col >= left; col--) matrix[bottom][col] = value++;
bottom--;
for (int row = bottom; row >= top; row--) matrix[row][left] = value++;
left++;
}
for (vector<int> row : matrix) printArray(row);
return 0;
}

/*
* Explanation:
* The value stored in `n` is the input that the conditions or loops work on.
* The helper calculates the required result and returns it to the print statement.
* The outer loop controls each row of the pattern, and the inner loop controls what gets printed inside that row.
* The `while` or `do-while` loop keeps repeating until the changing value reaches the stopping condition.
*/
