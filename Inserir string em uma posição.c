#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 101

typedef struct string_t {
 char val[MAX];
}string;


void insereStrEm(string *result, string *str1, int pos, string *str2){

    for(int i = 0; i < MAX; i++){
        result->val[i] = '\0';
    }
    
    int tam_str1 = strlen(str1->val);
    int tam_str2 = strlen(str2->val);

    for (int i = 0; i < pos; i++){

        result->val[i] = str1->val[i];
    }

    for (int i = 0; i < tam_str2; i++){

        result->val[i + pos] = str2->val[i];
    }

    for (int i = 0; i < tam_str1 - pos; i++){
        
        result->val[i + pos + tam_str2] = str2->val[i + pos];
    }
    
}


int main(){

    int pos;
    string result, str1, str2;

    
    
    scanf("%[^\n]\n", str1.val);

    scanf("%[^\n]\n", str2.val);

    scanf("%d", &pos);
    
    insereStrEm(&result, &str1, pos, &str2);

    printf("%s", result.val);
    
    
    return 0;
}