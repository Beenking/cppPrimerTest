#include <iostream>
#include <queue>
#include <string>
#include <unordered_set>

using namespace std;

class Solution {
    public:
        int ladderLength(string start, string end, unordered_set<string> &dict) {
            return BFS(start,end,dict);
        }
    private:
        int BFS(string start,string end,unordered_set<string> &dict){
            // 存放单词和单词所在层次
            queue<pair<string,int> > q;
            q.push(make_pair(start,1));
            unordered_set<string> visited;
            visited.insert(start);
            // 广搜
            bool found = false;
            while(!q.empty()){
                pair<string,int> cur = q.front();
                q.pop();
                string word = cur.first;
                int len = word.size();
                // 变换一位字符
                for(int i = 0;i < len;++i){
                    string newWord(word);
                    for(int j = 0;j < 26;++j){
                        newWord[i] = 'a' + j;
                        if(newWord == end){
                            found = true;
                            return cur.second+1;
                        }//if
                        // 判断是否在字典中并且是否已经访问过
                        if(dict.count(newWord) > 0 && visited.count(newWord) == 0){
                            visited.insert(newWord);
                            q.push(make_pair(newWord,cur.second+1));
                        }//if
                    }//for
                }//for
            }//while
            if(!found){
                return 0;
            }//if
        }
    };


int main(){
    string start = "hit";
    string end = "cog";
    unordered_set<string> dict = {"hot","dot","dog","lot","log"};
    Solution s;
    auto result = s.ladderLength(start, end, dict);
    cout << result << endl;

    return 0;
}

























