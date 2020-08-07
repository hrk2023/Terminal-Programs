#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main( int argc, char *argv[] ){
    if(argc > 2){
        char Initial[30]="git add . && git commit -m ";
        char Last[30]=" && git push origin";
        strcat(Initial,argv[1]);
        strcat(Initial,Last);
        strcat(Initial,argv[2]);
        system(Initial);
    }
    else if (argc > 1 && argc < 3){
        char Initial[30]="git add . && git commit -m ";
        char Last[30]=" && git push origin master";
        strcat(Initial,argv[1]);
        strcat(Initial,Last);
        system(Initial);
    }
    else if( argc < 2 ){
        printf("ERROR: Too Few Arguments\n");
    }
    else if( argc > 3 ){
        printf("ERROR: Too Many Arguments\n");
    }
    return 0;
}
