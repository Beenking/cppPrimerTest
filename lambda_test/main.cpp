#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

void elimDumps(vector<string> &vi){
    sort(vi.begin(), vi.end());
    auto end_unique = unique(vi.begin(), vi.end());
    vi.erase(end_unique, vi.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz){
    elimDumps(words);
    stable_sort(words.begin(), words.end(),
                [](const string &a, const string &b)
                {return a.size() < b.size();});
    auto wc = find_if(words.begin(), words.end(),
                      [sz](const string &s){return s.size() >= sz;});
    auto count = words.end() - wc;
    cout << count << " " << (count > 1 ? "words":"word") << " of length " << sz << " or longer " << endl;
    for_each(wc, words.end(),
             [](const string &s){cout << s << " ";});
    cout << endl;
}

int main(){
    vector<string> vs = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    biggies(vs,6);
}
