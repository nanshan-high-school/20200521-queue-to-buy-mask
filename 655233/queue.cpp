#include <iostream>
#include <queue>
using namespace std;

int main(){
    int mask;
    cout << "���X���f�n?";
    cin >> mask;

    queue<string> people;
    cout << "�п�J�n��f�n���H\n";
    cout << "�Y�n���� ��Jstop\n";
    do {
        string input;
        cin >> input;
        people.push(input);
    } while (people.back() != "stop");

    int temp;
    temp = people.size() - 1;
    
    while (true) {
        if (mask < 9 || temp <= 0) {
            break;
        } else {
            mask -= 9;
            temp--;
        }
        people.pop();
    }

    cout << "��"<< temp << "�ӤH�S����\n";
    for (int i = 0; i < temp; i++) {
        cout << people.front() << endl;
        people.pop();
    }
}
