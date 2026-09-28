#include <ios>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x;
    cin >> x;
    cout << fixed << setprecision(3) << x << endl;//cout默认输出六位有效数字
    // fixed表示以小数形式输出，setprecision(3)表示保留三位小数
    }

// 64 位输出请用 printf("%lld")