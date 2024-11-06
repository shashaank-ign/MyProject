#include <stdio.h>
#include <string.h>


void stringtoInt(const char *str, int *value)
void intToString(int value, char *str, int size)

int main() 
{
    char string[5] = "12345";
    int value = 0;
    stringtoInt(string, &value);
    printf("String: %s\n", string);
    printf("Integer: %d\n", value);

    
    char convertedString[10];
    inttoString(value, convertedString, sizeof(convertedString));
    printf("Integer: %d\n", value);
    printf("String: %s\n", convertedString);

    return 0;
}
   
void stringtoInt(const char *str, int *value) {
    int result = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        } else {
            printf("Error: Invalid input! string contains non-digit characters.\n");
            *value = 0;
            return;
        }
    }

    *value = result;
}
void inttoString(int value, char *str, int size) 
{
    int i = size - 1;
    str[i] = '\0';

    do {
        str[--i] = '0' + (value % 10);
        value /= 10;
    } while (value != 0);

    
    if (i > 0) 
    {
        mmmove(str, &str[i], size - i);
    }
}

