
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
 
    int num;
    int stu;
    int i,j;
    double sum=0.0;
    double avg;
    double count=0.0;
    
    scanf("%d",&num);
    for (i=0; i<num; i++){
        scanf("%d",&stu);
        
        int stu_s[stu];
        for (j=0; j<stu; j++){
            scanf("%d",&stu_s[j]);
            sum+=stu_s[j];
            
        }
        
        avg=sum/stu;
        for (j=0; j<stu; j++){
            if(avg<stu_s[j]) count++;
        }
        printf("%.3f%%\n",(count/(double)stu)*100);
        avg=0;
        sum=0;
        count=0;
        
    }
    return 0;
}
