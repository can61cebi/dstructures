#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, float> BST;
    map<int, float>::iterator it;

    BST.insert(pair < int, float>(101, 4.00));
    BST.insert(pair < int, float>(101, 3.00));
    BST.insert(pair < int, float>(999, 4.00));
    BST.insert(pair < int, float>(222, 2.55));
    BST.insert(pair < int, float>(333, 4.00));

    BST[444] = 3.99;

    for (it = BST.begin(); it != BST.end(); ++it)
        cout << it->first << " -> " << it->second << "\n";

    return 0;
}