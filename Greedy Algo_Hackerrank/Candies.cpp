// Complete the candies function below.
long candies(int n, vector<int> arr) {
    vector<int> mine;
    long mine_total = 0;
    for(auto i=0;i<n;i++){
        mine.push_back(1);
    }
    for(int i=1;i<n;i++){
        if(arr[i] > arr[i-1]){
            mine[i] = mine[i-1] + 1;
        }
    }
    for(auto i=n-2;i>=0;i--){
        if(arr[i] > arr[i+1] && mine[i] <= mine[i+1])
            mine[i]=max(mine[i],mine[i+1])+1;
    }
    for(auto i=0;i<n;i++){
        mine_total+=mine[i];
    }
    return mine_total;

}