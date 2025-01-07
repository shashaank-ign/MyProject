#include<stdio.h>

int main(){
        char ch;
    //input ch
        printf(" Enter the character:");
        scanf("%c", &ch);


        int asciicode= (int)ch;       //Implicit typecasting
        printf("ASCI code of %c is %d\n",ch,asciicode);

// Convert and print the character in uppercase
        char uppercase_char =(char)(ch-('a'-'A'));
        printf("uppercase:%c\n",uppercase_char);
        
        return 0;
}
