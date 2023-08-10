#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    
    cout<<"Enter your string";
    cin>>s;
    int c =0;
    int max = 0;
    int left = 0;
    map<char,int> mpp;
    
        for(int i=0; i<s.size(); i++){
            
            if(mpp.find(s[i]) == mpp.end()){
                c += 1;
                mpp[s[i]] = i;
                if(!s[i+1]){
                    max=c;
                }
            }
            
            
            else{
                if(max<c){
                    max = c;
                    c=1;
                }
            }
           
        }
        cout<<max;
   
    
    return 0;
}