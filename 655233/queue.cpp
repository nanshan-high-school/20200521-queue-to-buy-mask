#include <iostream>
#include <queue>
using namespace std;

int main(){
    int mask;
    cout << "有幾片口罩?";
    cin >> mask;

    queue<string> people;
    cout << "請輸入要領口罩的人\n";
    cout << "若要停止 輸入stop\n";
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

    cout << "有"<< temp << "個人沒拿到\n";
    for (int i = 0; i < temp; i++) {
        cout << people.front() << endl;
        people.pop();
    }
}
