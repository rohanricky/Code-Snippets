#1. find the least difference between numbers in array.
#Inputs array pointer and size of array
void leastDifference(int *S, int N){
    sort(S,S+N);
    int k,min=S[1]-S[0];
    int tempmin=0;
    for(k=1;k<N;k++){
        tempmin=(S[k]-S[k-1]); 
        if(tempmin < min) min=tempmin; 
    }
    cout << min << endl;
}

