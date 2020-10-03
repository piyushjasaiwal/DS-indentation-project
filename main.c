#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    start:
    FILE *fileptr;
    char filename[100];
    printf("Enter the name of the file you want to check\n");
    scanf("%s",&filename);
    fileptr = fopen(filename,"r");

    if(fileptr == NULL){
        printf("unable to open file\n");
        printf("press any key to continue.........\n");
        getch();
        clrscr();
        goto start;
    }

    
}