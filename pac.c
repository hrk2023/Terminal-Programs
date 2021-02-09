#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){
    if(argc > 2)
        printf("ERROR: Too Many Arguments\n");
    else if(argc < 2)
        printf("ERROR: pac accepts one argument but none is given\n");
    else{
        char command[1000] = "mkdir "; 
        strcat(command,argv[1]);
        strcat(command," && cd ");
        strcat(command,argv[1]);
        strcat(command," && touch ");
        strcat(command,argv[1]);
        strcat(command," && vim ");
        strcat(command,argv[1]);
        system(command);
    }
    return 0;
}
