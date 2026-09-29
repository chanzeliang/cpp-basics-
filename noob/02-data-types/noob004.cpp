#include <iostream>
using namespace std;

int main() {
    string n;
    // cin >> n ;>> 只会读取一个“单词”遇到空格、Tab、回车就停止
    getline(cin, n); // 使用 getline 读取整行输入
    cout << n << endl;
    return 0;
    }
