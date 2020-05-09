// Complete the maximumPerimeterTriangle function below.
vector<int> maximumPerimeterTriangle(vector<int> sticks) {
    sort(sticks.begin(),sticks.end(),greater<int>());
    vector<int> v1;
    for(int i=0;i<sticks.size()-2;i++){
        if(sticks[i+2] + sticks[i+1] > sticks[i]){
           v1.push_back(sticks[i+2]);
           v1.push_back(sticks[i+1]);
           v1.push_back(sticks[i]);
           return v1;
        }
    }    
    v1.push_back(-1);
    return v1;
}