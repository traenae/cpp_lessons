#include <iostream>
#include <string>
using namespace std;

void start_day() {
    bool day;
    string c_day;
    cout << "Hello, this is a good day? (t/f)";
    cin >> c_day;
    
    if (tolower(c_day[0]) == 'y' || tolower(c_day[0]) == 't') {
        day = true;
    } else if (tolower(c_day[0]) == 'n' || tolower(c_day[0]) == 'f') {
        day = false;
    } else {
        cout << "not good at typing, huh?";
    }
    if (day) {
        cout << "May sunshine, lollipops, and roses shower upon you!\n";
    } 
    else if (!day) {
        cout << "May blue rivers wash the tears away!\n";
    } 
}
int main() {
    string response;
    string difficulty;
    int e_num;
    int m_num;
    int h_num;


    start_day();

    cout << "Do you want to play a game? (y/n): ";
    cin >> response;

    cout << "You entered: " << response << "\n.";
    if (tolower(response[0]) == 'y') {
        cout << "Let's play a game, then ...\n";\
        cout << " What difficulty? easy/medium/hard): \n";
        cin >> difficulty;
        if (tolower(difficulty[0]) == 'e') {
            cout << "Question: 2+2 or 2*2 or 2-2.\n";
            cin >> e_num;
            if (e_num == 4 || e_num == 0) {
                cout << "Elemtary, dear player.\n";
            } else {
                cout << "Wrong!\n";
            }
        }else if (tolower(difficulty[0]) == 'm') {
            cout << "Question: 15+15 or 15*15 or 15-25\n";
            cin >> m_num;
            if (m_num == 30 || m_num == 225 || m_num == -10) {
                cout << "Walking in the middle of the road is dangerous, but there is no traffic.\n";
            } else {
                cout << "Calculator, please!\n";
            }
        }else if (tolower(difficulty[0]) == 'h') {
            cout << "Question: What is the answer to 'the life, the universe, and everything' or what is base 10 for 101010?\n";
            cin >> h_num;
            if (h_num == 42) {
                cout << "Congrats, you are a geek!\n";
            } else {
            cout << "There is a rock on the otherside heading toward you.\n";
            }
        } else {
            cout << "Please read the instructions.\n";
        }
    } else if (tolower(response[0]) == 'n') {
        cout << "Goodbye!\n";
    } else {
        cout << "Please type y or n!\n";
    }
    

    return 0;
}