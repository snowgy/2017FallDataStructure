#include <stdio.h>
#include <string.h>
int main(){
    char sa[1002];
    char sb[1002];
    int a[1002];
    int b[1002];
    int c[1002];
    while(  scanf("%s %s", sa, sb) != EOF){
     
    int i;
    int la = strlen(sa);
    int lb = strlen(sb);
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c)); 
    for(i=0; i<la; i++){
        a[la-i-1] = sa[i]-'0';
    }
    for(i=0; i<lb; i++){
        b[lb-i-1] = sb[i]-'0';
    }
    int lc = la>lb?la:lb;
    for(i=0; i<lc;i++){
        c[i] = c[i] + a[i] + b[i];
        if(c[i]>=10){
            c[i+1] = 1;
            c[i] -= 10;
        } 
    }
    if(c[lc]>0) lc++;
    for(i = lc-1; i>-1; i--){
        printf("%d", c[i]);
    }
    printf("\n");
}
    return 0;
} 