#include <iostream>
#include "str_easy.h"
#include <string>
using namespace std;
string itc_hello_str(string name){
    string s1 = "Hello";
    return s1 + ", " + name;
}   //1


long long itc_len(string str){
    return str.length();
}   //2

void itc_print_copy_str(string str, int number){
for(int i=0; i<number; i++){
    cout << str;
}
}   //3

void itc_first_end_three(string str){
if (str.size() <= 5){
    char ch = str[0];
    itc_print_copy_str(ch, str.size());
}
}
