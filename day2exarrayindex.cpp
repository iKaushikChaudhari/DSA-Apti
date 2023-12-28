#include <iostream>
#include <unordered_map>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    vector<string> strings = {"5","2","3","5","9","7","5","3","2","1"};

    // Count occurrences and store indices using unordered_map
    unordered_map<string, int> stringCount;
    unordered_map<string, unordered_set<int>> stringIndices;

    for (int i = 0; i < strings.size(); ++i) {
        const string& str = strings[i];

        // Update counts
        auto it = stringCount.find(str);
        if (it != stringCount.end()) {
            it->second++;
        } else {
            stringCount[str] = 1;
        }

        // Update indices
        stringIndices[str].insert(i);
    }

    // Print key-value pairs
    cout << "Key-Value Pairs:" << endl;
    for (const auto& entry : stringCount) {
        cout << entry.first << ": " << entry.second << endl;

        // Print indices if the string appears more than once
        if (entry.second > 1) {
            cout << "Indices: ";
            for (const auto& index : stringIndices[entry.first]) {
                cout << index << " ";
            }
            cout << endl;
        }
    }

    return 0;
}