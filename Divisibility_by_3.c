#include<stdio.h>
int main()
{
    int N,sum=0;
    scanf("%d",&N);
    char S[N+1];
    scanf("%s",S);
    for(int i=0;i<N;i++){
        sum+=(S[i]-'0');
    }
    if(sum%3==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
    return 0;
}