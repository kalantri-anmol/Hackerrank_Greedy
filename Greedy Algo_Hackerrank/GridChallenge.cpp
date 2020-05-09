string gridChallenge(vector<string> grid){
	sort(grid[0].begin(),grid[0].end());
	for(long i=1;i<grid.size();i++){
		sort(grid[i].begin(), grid[i].end());
		for(long j=0;j<grid.size();j++){
			if(grid[i-1][j] > grid[i][j]) return "NO";
		}
	}
	return "YES";
}

    long total_candies=0;
    vector<int> candie;
    candie[0]=1;
    for(long i=1;i<n;i++){
        if(arr[i] > arr[i-1]){
            candie[i] = candie[i-1] + 1;
        }
        else{
            candie[i] = 1;
        }
    }
    for(long i=n-2;i>=0;i--){
        if((arr[i] > arr[i+1]) && (candie[i]<=candie[i+1])){
            candie[i] = candie[i+1] + 1;
        }
        total_candies+=candie[i];
    }
    total_candies+=candie[n-1];
    return total_candies;
\
//3/8 Test Cases failed!
int beautifulPairs(vector<int> A, vector<int> B) {
    long Beauty_pairs = 0;
    for(long i=0;i<A.size();i++){
        for(long j=0;j<B.size();j++){
            if(A[i] == B[j]){
                Beauty_pairs++;
                B.erase(B.begin()+j);
            }
        }
    }
    if(B.empty()) Beauty_pairs--;
    else Beauty_pairs++;
    return Beauty_pairs;

}