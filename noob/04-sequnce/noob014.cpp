#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {

    int x1, x2, y1, y2;
    cin >> x1 >> y1;
    cin>> x2 >> y2;
    double dE=sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    double dM=abs(x1 - x2) + abs(y1 - y2);
    double det=fabs(dE-dM);
    cout << fixed << setprecision(4) << det << endl;
    return 0;
}
// 64 位输出请用 printf("%lld")