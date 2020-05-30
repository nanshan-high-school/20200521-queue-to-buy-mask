#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> name;
    int mask;
    cout << "口罩數量：";
    cin >> mask;
    cout << "請輸入名字（輸入end 表結束）：\n";
    do {
        string now;
        cin >> now;
        name.push(now);
    } while (name.back() != "end");

    int times = 0;
    for (int i = 0; i < name.size() - 1; i++) {
        if (mask >= 9) {
            mask -= 9;
        } else {
            times = i;
            break;
        }
    }

    cout << "取得名單：\n" ;
    for (int i = 0; i < times; i++) {
        cout << name.front() << "\n";
        name.pop();
    }

    cout << "未取得名單：\n";
    for (int i = 0; i < name.size(); i++) {
        cout << name.front() << "\n";
        name.pop();
    }
}