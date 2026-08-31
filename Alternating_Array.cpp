#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N,poss1=0,poss2=0,count1=0,count2=0;
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	        
	    }
	    for(int i=0;i<N;i++){
	        if(i%2==0){
	            if(A[i]%2==0){//even 
                    count1++;
                }
                if(A[i]%2!=0){
                    count2++;
                }
	            
	        }
            else{
                if(A[i]%2==0){//even 
                    count2++;
                }
                if(A[i]%2!=0){
                    count1++;
                }


            }
	        
	    }
        cout<<min(count1,count2)<<endl;
	    
	    
	}

}
