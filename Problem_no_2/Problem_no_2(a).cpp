#include<iostream>
using namespace std;
// compiler problem no 2(a) using c++

int countVowels = 0;
int countConsonants = 0;

bool isVowel(char letter){
    string vowel = "aeiouAEIOU";
    for(int vowelIndex = 0 ; vowelIndex < vowel.size() ; vowelIndex++){
        if(letter == vowel[vowelIndex])
            return true;
    }

return false;
}

int main(){

   string str = "Munmun is the student of Computer Science & Engineering";
   for(int index = 0 ; index < str.size() ; index++){
       if(isVowel(str[index])){
          countVowels++;
       }
       else {
        if(str[index] != ' ' && str[index] != '&' ){
            countConsonants++;
        }
       }
   }

   cout<<"\nNo of vowels : "<<countVowels;
   cout<<"\nNo of consonants : "<<countConsonants;
return 0;
}
