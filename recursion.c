#include<stdio.h>

int main(){
        int base, exponent;
        printf("Enter the base number:");
        scanf("%d",&base);

        printf("Enter the exponent number:");
        scanf("%d",&exponent);

        int result= power(base,exponent);

        printf("%d^%d=%d",base,exponent,result);
        return 0;
}

int power(int base, int exponent){
        if(exponent !=0)
                return (base * power(base,exponent-1));
        else
                return 1;
}
