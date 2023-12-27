#include<bits/stdc++.h> 
using namespace std; 
  
// function to print string in sorted order and count occurrences of each character
void sortString(string &str) 
{ 
    // Sort the string
    sort(str.begin(), str.end()); 
    
    // Iterate through the sorted string and count occurrences
    int n = str.length();
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            cout << str[i - 1] << ": " << count << endl;
            count = 1;
        }
    }

    // Print the last character and its count
    cout << str[n - 1] << ": " << count << endl;
} 
 
// Driver program to test above function 
int main() 
{ 
    string s1 = "bbcbdhbkazzaaallkjjd";  
    sortString(s1);  
    return 0; 
}