#include <iostream>
using namespace std;

int main()
{
    // Hashing of all the ASCII characters
    string str = "abac!babadmZ";

    int hash[256] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i]]++;
    }

    char a = 'a';
    char b = 'b';
    char c = 'c';
    char d = 'd';
    char e = 'e';
    cout << "frequency of a: " << hash[a] << endl;
    cout << "frequency of b: " << hash[b] << endl;
    cout << "frequency of c: " << hash[c] << endl;
    cout << "frequency of d: " << hash[d] << endl;
    cout << "frequency of e: " << hash[e] << endl;
    cout << "frequency of !: " << hash['!'] << endl;
    cout << "frequency of Z: " << hash['Z'] << endl;
    cout << "frequency of P: " << hash['P'] << endl;
}