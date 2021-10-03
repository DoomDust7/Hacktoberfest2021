#include <bits/stdc++.h>
using namespace std;
 
// Find all subsequences
void printSubsequence(string input, string output)
{
    // Base Case
    if (input.empty()) {
        cout << output << endl;
        return;
    }
 
    // output is passed with including
    // the Ist character of
    // Input string
    printSubsequence(input.substr(1), output + input[0]);
 
    // output is passed without
    // including the Ist character
    // of Input string
    printSubsequence(input.substr(1), output);
}
 
// Driver code
int main()
{
    // output is set to null before passing in as a
    // parameter
    string output = "";
    string input = "hacktober";
 
    printSubsequence(input, output);
 
    return 0;
}
