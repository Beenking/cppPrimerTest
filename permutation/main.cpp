#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int> > permute(vector<int> &num)
    {
        sort(num.begin(), num.end());

        vector<vector<int> > vvi({num});
        while(next_permutation(num.begin(), num.end()))
            vvi.push_back(num);

        return vvi;
    }
};

int main(){
    Solution s;
    vector<int> vi{1,2,3,4};
    auto vvi = s.permute(vi);
    for(auto vi :vvi){
        for(int i: vi){
            cout << i;
        }
        cout << endl;
    }
}
