#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(void){
   
    int i;
    int count=1;
    
    char word[1000000];
    scanf("%[^\n]",word);
    
    if (strlen(word)==1){
        if (word[0]==' '){
            printf("0\n");
            return 0;
        }
        
    }
    for (i=1; i<strlen(word)-1; i++){
        if (word[i]==' ') count++;
    }

    printf("%d\n",count);
    return 0;
    
}
