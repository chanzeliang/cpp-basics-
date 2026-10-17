#include <iostream>
using namespace std;

int main() {
    int seconds;
    cin >> seconds;
    cout << seconds/3600 << " " << (seconds%3600)/60 << " " << seconds%60 << endl;

    return 0;
    }
// 64 位输出请用 printf("%lld")