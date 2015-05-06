#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(int nums[], int n, int k) {
        reverse(nums, 0, n-k-1);
        reverse(nums, n-k, n-1);
        reverse(nums, 0, n-1);
    }

private:
    void reverse(int a[], int m ,int n){
        for(int i = m ; i <= (m+n-1)/2 ; ++i){
            int temp = a[i];
            a[i] = a[n+m-i];
            a[n+m-i] = temp;
        }
    }
};

int main(){

    vector<int> vi(5);
    Solution s;
    int nums[] = {1,2};
    s.rotate(nums, 2, 0);

    return 0;
}
