#include<stdio.h>
#include<string.h>

char digit[] = "0123456789";

// Compiler Problem 1(b)

int isLetter(char letter){

    int check = 0;
    for(int let = 0 ; let < 10 ; let++){
        if(letter != '1' && letter != '3' && letter != '0' && letter != '2' && letter != '.' && letter !=' ' && letter !='-'
           && letter != ',' )
            check = 1;
    }
    if(check){
        return 1;
    }

return 0;
}

int main(){

    char str[] = " Md. Tareq Zaman, Part-3, 2011";
    int len = strlen(str);
    printf("Letters are : ");
    for(int item = 0 ; item < len ; item++){

        if(isLetter(str[item])){
            printf("%c",str[item]);
        }
    }
    printf("\nDigits are : ");
    for(int item = 0 ; item < len ; item++){

        if(isdigit(str[item])){
            printf("%c",str[item]);
        }
    }
    printf("\nOther characters are : ");
    for(int item = 0 ; item < len ; item++){

        if(!isLetter(str[item]) && !isdigit(str[item])){
            printf("%c",str[item]);
        }
    }


return 0;
}

