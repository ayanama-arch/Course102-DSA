#include <iostream>
#include <map>
using namespace std;

int main()
{
    // mpping of all the ASCII characters
    // hashing here done by map
    // time complexity is logN

    string str = "abac!babadmZ";

    map<char, int> mpp;
    for (int i = 0; i < str.size(); i++)
    {
        mpp[str[i]]++;
    }

    char a = 'a';
    char b = 'b';
    char c = 'c';
    char d = 'd';
    char e = 'e';
    cout << "frequency of a: " << mpp[a] << endl;
    cout << "frequency of b: " << mpp[b] << endl;
    cout << "frequency of c: " << mpp[c] << endl;
    cout << "frequency of d: " << mpp[d] << endl;
    cout << "frequency of e: " << mpp[e] << endl;
    cout << "frequency of !: " << mpp['!'] << endl;
    cout << "frequency of Z: " << mpp['Z'] << endl;
    cout << "frequency of P: " << mpp['P'] << endl;
}