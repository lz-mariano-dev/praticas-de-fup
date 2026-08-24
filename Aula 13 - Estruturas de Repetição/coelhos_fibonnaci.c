#include <stdio.h>

int main(){
    long int a = 1, b = 0, c = 1;
    int n, i;
    scanf("%d", &n);
    if(n == 1){
        c = 1;
    }else{
        for(i = 0; i < n - 1; i++){
            c = a + b;
            b = a;
            a = c;
        }
    }
    
    printf("%ld\n", c);
  
    return 0;
}

//typedef tipo_existente novo_nome;