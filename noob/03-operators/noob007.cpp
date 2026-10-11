#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int c, d;
    cin >> c >> d;
    double rate = (double)d / c * 100.0;
    cout << fixed << setprecision(4) << rate << "%" << endl;
    return 0;
}