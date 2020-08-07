#include<stdio.h>
#include<stdlib.h>
#include <string.h>
int main(int argc, char *argv[]){
    if (argc < 2){
        printf("ERROR: No Arguments Passed");
    }
    else if (argc == 2){
        char commandInitial[30]="curl http://ip-api.com/json/";
        strcat(commandInitial,argv[1]);
        system(commandInitial);
    }
    else if (argc > 2){
        printf("ERROR: Too Many Arguments Passed");
    }
}
