#include <stdio.h>
#include <stdlib.h>

int GCD(int a,int b){
    int r=a%b;
    if (r==0) return b;
    else return GCD(b,r);
}

int main(void){
    int a,b;
    int gcd; //최대 공약수 : greatest common factor(gcd)
    int lcm; //최소 공배수 : least common multiple(lcm)
   
    scanf("%d %d",&a,&b);
   
    gcd=GCD(a,b);
    lcm=(a*b)/gcd;
    
    printf("%d\n%d\n",gcd,lcm);
    
    return 0;
}
