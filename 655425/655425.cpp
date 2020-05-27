#include <iostream>
#include <queue>
using namespace std;

int main() {
    string tmpName;
    queue<string> name;
    int subject = 0;
    int amount = 0;
    int mask = 0;
    while (true){
        cout << "請輸入分類:" << "\n";
        cin >> subject;
        if (subject == 1){
            cout << "請輸入人名:" << "\n";
            cin >> tmpName;
            name.push(tmpName);
        }
        else if (subject == 0){
            cout << "請輸入進貨口罩數量:" << "\n";
            cin >> amount;
            mask += amount;
        }
        else {
            break;
        }
    }

    int package = mask / 9;
    mask -= package * 9;
    for (int i = 0; i < name.size(); i++){
        if (package != 0){
            name.pop();
            package -= 1;
        }
        else {
            cout << "沒有口罩了";
            break;
        }
    }

    for (int i = 0; i < name.size(); i ++){
        cout << "剩下的可憐人有:" << name.front() << "\n";
        name.pop();
    }
    cout << "剩下的口罩:" << mask << "\n";
}