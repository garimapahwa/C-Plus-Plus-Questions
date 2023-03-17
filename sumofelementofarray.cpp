#include <iostream>
using namespace std;

int sum(int input[], int n) {
    if(n==0){
        return 1;
    }
    else{
        int smalloutput = int input[n-1]
        return input[n]+smalloutput;
    }

}

int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    cout << sum(input, n) << endl;
}
