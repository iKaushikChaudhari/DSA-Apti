#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


int main() {
    vector<std::string> strings = {"abc", "go", "by", "good", "and", "send", "good", "by"};

    // Count occurrences using unordered_map
    unordered_map<string, int> stringCount;

    for (const auto& str : strings) {
        if (stringCount.find(str) != stringCount.end()) {
            stringCount[str]++;
        } else {
            stringCount[str] = 1;
        }
    }

    // Print key-value pairs
    cout << "Key-Value Pairs:" << endl;
    for (const auto& entry : stringCount) {
        cout << entry.first << ": " << entry.second << endl;
    }

    // Print the count of each string
    cout << "\nString Counts:" << endl;
    for (const auto& entry : stringCount) {
        cout << entry.first << " appears " << entry.second << " times." << endl;
    }

    return 0;
}