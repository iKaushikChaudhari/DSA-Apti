#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int>s1={2,9,12,15,19};
	set<int>s2={5,7,9,11,13,15};
    s1.merge(s2);
	for (int i : s1) {
		cout << i << ' ';
	}
	return 0;
}
