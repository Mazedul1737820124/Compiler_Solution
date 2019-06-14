#include<stdio.h>
#include<string.h>

int countWords = 0;
int countLetters = 0;
int countDigits = 0;
int countOther = 0;
char digit[] = "0123456789";

// Problem 1(a)

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
    for(int item = 0 ; item < len ; item++){
        if(str[item] == ' '){
            countWords++;
        }
        if(isLetter(str[item])){
            countLetters++;
        }
        if(isdigit(str[item])){
            countDigits++;
        }
        if(!isdigit(str[item]) && !isLetter(str[item]) ){
            countOther++;
        }

    }
    printf("No of Words = %d\n",countWords);
    printf("No of Letters = %d\n",countLetters);
    printf("No of Digits = %d\n",countDigits);
    printf("No of Others = %d\n",countOther);

return 0;
}
