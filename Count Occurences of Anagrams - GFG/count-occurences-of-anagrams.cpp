//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    unordered_map<char,int> mp,textMap;
	    for(auto &it:pat){
	        mp[it]++;
	    }
	    int k=pat.size();
	    int i=0,j=0,n=txt.size();
	    int count=0;
	    while(i<n){
	        textMap[txt[i]]++;
	        if(i-j+1==k){
	            if(textMap==mp) count++;
	            textMap[txt[j]]--;
	            if(textMap[txt[j]]==0) textMap.erase(txt[j]);
	            j++;
	        }
	        i++;
	        
	    }
	    return count;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends