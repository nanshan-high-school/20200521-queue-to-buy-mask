#include <iostream>
#include <queue>
using namespace std;

int main() {
    bool close = false;
    int mask;
    queue <string> name;

    cout << "輸入口罩數量";
    cin >> mask;

    do {
        string namenow;

        cout << "輸入名字";
        cin >> namenow;

        name.push(namenow);

        cout << "cin (1：continue , 0：end ？) "; 
        cin >> close; 

    } while (close == true);

    cout << "已經領取" << endl;

    for (int i = 0; mask > i; i++) {
        cout << name.front() << endl;
        name.pop();
    }
    
    cout <<"未領取" << endl;

    do {
        cout << name.front() << endl;
        name.pop();
    } while (name.size() > 0);

}
