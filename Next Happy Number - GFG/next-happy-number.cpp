//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int nextHappy(int N){
        // code here
        unordered_map<int,int> mp;

        int temp = N+1;
        while(true){
            int  t = temp;
            while(true){
                int p = 0;
                while(temp > 0){
                    int r = temp%10;
                    p += r*r;
                    temp /=10;
                }
                if(p == 1){
                    return t;
                }
                else if(mp.find(p) != mp.end()){
                    break;
                }
                mp[p] = 1;
                temp = p; 
            }
            temp = t+1;
        }
        return true;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends