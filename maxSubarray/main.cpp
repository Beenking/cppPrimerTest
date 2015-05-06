
int maxSubArray(int A[], int n){
    int result = A[0];
    int sum = A[0];
    for(int i=1;i<n;++i){
        if(sum>0)
            sum += A[i];
        else
            sum = A[i];
        if(sum > result)
            result = sum;
    }
    return result;
}

int main(){
    int A[] = {-2,1,-3,4,-1,2,1,-5,4};
    int r = maxSubArray(A,9);
    return 0;
}
