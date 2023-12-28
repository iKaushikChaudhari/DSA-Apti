#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<int,int>m1;
    m1.insert(make_pair(1,1));
    m1.insert(make_pair(2,1));
    m1[3]=1;
  for (auto i : m1) {
      cout << i.first << " " <<  
            i.second << endl; 
  }

}