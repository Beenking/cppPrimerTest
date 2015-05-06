#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int findMetheds_aNum(int N){
    int S = N*(N+1)/2;
    int result = S*S*S;
    for(int i=1;i<=N;++i){
        result-=3*i*i*(S-i);
    }
    return result;
}

vector<int> findMetheds_seriesNum(vector<int> vN){
    vector<int> results;
    for(auto i : vN){
        results.push_back(findMetheds_aNum(i));
    }
    return results;
}

int main(){
    int T;
    int mod = pow(10,9)+7;
    cin >> T;
    vector<int> vn;
    int temp;
    for(int i=0; i<T; ++i){
        cin >> temp;
        vn.push_back(temp);
    }
    vector<int> results = findMetheds_seriesNum(vn);
    for(int i=0; i<T; ++i){
        cout << "Case " << i+1 << ": " << results[i] % mod << endl;
    }
}
