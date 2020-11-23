#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_UpperCase (char *string);
char string[] = {0};

int main()
{
    char string[] = {0};

    printf("String: ");
    gets(string);

    is_UpperCase(string);
    printf("%d", is_UpperCase(string));

    return 0;
}

bool is_UpperCase (char *string)
{  
    for ( int i = 0; string[i] != '\0' ; i++){
        if (string[i] >='a' && string[i] <= 'z'){
            return false;
        }
    }
    return true;
}


