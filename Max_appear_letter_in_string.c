#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ascii_size 255

void max_appear(char str1[]);

int main(){

    max_appear("welcome to home");

    return 0;
}


void max_appear(char str1[]){

    char frequency[ascii_size];
    int ascii = 0;
    int max = 0;

    for(int i = 0; i < ascii_size; i++){

        frequency[i] = 0;

    }//set all of the frequency equals to 0

    for(int j = 0; j < strlen(str1); j++){

        ascii = (int)str1[j];

        frequency[ascii] ++;

    }

    for(int k = 0; k < ascii_size; k++){

        if(frequency[k] > max){

            max = frequency[k];
        }
    }

    printf("The max letter frequency is %d, the letter is %c", max, frequency[k]);



}
