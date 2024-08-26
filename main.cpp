#include <cassert>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

vector<string> businesses;

void addbusiness(string name) {
    businesses.push_back(name);
    sort(businesses.begin(), businesses.end());
} 

void convo(){
    bool run = true;
    char reply;
    string name;
    cout << "Welcome to the Business Sorting Program!";
    while (run) {
        name = "";
        reply = ' ';
        cout << "\nWould you like to add a business? y/n\n";
        cin >> reply;
        if (reply != 'y') {
            run = false;
            break;
        }
        cout <<"\nWhat is the business's name?\n";
        cin >> name;
        addbusiness(name);
        cout << "\n";
        for (int i = 0; i < businesses.size(); i++) {
            cout << "\n" << businesses[i];
        }
        cout << "\n";
    }
    cout << "\nThank you for using the Business Sorting Program!";
}

int main() {
    convo();
}