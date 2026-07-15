#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
   getline(cin,S);
   stringstream ss(S);
   string word;
   int count=0;
   while(ss>>word){
    string clean="";
    for(int i=0;i<word.size();i++){
       if(isalpha((unsigned char)word[i])){
        clean +=tolower((unsigned char)word[i]);
       }
        
    }
    if(clean=="phitron"){
        count++;
    }
        
   }
   cout << count << endl;
   
    return 0;
}