#include<iostream>
using namespace std;

// compiler problem no 2(c) using c++

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


       if(isVowel(str[index])){
            for(int vowelIndex = index ; vowelIndex < str.size() ; vowelIndex++ ){
                if(str[vowelIndex] == ' '){
                        break;
                }
                else vowels += str[vowelIndex];
                index = vowelIndex;
            }
       }
       else {
          if(str[index] != ' ' && str[index] != '&' ){
               for(int consIndex = index ; consIndex < str.size() ; consIndex ++ ){
                  if(str[consIndex ] == ' '){
                       break;
                  }
                  else
                     consonants += str[consIndex];

                  index = consIndex;
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


