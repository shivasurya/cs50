#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<cs50.h>
int main(int argv,string argc[]){
    if(argv!=2){
        printf("please input command line argument for execution");
        return 1;
    }
    else{
    int secret = atoi(argc[1]);
    secret = secret%26;
    int i = 0;
    string text = GetString();
    int len = strlen(text);
    for(i=0;i<len;i++){
        if(text[i] >=97 && text[i] <= 122){
            int value = (int)text[i] - 97;
            value = value + secret;
            if(value >= 26){
                value = value%26;
            }
            text[i] = (char)value+97;
        }
        else if(text[i] >=65 && text[i] <= 90){
            int value = (int)text[i] - 65;
            value = value + secret;
            if(value >= 26){
                value = value%26;
            }
            text[i] = (char)value+65;
        }
    }
    printf("%s\n",text);
    return 0;
    }
}