#include <iostream>
#include <queue>
using namespace std;

int main() {
    int people;
    cin >> people;
    
    queue<string> names;
    string name;
    for (int i = 0; i < people; i++) {
        cin >> name;
        names.push(name);
    }
    
    int mask;
    cin >> mask;

    while (true) {
        if (mask < 9 || people <= 0) {
            break;
        } else {
            mask -= 9;
            people--;
        }
        names.pop();
    }

    cout << people << "\n";
    for (int i = 0; i < people; i++) {
        cout << names.front() << "\n";
        names.pop();
    }
    cout << mask;
}