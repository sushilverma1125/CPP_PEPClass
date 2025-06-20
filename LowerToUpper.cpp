#include <iostream>
using namespace std;

char LowerToUpper(char c) {
    if(c >= 'a' && c <= 'z') {
        c -= 32;
    }
    return c;
}

int main()
{
 
    char c = 'c';
    cout << LowerToUpper(c);

    return 0;
}