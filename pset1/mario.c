#include<stdio.h>
#include<cs50.h>
int getValue(){
    int temp = 0;
    printf("Height: ");
    temp = GetInt();
    while(temp < 0 || temp > 23){
        printf("Height: ");
        temp = GetInt();
    }
    return temp;
}
int main(void){
    int f = getValue();
    int i = 0;
    int start = 2;
    for(i=0;i<f;i++){
        int temp = (f+1) - start;
        while(temp--){
            printf(" ");
        }
        temp = start;
        while(temp--){
            printf("#");
        }
        printf("\n");
        start++;
    }
}