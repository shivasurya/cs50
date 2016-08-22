#include<stdio.h>
#include<string.h>
#include<cs50.h>
int main(void){
    string name;
    name = GetString();
    int i=0;
    int len = strlen(name);
    if(name[0] >= 97 && name[0] <= 122)
        printf("%c",name[0]-32);
    else
        printf("%c",name[0]);
    for(i=1;i<len;i++){
        if(name[i-1]==' '){
            if(name[i] >= 97 && name[i] <= 122)
                printf("%c",name[i]-32);
            else
                printf("%c",name[i]);
        }
    }
    printf("\n");
}