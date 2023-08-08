//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


void addFraction(int num1, int den1, int num2,
                 int den2);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b,c,d,resultNum,resultDen;
        cin>>a>>b>>c>>d;
        addFraction(a,b,c,d);

    }
}

// } Driver Code Ends


/*You are required to complete this function*/
int getGcd(int a,int b){
    if(b==0) return a;
    return getGcd(b,a%b);
}
void addFraction(int num1, int den1, int num2,int den2)
{
//Your code here
    int gcd=getGcd(den1,den2);
    int lcm=(den1*den2)/gcd;
    
    int num=(num1*(lcm/den1))+(num2*(lcm/den2));
    int hcf=getGcd(lcm,num);
    cout<<num/hcf<<"/"<<lcm/hcf<<endl;
}