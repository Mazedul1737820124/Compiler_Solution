#include <bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

bool checkFloat(string data){

    bool numberCheck = false;
    int postCount = 0;
	for(int pos = 0; pos < data.length() ; pos++){
        if(data[pos] == '.'){
            numberCheck = true;
        }
        else if (numberCheck){
            postCount++;
        }
	}
	if(numberCheck && postCount != 0){
        cout<<"Float"<<endl;
        return true;
	}

return false;
}

bool checkInteger(string data){

    bool numberCheck = false;
    int preCount = 0;
	for(int pos = 0; pos < data.length() ; pos++){
        if(isdigit(data[pos])){
            numberCheck = true;
        }
        else
            return false;
	}
	if(numberCheck){
        cout<<"Integer"<<endl;
        return true;
	}

return false;
}

bool checkKeyWord(string data){
    string keyWords[] = {"do","if","switch","else","for","while","goto",
                         "union","int","float","double","bool","class",
                         "virtual","break","cin","cout","return","default"
                        };
    for (int pos = 0 ; pos < sizeof(keyWords)/sizeof(string) ; pos++){
        if(keyWords[pos] == data){
            cout<<"Keyword"<<endl;
            return true;
        }
    }

return false;
}
bool checkOperator(string data){

    string operators[] = {"+","-","/","*"};
    for(int pos = 0 ; pos < sizeof(operators)/sizeof(string) ; pos++){
        if(operators[pos] == data){
            cout<<"Arithmetic Operator"<<endl;
            return true;
        }
    }
    return false;
}

bool checkIdentifire(string data){

    int valid;
    if(isalpha(data[0])||data[0]=='_')
	   valid = 1;
	else
		valid = 0;

	if(valid==1)
	  {
	  	for(int pos = 1 ; pos <data.length() ; pos++)
	  	   {
	  	   	if(!(isalpha(data[pos]) || !isdigit(data[pos])|| data[pos]=='_')){
                    valid = 0;
                    break;
            }
	  	   }
	  }
	//output phase
	if(valid == 1 ){
		cout<<"Identifier"<<endl;

	}

return false;
}
int main()
{

    //int pos = 0;
    while(true){
      string input;
	  cin>>input;
	  checkFloat(input);
      checkInteger(input);
      checkKeyWord(input);
      checkOperator(input);
      checkIdentifire(input);
      }

	return 0;
}

