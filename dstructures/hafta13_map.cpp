#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> MAP;

    // first insert function version (single parameter):
    MAP.insert(pair<char, int>('a', 100));
    MAP.insert(pair<char, int>('z', 200));

    pair<map<char, int>::iterator, bool> ret;
    ret = MAP.insert(pair<char, int>('z', 500));
    if (ret.second == false) {
        cout << "element 'z' already existed";
        cout << " with a value of " << ret.first->second << '\n';
    }

    // second insert function version (with hint position):
    map<char, int>::iterator it = MAP.begin();
    MAP.insert(it, pair<char, int>('b', 300));  // max efficiency inserting
    MAP.insert(it, pair<char, int>('c', 400));  // no max efficiency inserting

    // third insert function version (r