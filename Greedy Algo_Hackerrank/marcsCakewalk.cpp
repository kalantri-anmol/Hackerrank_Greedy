long marcsCakewalk(vector<int> calorie) {
    long long miles=0;
    sort(calorie.begin(),calorie.end(),greater<int>());
    for(long i=0;i<calorie.size();i++){
        miles += ((pow(2,i)) * calorie[i]);
    }
    return miles;

}