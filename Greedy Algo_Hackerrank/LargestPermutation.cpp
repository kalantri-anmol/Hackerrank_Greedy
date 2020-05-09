vector<int> largestPermutation(int k, vector<int> arr) {
    int temp=0,i=0,j=0;
    
    // sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(arr[i]!=arr.size()-i && k!=0){
            j=i+1;
            while(arr[j] != arr.size()-i) j++;
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        k--;
        }
    }
    return arr;


}