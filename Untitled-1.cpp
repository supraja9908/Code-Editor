void printS(int i, int n, vector<int> ds, int arr[]){
    if(i==n){
        for(auto it:ds){
            cout<<it<<" "<<endl;
            return;
        }
    }
    ds.push_back(arr[i]);
    printS(i+1, n, ds, arr);
    ds.pop();
    printS(i+1, n, ds, arr);
}


int main(){
    int n=3;
    int arr[n]={3, 1, 2};
    vector<int> ds;
    printS(0, n, ds, arr);

}