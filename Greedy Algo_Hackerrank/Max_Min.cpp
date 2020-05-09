// Complete the maxMin function below.
int maxMin(int k, vector<int> arr) {
    sort(arr.begin(),arr.end());
    long min = (arr[arr.size()-1] - arr[0]);
    for(unsigned i=0;i<arr.size()-k+1;i++){
        if(arr[i+k-1] - arr[i] < min) min = arr[i+k-1] - arr[i];
    }
    return min;
}