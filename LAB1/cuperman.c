#include <stdio.h>
#include <string.h> 
int main(){
    char role[10];
    char poke[50];
    int numTable[17];
    int i,j,k;
    int max=0;
    while(fgets(role, 10, stdin) != NULL){
        memset(numTable, 0, sizeof(numTable));
        fgets(poke, 50, stdin);
        int pl = strlen(poke);
         
        for(i=0; i<pl; i++){
            if(poke[i]-'0'>2 && poke[i]-'0'<11 ){
                numTable[poke[i]-'0'-1]++;
            }
            if((poke[i]-'0')==2) numTable[14]++;
            if(poke[i]=='J'){
                if(i==0||(i-1>=0 && poke[i-1]!='R' && poke[i-1]!='W')){
                    numTable[10]++;
                }
            }
            if(poke[i] == '1') numTable[9]++;
            if(poke[i] == 'Q') numTable[11]++;
            if(poke[i] == 'K') numTable[12]++;
            if(poke[i] == 'A') numTable[13]++;      
            if(poke[i]=='W') numTable[15]++;
            if(poke[i]=='R') numTable[16]++; 
    }
     
    for(i=0; i<numTable[16]; i++) printf("RJ ");
    for(i=0; i<numTable[15]; i++) printf("WJ ");
    for(k=2; k<15;k++){
    for(j=14; j>=0; j--){
        if(numTable[j]>numTable[max]) max = j;
    } 
    for(i=0; i<numTable[max]; i++){
        if(max>1&&max<10) printf("%d ", max+1);
        if(max==10) printf("J ");
        if(max==11) printf("Q ");
        if(max==12) printf("K ");
        if(max==13) printf("A ");
        if(max==14) printf("2 "); 
}
    numTable[max]=0;
    max = 0;
}
    printf("\n");
}
    return 0;
}