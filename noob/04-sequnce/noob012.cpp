#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << n % 10<< n / 10 % 10<< n / 100 % 10<< n / 1000 << endl;

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string num="abcd";
//     cin>>num;
//     cout<<num[3]<<num[2]<<num[1]<<num[0]<<endl;
// }