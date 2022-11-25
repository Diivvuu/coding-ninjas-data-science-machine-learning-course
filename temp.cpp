void help(int input[], int startIndex, int s, int output[], int m){
    if(startIndex == s){
        for(int i = 0; i < m; i++){
            cout << output[i] << " ";
        }
        cout << endl;
        return;
    }
    int helpo[1000];
    help(input, startIndex + 1, s, output, m);
    int i;
    for(i = 0; i < m; i++){
        helpo[i] = output[i];
    }
    helpo[i] = input[startIndex];
    help(input, startIndex +1, s, helpo, m+1);
}
void printSubsetsOfArray(int input[], int size){
    int output[1001];
    int m = 0;
    help(input, 0, length, output, m);
}
