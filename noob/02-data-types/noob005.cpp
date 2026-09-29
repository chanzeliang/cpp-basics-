#include <ios>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long long b;
    double c;
    char d;
    string e;
    cin>> a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    cout<<a <<endl;
    cout<< b<<endl;
    cout<<fixed << setprecision(1) << c<<endl;
    cout<< d<<endl;
    cout<< e<<endl;

return 0;
    }

// 64 位输出请用 printf("%lld")