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
} //7

string itc_reverse_str(string str){
    string S1="";
    for (int i=0; str[i]!='\0'; i++){
         S1+= str[itc_len(str)-(i+1)];
    }
    return S1;
}   //8

string itc_slice_str(string str, int start, int end){
string S1="";
if(start>itc_len(str)){
    for (int i=0; i<=itc_len(str); i++){
         S1+= str[i];
    }
    return S1;
    }

    if(end<=itc_len(str)){
    for (int i=start; i<=end; i++){
         S1+= str[i];
    }
    return S1;
    }
    if(end>itc_len(str)){
    for (int i=start; i<=itc_len(str); i++){
         S1+= str[i];
    }
    return S1;
    }
return S1;
}   //9

bool itc_equal_reverse(string str){
return str==itc_reverse_str(str);
}   //10
