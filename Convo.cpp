#include <vector>
#include <cassert>
#include <iostream>
#include <algorithm>
#include "Convo.hpp"
using namespace std;

vector<string> businesses;
vector<string> correct;

vector<string> Convo::addbusiness(string name) {
    businesses.push_back(name);
    sort(businesses.begin(), businesses.end());
    return businesses;
}

Convo::Convo(bool testing){
    if (!testing) {
        businesses.clear();
        bool run = true;
        char reply;
        string name;
        cout << "\nWelcome to the Business Sorting Program!";
        while (run) {
            name = "";
            reply = ' ';
            cout << "\nWould you like to add a business? y/n \n";
            cin >> reply;
            if (reply != 'y') {
                run = false;
                break;
            }
            cout <<"\nWhat is the business's name?\n";
            cin >> name;
            addbusiness(name);
            cout << "\nSorted Buisinesses";
            for (unsigned i = 0; i < businesses.size(); i++) {
                cout << "\n" << businesses[i];
            }
            cout << "\n";
        }
        cout << "\nThank you for using the Business Sorting Program!";
    }
    if (testing) {
        addbusiness("testing");
        addbusiness("");
        addbusiness("Apple");
        addbusiness("Toei");
        addbusiness("e");
        addbusiness("Intel");
        addbusiness("AMD");
        addbusiness("Dell");
        addbusiness("HP");
        addbusiness("Microsoft");

        correct.push_back("");
        correct.push_back("AMD");
        correct.push_back("Apple");
        correct.push_back("Dell");
        correct.push_back("HP");
        correct.push_back("Intel");
        correct.push_back("Microsoft");
        correct.push_back("Toei");
        correct.push_back("e");
        correct.push_back("testing");
        assert(businesses == correct);
        cout << "tested";
    }
}
