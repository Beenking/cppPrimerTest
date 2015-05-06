#include <iostream>

using namespace std;

void quick_sort(int s[], int l, int r){
    if(l < r){
        int i = l, j = r, x = s[l];
        while(i < j)
        {
            while(i < j && s[j] >= x){
                j--;
            }
            if(i < j){
                s[i++] = s[j];
            }
            while(i < j && s[i] < x){
                i++;
            }
            if(i < j){
                s[j--] = s[i];
            }
        }
        s[i] = x;
        quick_sort(s, l, i - 1);
        quick_sort(s, i + 1, r);
    }
}

int main(){
    int s[] = {4,2,2,5,6,7,13,3,9,0,1,8,4};
    quick_sort(s, 0, 12);
    for(auto i : s){
        cout << i << " ";
    }
}
