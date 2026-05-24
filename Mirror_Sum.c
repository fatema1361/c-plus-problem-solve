#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int A[n],B[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&B[i]);
    }
    int i=0,j=n-1;
    while(i<j){
        int temp=B[i];
        B[i]=B[j];
        B[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",A[i]+B[i]);
    }

    return 0;
}