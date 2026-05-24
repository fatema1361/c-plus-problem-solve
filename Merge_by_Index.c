#include<stdio.h>
int main()
{
    char S1[1005],S2[1005];
    int start,end;
    scanf("%s %s",S1,S2);
    scanf("%d %d",&start,&end);
    int len=strlen(S2);
    if(start < 0)
    {
    start = 0;
    }
    if(end >= len) {
        end = len - 1;
    }

    printf("%s",S1);
    for(int i=start;i<=end;i++){
       printf("%c",S2[i]);
    }
    return 0;
}