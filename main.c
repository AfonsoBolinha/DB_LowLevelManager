#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#define DESCRIPTION_SIZE 19
#define NP_SIZE 4
#define NB_SIZE 4


int main() {

    int fp1=open("db1.pecas", O_RDONLY);
    if(fp1==-1) {
        write(2,"Erro na abertura do arquivo.\n", 30);
        return 1;
    }else{
        char T[1],description[DESCRIPTION_SIZE];
        int NP[NP_SIZE],NB[NB_SIZE],option=0;

        read(fp1,T,1);
        lseek(fp1,0,SEEK_SET);

        while(strcmp((const char *) &option, "9") != 0){
            scanf("%d",&option);
            if(option==1){
                char output[6+DESCRIPTION_SIZE+NP_SIZE+NB_SIZE];

                //Leitura dos 3 campos necessários(Descricao, Numero de Peças e Numero de Marcas)
                read(fp1,description,DESCRIPTION_SIZE);
                read(fp1,NP, NP_SIZE);
                read(fp1,NB, NB_SIZE);

                printf("HEADER %s %d %d\n",description,*NP/256,NB[0]/256);
            }
            if(atoi(T)==0){
                if(option==2){

                }
                if(option==3){

                }
                if(option==4){

                }
            }
            if(atoi(T)==1){
                if(option==2){

                }
            }
        }
    }
}