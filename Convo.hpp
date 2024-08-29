#include <vector>
#include <iostream>
using namespace std;

class Convo {

    public:
        explicit Convo(bool testing);
        vector<string> businesses;
        vector<string> correct;
        vector<string> addbusiness(string name);


};
