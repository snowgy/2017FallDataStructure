#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int check(int num, double start, double end);
int check1(double start,double end);
int check2(double start,double end);
int check3(double start,double end);
int check4(double start,double end);
int check5(double start,double end);
int check6(double start,double end);
int check7(double start,double end);
int check8(double start,double end);
int check9(double start,double end);
int check10(double start,double end);
int check11(double start,double end);
int check12(double start,double end); 
 
int numT[5] = {'0','1','6','8','9'};
int numTT[5] = {'0','1','9','8','6'};
int numS[3] = {'0','1','8'}; 
int table[12] = {3,4,12,20,60,100,300,500,1500,2500,7500,12500};
 
int main(){
     
        double start,end;
        char buf1[20];
        char buf2[20];
        char buf3[20];
        memset(buf1,0,sizeof(buf1));
        memset(buf2,0,sizeof(buf2));
        memset(buf3,0,sizeof(buf3));
        int count=0;
        int i,j,k;
        while(scanf("%lf %lf",&start,&end)!=EOF){
            count = 0;
            gcvt(start,20,buf1);
            gcvt(end,20,buf2);
            int num1 = strlen(buf1);
            int num2 = strlen(buf2);
            for(i=num1;i<=num2;i++){
                if(num1==num2){
                    count+=check(num1,start,end);
                }
                if(num1!=num2){
                if(i==num1){
                    count+=check(num1,start,pow(10,num1));
                }
                else if(i==num2){
                    count+=check(num2,pow(10,num2-1),end);
                }else{
                    count+=table[i-1]; 
                }
                }
            }
            printf("%d\n",count);
        } 
} 
int check(int num, double start, double end){
    int result=0;
    switch(num){
        case 1:
            result = check1(start,end);
            break;
        case 2:
            result = check2(start,end);
            break;
        case 3:
            result = check3(start,end);
            break;
        case 4:
            result = check4(start,end);
            break;
        case 5:
            result = check5(start,end);
            break;
        case 6:
            result = check6(start,end);
            break;
        case 7:
            result = check7(start,end);
            break;
        case 8:
            result = check8(start,end);
            break;
        case 9:
            result = check9(start,end);
            break;
        case 10:
            result = check10(start,end);
            break;
        case 11:
            result = check11(start,end);
            break;
        case 12:
            result = check12(start,end);
            break;
    }
    return result; 
}
 
int check1(double start,double end){
    int count=0;
    int i=0;
    for(i=start;i<=end;i++){
        if(i==0||i==8||i==1){
            count++;
        }
    }
    return count;
}
int check2(double start,double end){
    int i;
    char s[2];
    int count=0;
    for(i=1; i<5; i++){
        s[0] = numT[i];
        s[1] = numTT[i];
        double a = atof(s);
        if(a>=start && a<=end){
            count++;
        } 
    }
    return count;
}
int check3(double start,double end){
     
    int i,j;
    char s[3];
    int count=0;
    for(i=1; i<5; i++){
        s[0] = numT[i];
        s[2] = numTT[i];
        for(j=0;j<3;j++){
            s[1] = numS[j];
            double a = atof(s);
            if(a>=start && a<=end){
                count++;
            } 
        }
         
    }
    return count;
}
int check4(double start,double end){
    int i,j;
    char s[4];
    int count=0;
    for(i=1; i<5; i++){
        s[0] = numT[i];
        s[3] = numTT[i];
        for(j=0;j<5;j++){
            s[1] = numT[j];
            s[2] = numTT[j];
            double a = atof(s);
            if(a>=start && a<=end){
            count++;
            } 
        }
         
    }
    return count;
}
int check5(double start,double end){
    int i,j,k;
    char s[5];
    int count = 0;
    for(i=1;i<5;i++){
        s[0] = numT[i];
        s[4] = numTT[i];
        for(j=0;j<5;j++){
            s[1] = numT[j];
            s[3] = numTT[j];
            for(k=0;k<3;k++){
                s[2] = numS[k];
                double a = atof(s);
                if(a>=start && a<=end){
                    count++;
                } 
            } 
        }
    }
    return count;
}
int check6(double start,double end){
    int i,j,k;
    char s[6];
    int count = 0;
    for(i=1;i<5;i++){
        s[0] = numT[i];
        s[5] = numTT[i];
        for(j=0;j<5;j++){
            s[1] = numT[j];
            s[4] = numTT[j];
            for(k=0;k<5;k++){
                s[2] = numT[k];
                s[3] = numTT[k];
                double a = atof(s);
                if(a>=start && a<=end){
                    count++;
                } 
            } 
        }
    }
    return count;
}
int check7(double start,double end){
    int i,j,k,m;
    char s[7];
    int count=0;
    for(i=1;i<5;i++){
        s[0] = numT[i];
        s[6] = numTT[i];
        for(j=0;j<5;j++){
            s[1] = numT[j];
            s[5] = numTT[j];
            for(k=0;k<5;k++){
                s[2] = numT[k];
                s[4] = numTT[k];
                for(m=0;m<3;m++){
                    s[3] = numS[m];
                    double a = atof(s);
                    if(a>=start && a<=end){
                        count++;
                    } 
                }
            }
        }
    }
    return count;
}
int check8(double start,double end){
    int i,j,k,m;
    char s[8];
    int count=0;
    for(i=1;i<5;i++){
        s[0] = numT[i];
        s[7] = numTT[i];
        for(j=0;j<5;j++){
            s[1] = numT[j];
            s[6] = numTT[j];
            for(k=0;k<5;k++){
                s[2] = numT[k];
                s[5] = numTT[k];
                for(m=0;m<5;m++){
                    s[3] = numT[m];
                    s[4] = numTT[m];
                    double a = atof(s);
                    if(a>=start && a<=end){
                        count++;
                    } 
                }
            }
        }
    }
    return count;
}
int check9(double start,double end){
    int i,j,k,m,n;
    char s[9];
    int count=0;
    for(i=1;i<5;i++){
        s[0] = numT[i];
        s[8] = numTT[i];
        for(j=0;j<5;j++){
            s[1] = numT[j];
            s[7] = numTT[j];
            for(k=0;k<5;k++){
                s[2] = numT[k];
                s[6] = numTT[k];
                for(m=0;m<5;m++){
                    s[3] = numT[m];
                    s[5] = numTT[m];
                    for(n=0;n<3;n++){
                        s[4] = numS[n];
                          
                            double a = atof(s);
                         
                            if(a>=start && a<=end){
                                 count++;
                                }
                        }
                    }
                }
            }
    }
    return count;
}
int check10(double start,double end){
    int i,j,k,m,n;
    char s[10];
    int count=0;
    for(i=1;i<5;i++){
        s[0] = numT[i];
        s[9] = numTT[i];
        for(j=0;j<5;j++){
            s[1] = numT[j];
            s[8] = numTT[j];
            for(k=0;k<5;k++){
                s[2] = numT[k];
                s[7] = numTT[k];
                for(m=0;m<5;m++){
                    s[3] = numT[m];
                    s[6] = numTT[m];
                    for(n=0;n<5;n++){
                        s[4] = numT[n];
                        s[5] = numTT[n];
                            double a = atof(s);
                         
                            if(a>=start && a<=end){
                                 count++;
                                }
                        }
                    }
                }
            }
    }
    return count;
}
int check11(double start,double end){
    int i,j,k,m,n,q;
    char s[11];
    int count=0;
    for(i=1;i<5;i++){
        s[0] = numT[i];
        s[10] = numTT[i];
        for(j=0;j<5;j++){
            s[1] = numT[j];
            s[9] = numTT[j];
            for(k=0;k<5;k++){
                s[2] = numT[k];
                s[8] = numTT[k];
                for(m=0;m<5;m++){
                    s[3] = numT[m];
                    s[7] = numTT[m];
                    for(n=0;n<5;n++){
                        s[4] = numT[n];
                        s[6] = numTT[n];
                        for(q=0;q<3;q++){
                            s[5] = numS[q]; 
                            double a = atof(s);
                         
                            if(a>=start && a<=end){
                                 count++;
                                }
                        }
                    }
                }
            }
        }
         
    }
    return count;
}
int check12(double start,double end){
    int i,j,k,m,n,q;
    char s[12];
    int count=0;
    for(i=1;i<5;i++){
        s[0] = numT[i];
        s[11] = numTT[i];
        for(j=0;j<5;j++){
            s[1] = numT[j];
            s[10] = numTT[j];
            for(k=0;k<5;k++){
                s[2] = numT[k];
                s[9] = numTT[k];
                for(m=0;m<5;m++){
                    s[3] = numT[m];
                    s[8] = numTT[m];
                    for(n=0;n<5;n++){
                        s[4] = numT[n];
                        s[7] = numTT[n];
                        for(q=0;q<5;q++){
                            s[5] = numT[q];
                            s[6] = numTT[q]; 
                            double a = atof(s);
                         
                            if(a>=start && a<=end){
                                 count++;
                                }
                        }
                    }
                }
            }
        }
         
    }
    return count;
}