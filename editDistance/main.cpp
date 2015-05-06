#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>

using namespace std;



int minDistance2(string word1, string word2) {
    // Step 1
    int n = word1.size(), m = word2.size();
    if (n == 0)  return m;
    if (m == 0)  return n;
    int A[n + 1][m + 1];

    // Step 2
    for (int i = 0; i <= n; ++i)  A[i][0] = i;
    for (int j = 0; j <= m; ++j)  A[0][j] = j;

    for (int i = 1; i <= n; ++i) {  // Step 3
        char word1_i = word1[i-1];
        for (int j = 1; j <= m; ++j) {  // Step 4
            char word2_j = word2[j-1];
            int cost = (word1_i == word2_j) ? 0 : 1;  // Step 5
            A[i][j] = min(min(A[i-1][j]+1, A[i][j-1]+1), A[i-1][j-1]+cost);// Step 6
        }
    }
    return A[n][m];  // Step 7
}




int minDistance(string word1, string word2){
    int srcLength = word1.size();
    int targetLength = word2.size();

    int dp[srcLength+1][targetLength+1];

    for(int i=0;i<=srcLength;++i){
        dp[i][0] = i;
    }
    for(int j=0;j<=targetLength;++j){
        dp[0][j] = j;
    }
    for(int i=1;i<=srcLength;++i){
        for(int j=1;j<=targetLength;++j){
            if(word1[i-1] == word2[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }else{
                dp[i][j] = 1+ min(min(dp[i-1][j],dp[i-1][j-1]),dp[i][j-1]);
            }
        }
    }
    return dp[srcLength][targetLength];
}

int main(){
    char src[] = "Algorithm";
    char target[] = "Altruistic";
    int a[3][4] = {0};

    int n = minDistance(src,target);

    return 0;
}
