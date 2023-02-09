//백준문제풀이

#include <stdio.h>
#define small(x,y)x<y?x:y

int main(void){
    int i,j=0;
    int a,b=0;
    int n,m=0;
    scanf("%d %d",&n,&m);
    
    char ches[n][m];
    
    for (i=0; i<n; i++){
        scanf("%s",&ches[i][j]);
    }
    
    int countB, countW=0;
    int min=2500;
    
    for (i=0; i+7<n; i++){
        for (j=0; j+7<m; j++){
            countB=0;
            countW=0;
            
            for (a=i; a<i+8; a++){
                for (b=j; b<j+8; b++){
                    if ((a+b)%2==0){ //짝수
                        if (ches[a][b]=='W') countB++;
                        else countW++;
                    }
            
                    else { //홀수
                        if (ches[a][b]=='B') countB++;
                        else countW++;
                    }
                }
            }
            min=small(min,countW);
            min=small(min,countB);
            
        }
        
    }
   
  
    printf("%d\n",min);
     
    
    return 0;
}
