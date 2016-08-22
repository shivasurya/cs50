#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<cs50.h>
#include<ctype.h>
int checkChar(char c){
    if(c >=97 && c <= 122){
        return 2;
    }
    else if(c >=65 && c <= 90){
        return 1;
    }
    return 0;
}
int main(int argv,string argc[]){
    if(argv!=2){
        printf("please input command line argument for execution");
        return 1;
    }
    else{
    string secret = argc[1];
    int sec_len = strlen(secret);
    int i = 0;
    for(i=0;i<sec_len;i++){
        if(!isalpha(secret[i])){
            printf("non-numeric character found!");
            return 1;
        }
    }
    string text = GetString();
    int len = strlen(text);
    int k = 0;
    for(i=0;i<len;i++){
        if(text[i] >=97 && text[i] <= 122){
            int sec = checkChar(secret[(k%sec_len)]);
            if(sec == 2)
                sec = (int)secret[(k%sec_len)] - 97;
            else if(sec == 1)
                sec = (int)secret[(k%sec_len)] - 65;
            int value = (int)text[i] - 97;
            value = value + sec;
            if(value >= 26){
                value = value%26;
            }
            text[i] = (char)value+97;
            k++;
        }
        else if(text[i] >=65 && text[i] <= 90){
            int sec = checkChar(secret[(k%sec_len)]);
            if(sec == 2)
                sec = (int)secret[(k%sec_len)] - 97;
            else if(sec == 1)
                sec = (int)secret[(k%sec_len)] - 65;
            
            int value = (int)text[i] - 65;
            value = value + sec;
            if(value >= 26){
                value = value%26;
            }
            text[i] = (char)value+65;
            k++;
        }
    }
    printf("%s\n",text);
    return 0;
    }
}