// set::insert (C++98)
#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> BST;
    set<int>::iterator it;
    set<int>::iterator kopek;

    BST.insert(55);
    BST.insert(33);
    BST.insert(99);
    BST.insert(1);
    BST.insert(5);
    int A[] = { 9,10,11,12,13 };
    BST.insert(A, A + 5);

    BST.erase(99);

    cout << "BST contains " << BST.size() << " elements: ";
    for (it = BST.begin(); it != BST.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';

    kopek = it = it = BST.begin();
    it = BST.find(10);
    kopek = BST.find(13);
    kopek++;

    BST.erase(it, kopek);

    cout << "BST contains " << BST.size() << " elements: ";
    for (it = BST.begin(); it != BST.end(); ++it)
        cout << ' ' << *it;
    cout << '\n';


    return 0;
}
