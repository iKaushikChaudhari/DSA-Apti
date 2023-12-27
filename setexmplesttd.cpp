// C++ program to demonstrate the creation of descending
// order set container
#include <iostream>
#include <set>
using namespace std;

int main()
{

	set<int> s1;
	s1.insert(1);
	s1.insert(5);
	s1.insert(3);
	s1.insert(4);

	for (auto i : s1) {
		cout << i << ' ';
	}
	return 0;
}
