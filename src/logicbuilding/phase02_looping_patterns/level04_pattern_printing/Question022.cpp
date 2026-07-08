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
// Question 22: Print an expanding and shrinking star pattern.
vector<int> starCounts = {1, 2, 4, 5, 4, 3, 2, 1};

for (auto stars : starCounts) {
for (int count = 1; count <= stars; count++) {
cout << "*";
}
cout << endl;
}
return 0;
}

/*
* Explanation:
* The outer loop controls the rows of the pattern.
* Inner loops print the required spaces, stars, numbers, or letters for each row.
* After each row is complete, System.out.println() moves the output to the next line.
*/
