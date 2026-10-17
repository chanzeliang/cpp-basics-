// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int qian = n / 1000;
//     int bai  = n / 100 % 10;
//     int shi  = n / 10 % 10;
//     int ge   = n % 10;
//     cout << qian + bai + shi + ge << endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << n/1000 + (n%1000)/100 + (n%100)/10 + n%10 << endl;
    return 0;

}