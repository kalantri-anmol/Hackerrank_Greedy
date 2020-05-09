int toys(vector<int> w) {
    int containers = 1;
    sort(w.begin(),w.end());
    int i=0;
    for(unsigned j=1;j<w.size();j++){
        while(w[i] + 4 >= w[j]) j++;
        i=j;
        if(i<w.size()) containers++;
    }
    return containers;
}