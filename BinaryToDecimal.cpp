#include <iostream>
using namespace std;

// Binary to Decimal
int BinaryToDecimal(int n) {
    int base = 1;
    int ans = 0;
    while(n > 0) {
        int rem = n % 10;
        
        ans = ans + (base*rem);
        
        base = base * 2;
        
        n /= 10;
    }
    return ans;
}

int main()
{
    int n = 110;
    cout << BinaryToDecimal(n);

    return 0;
}