#include <iostream>
using namespace std;

int main()
{
    // Hashing of small charachters of alphabets
    string str = "abacbabadm";

    int hash[26] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i] - 'a']++;
    }

    char a = 'a';
    char b = 'b';
    char c = 'c';
    char d = 'd';
    char e = 'e';
    cout << "frequency of a: " << hash[a - 'a'] << endl;
    cout << "frequency of b: " << hash[b - 'a'] << endl;
    cout << "frequency of c: " << hash[c - 'a'] << endl;
    cout << "frequency of d: " << hash[d - 'a'] << endl;
    cout << "frequency of e: " << hash[e - 'a'] << endl;
}