#include <stdio.h>
#include <math.h>
int gcd(int a,int b);
 
int main(){
    int x1,x2,y1,y2;
    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)!=EOF){
        int dx = abs(x2-x1);
        int dy = abs(y2-y1);
        printf("%d\n",gcd(dx,dy)-1);
    }
}
 
int gcd(int a, int b){
    return b == 0?a:gcd(b,a%b); 
}