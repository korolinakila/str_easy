#include <iostream>
#include "str_easy.h"
#include <string>
using namespace std;
string itc_even_place(string str){
    string S1="";
    for (int i=0; str[i]!='\0'; i++){
        if (str[i]>='0' && str[i]<'9' && str[i]%2==0){
            S1 += str[i];
        }
    }
    if(S1==""){
        return "-1";
    }
return(S1);
}   //6

double itc_percent_lower_uppercase(string str){
    double k=0, K=0;
    for (int i=0; str[i]!='\0'; i++){
        if (str[i]>='a' && str[i]<='z'){
            k += 1;
        }
        if (str[i]>='A' && str[i]<='Z'){
            K += 1;
        }
    }

return(k/K*100);
}
