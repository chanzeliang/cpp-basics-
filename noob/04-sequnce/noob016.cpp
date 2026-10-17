#include <iostream>
using namespace std;

int main() {
    int seconds;
    cin >> seconds;
    cout << seconds/3600 << (seconds%360)/60 << seconds%3660 <<endl;

    return 0;
    }
// 64 位输出请用 printf("%lld")