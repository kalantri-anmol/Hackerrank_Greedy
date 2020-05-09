int luckBalance(int k, vector<vector<int>> contests) {
    long max_luck=0;
    sort(contests.rbegin(),contests.rend());
    for(unsigned i=0;i<contests.size();i++){
        if(contests[i][1]==0) {max_luck += contests[i][0];}
        else if(k>0){
            max_luck += contests[i][0];
            k--;
        }
        else
        {
            max_luck -= contests[i][0];
        }
    }

return max_luck;
}