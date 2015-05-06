#include <unordered_map>
#include <iostream>
#include <string>

using namespace std;

int main(){
    unordered_map<string, size_t> word_count;
    string word;
    while (cin >> word){
        ++word_count[word];
    }
    for (const auto &s : word_count){
        cout << s.first << " occurs " << s.second << (s.second > 1 ? " times" : " time") << endl;
    }
    cout << word_count.bucket_count() << endl
            << word_count.bucket("is") << endl
               << word_count.max_bucket_count() << endl;

    return 0;
}
