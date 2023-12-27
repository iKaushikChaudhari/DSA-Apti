#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {2, 0, 1, 2, 1, 0,0,1,2};

    int zero = 0, one = 0, two = 0;

    // Count occurrences of 0s, 1s, and 2s
    for (int num : arr) {
        if (num == 0) {
            zero++;
        } else if (num == 1) {
            one++;
        } else if (num == 2) {
            two++;
        }
    }

    // Create a new vector with the sorted values
    vector<int> sortedArray(zero, 0);
    sortedArray.insert(sortedArray.end(), one, 1);
    sortedArray.insert(sortedArray.end(), two, 2);

    cout << "Sorted array: ";
    for (int num : sortedArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}