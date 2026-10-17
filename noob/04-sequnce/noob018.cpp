#include <iostream>
using namespace std;

int main() {
    int a, b,c;
    while (cin >> a >> b >>c) { // 注意 while 处理多个 case
        cout << 2*(a*b+b*c+c*a) << endl;
        cout << a*b*c << endl;
    }
}
// 64 位输出请用 printf("%lld")