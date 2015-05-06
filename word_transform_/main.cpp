#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <vector>

using namespace std;

void word_transform(ifstream &f1, ifstream &f2){
    // inital regular file
    map<string, string> mss;
    pair<string, string> pss;
    while(f1 >> pss.first >> pss.second){
        mss.insert(pss);
    }
    // to-be transformed file
    vector<string> vs;
    string s;
    while(f2 >> s){
        vs.push_back(s);
    }
}

int main(){
    ifstream f1("f1.txt"), f2("f2.txt");
    word_transform(f1, f2);

    return 0;
}
