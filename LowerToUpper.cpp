#include <iostream>
using namespace std;

char LowerToUpper(char c) {
    if(c >= 'a' && c <= 'z') {
        c -= 32;
    }
    return c;
}

char convert(char ch) {
    return ch - 'A' + 'a';
}

int main()
{
 
    char c = 'c';
    cout << LowerToUpper(c);

    char ch;
    cin >> ch;
    cout << convert(ch);

    return 0;
}