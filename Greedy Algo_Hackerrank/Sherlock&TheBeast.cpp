// Complete the decentNumber function below.
void decentNumber(int n) {
     //14 - 55555555533333
     //11 - 55555533333
     //17 - 12 5s & 5 3s
    //  So basically. if a number n%3==0; then all 5s(max)
                    //   if a number is 3n+1 then we can't form a max num;->return -1
                    //if a number is of the form 3n+2, then 5 3s and rest all 5s;
    // vector<long> A;
    // while(true){
        if(n %3 ==0){
            for(int i=0;i<n;i++)
                cout << "5";
        cout << endl;
        }
    else if((n %3 == 1) && (n>=10)){
        string str;
        for(int i=0;i<(n-10);i++){
            str+="5";
        }
        cout << str << "3333333333" ;
        cout<<endl;
    }
    else if((n%3 == 2) && (n>=5)){
        string str;
        for(int i=0;i<(n-5);i++){
            str+="5";
        }
        cout << str << "33333";
    cout<<endl;
    }
    else{
        cout << "-1" << endl;
    }
}