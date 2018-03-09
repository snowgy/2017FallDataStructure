#include <stdio.h>   
 
int length[1000];  
int n, k;  
   
bool check(int m)  
{  
    int sum = 0;  
    for(int i = 0; i < n; i++)  
        sum += length[i] / m;  
    return sum >= k;  
}  
   
int main()  
{  
    while(scanf("%d %d", &n, &k) != EOF)  
    {  
        int maxnum = 0;  
        for(int i = 0; i < n; i++)  
        {  
            double tmp;  
            scanf("%lf", &tmp);  
            length[i] = (int)(tmp * 100);  
            maxnum = maxnum>length[i]?maxnum:length[i];
        }  
        int end = maxnum;
        int start = 1;  
        while(start <= end)  
        {  
            int mid = (start + end) / 2;  
            if(check(mid))   
                start = mid + 1;  
            else 
                end = mid - 1;  
        }  
          
        printf("%.2f\n", end/100.0);  
    }  
}  