#include <stdio.h>
#include <string.h>

void palindromo(char frase[]){
    int j = 0;
    char inverso[100],semespaco[100];
    for(int i = 0 ; i<strlen(frase); i++){
        if(frase[i] == ' '){
            continue;
        }
        semespaco[j] = frase[i];
        j++;
    }
    semespaco[j] = '\0';
    
    int igualdade = 1;
    for(int i = 0; i <strlen(semespaco)-2 ;i++){
        if(semespaco[i] != semespaco[strlen(semespaco)-2 - i]){
            igualdade = 0;
        }
    }   
    if( igualdade == 0){
        printf("O texto %s não é palíndromo", frase);
    }
    if(igualdade == 1){
       printf("O texto %s é palíndromo", frase);
    }   
}

int main(){
    int j=10,i=0,x=0, t;
    char frase[101],espacos[101],c;
    gets(frase);
    palindromo(frase);
       
    return 0;
}
