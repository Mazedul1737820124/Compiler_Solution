#include<iostream>
using namespace std;

// compiler problem no 2(b) using c++

string vowels,consonants;

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

        bool checkVowel = true;
        bool checkConsonant = true;

       if(isVowel(str[index])){
            for(int vowelIndex = 0 ; vowelIndex < vowels.size() ; vowelIndex++ ){
                if(vowels[vowelIndex] == str[index]){
                        checkVowel = false;
                }
            }
            if(checkVowel){

                vowels += str[index];

            }
       }
       else {
        if(str[index] != ' ' && str[index] != '&' ){
                for(int consIndex = 0 ; consIndex < consonants.size() ; consIndex++ ){
                if(consonants[consIndex] == str[index]){
                        checkConsonant = false;
                }
            }
            if(checkConsonant){

                consonants += str[index];

            }

        }
       }
   }


   cout<<"There is existed vowels : ";
   for(int i = 0 ; i < vowels.size() ; i++){
     cout<<vowels[i];
   }

   cout<<"\nThere is existed consonants : ";
   for(int i = 0 ; i < consonants.size() ; i++){
     cout<<consonants[i];
   }
return 0;
}

