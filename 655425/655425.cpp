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
        cout << "�п�J����:" << "\n";
        cin >> subject;
        if (subject == 1){
            cout << "�п�J�H�W:" << "\n";
            cin >> tmpName;
            name.push(tmpName);
        }
        else if (subject == 0){
            cout << "�п�J�i�f�f�n�ƶq:" << "\n";
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
            cout << "�S���f�n�F";
            break;
        }
    }

    for (int i = 0; i < name.size(); i ++){
        cout << "�ѤU���i���H��:" << name.front() << "\n";
        name.pop();
    }
    cout << "�ѤU���f�n:" << mask << "\n";
}