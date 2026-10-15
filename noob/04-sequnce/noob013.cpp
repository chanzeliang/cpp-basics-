#include <iostream>
using namespace std;

double K;
double C;
double F;
int main() {
   cin >> K ;
   C = (K - 273.15);
   F = (C * 1.8) + 32;
   cout << F << endl;   
    return 0;
}