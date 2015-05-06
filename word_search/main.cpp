#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    vector<vector<char> > *board;
    string *word;
    bool **used;
private:
    bool isInboard(int i, int j)
    {
        if(i < 0)return false;
        if(i >= board->size())return false;
        if(j < 0)return false;
        if(j >= (*board)[i].size())return false;
        return true;
    }

    bool DFS(int si, int sj, int n)
    {
        if(n == word->size())return true;
        if(isInboard(si, sj))
        {
            if(!used[si][sj] && (*board)[si][sj] == (*word)[n])
            {
                used[si][sj] = true;
                bool ret = false;
                if(DFS(si+1, sj, n+1))
                    ret = true;
                else if(DFS(si-1, sj, n+1))
                    ret = true;
                else if(DFS(si, sj+1, n+1))
                    ret = true;
                else if(DFS(si, sj-1, n+1))
                    ret = true;
                used[si][sj] = false;
                return ret;
            }
        }
        return false;
    }

public:
    bool exist(vector<vector<char> > &board, string word) {
        if(board.size() == 0)return false;
        this->board = &board;
        this->word = &word;
        used = new bool*[board.size()];
        for(int i = 0; i < board.size(); i ++)
        {
            used[i] = new bool[board[i].size()];
            for(int j = 0; j < board[i].size(); j ++)
                used[i][j] = false;
        }
        for(int i = 0; i < board.size(); i ++)
            for(int j = 0; j < board[i].size(); j ++)
                if(DFS(i, j, 0))return true;
        return false;
    }
};


int main(){
    vector<vector<char>> vvc{{'a','b','c','d'},{'e','f','g','h'},{'i','j','k','l'},{'m','n','o','p'}};
    string str("bfgkjnop");
    Solution s;
    auto b = s.exist(vvc,str);
    cout << b << endl;
    return 0;

}
