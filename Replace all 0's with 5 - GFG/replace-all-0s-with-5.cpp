//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) {
    // Your code here
    int num=0;
    while(n>0){
        int rem=n%10;
        if(rem==0){
            num=num*10+5;
        }
        else{
            num=num*10+rem;
        }
        n/=10;
    }
    int ans=0;
    while(num>0){
        ans=ans*10+num%10;
        num/=10;
    }
    return ans;
}