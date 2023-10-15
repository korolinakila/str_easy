#include <iostream>
#include "str_easy.h"
#include <string>
using namespace std;

string itc_cmp_str(string str1, string str2, int num){
    string S1="";
    if(str2==""){
        for (int i=0; i<=itc_len(str1); i++){
         S1+= str1[i];
    }
    return S1;
    }

    if(num+itc_len(str2)>itc_len(str1)){
    for (int i=0; i!=num; i++){
         S1+= str1[i];
    }
    for (int k=0; k<itc_len(str1)-num; k++){
         S1+= str2[k];
    }
    return S1;
    }
    else{
        int m=0;
        for (int i=0; i!=num; i++){
            S1+= str1[i];
            m+=1;
        }
        for (int k=0; k<itc_len(str2); k++){
            S1+= str2[k];
        }
        if(m==0){
            for (int y=m; y<=(itc_len(str1)-itc_len(str2)-1); y++){
                S1+= str1[y];
            }
            return S1;
        }
        else{
            for (int y=m; y<=(itc_len(str1)-itc_len(str2)-1); y++){
                S1+= str1[y];
            }
            return S1;
        }
    }
    return S1;
}   //11

int itc_find_str(string str1, string str2){
    string S1="";

    for(int i=0; i<=itc_len(str1); i++){
        int m=i;
        for(int f=i; f<itc_len(str2)+m; f++){
            S1+=str1[f];
        }
            if(S1==str2){
                return i;
            }
        S1 = "";

}   //13
return -1;
}

string itc_three_str(string str1, string str2, string str3){
string S1="";
string S2="";
int m = 0;
if(itc_find_str(str1, str2)!=-1){

    for (int i=m; i<itc_find_str(str1, str2); i++){
         S1+= str1[i];
         m+=1;
    }

    for(int k=0; k<itc_len(str3); k++){
        S1+=str3[k];
        m+=1;
    }
    m+=itc_len(str2)-itc_len(str3);
    for (int g=m; g<itc_len(str1); g++){
         S2+= str1[g];
    }
}
while(itc_find_str(S2, str2)!=-1){
    int y=m;
       for (int i=y; i<(itc_find_str(S2, str2)+y); i++){
         S1+= str1[i];
         m+=1;
    }

    for(int k=0; k<itc_len(str3); k++){
        S1+=str3[k];
        m+=1;
    }
    m+=itc_len(str2)-itc_len(str3);
    S2="";
    for (int g=m; g<itc_len(str1); g++){
         S2+= str1[g];
    }
    if (S2==""){
    return S1;
    }
}
if(itc_find_str(S2, str2)==-1){
for (int i=m; i<(itc_len(str1)); i++){
         S1+= str1[i];

    }
}

return S1;
}   //14

int itc_max_char_on_end(string str){
int m=0, n=0;
    str+='a';
    for (int i=0; i<itc_len(str); i++){
         if(str[i]>='0' && str[i]<='9'){
            n+=1;
         }
         if (str[i]<'0' || str[i]>'9'){
            if (m<n){
                m=n;
            }
            n=0;
         }
    }
    return m;
}   //15
