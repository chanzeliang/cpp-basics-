#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    cin.ignore();// cin.ignore()用于清除缓冲区中的换行符\n，避免影响后续的输入
    getline(cin, n);
    cout << n << endl;
    return 0;
}
// cin >> n ;>> 只会读取一个“单词”遇到空格、Tab、回车就停止
// getline(cin, n);  使用 getline 读取整行输入