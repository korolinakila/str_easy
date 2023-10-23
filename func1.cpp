#include <iostream>
#include "str_easy.h"
#include <string>
using namespace std;
string itc_hello_str(string name){
    string s1 = "Hello";
    return s1 + ", " + name;
}   //1


long long itc_len(string str){
    long long k;
    for(long long i=0; str[i]!='\0'; i++){
    k = i;
    }
    return k+1;
}   //2

void itc_print_copy_str(string str, int number){
for(int i=0; i<number; i++){
    cout << str;
}
}   //3

void itc_first_end_three(string str){
if (itc_len(str) <= 5){
        for(int i=0; i!=itc_len(str); i++){
            cout << str[0];
        }
}
else{
    cout << str[0] << str[1] << str[2] << str[itc_len(str)-3] << str[itc_len(str)-2] << str[itc_len(str)-1];
}
}   //4

int itc_count_char_in_str(char ch, string str){
int k=0;
for (int i=0; str[i]!='\0'; i++){
    if (str[i]==ch){
        k+=1;
    }
}
return k;
}   //5
