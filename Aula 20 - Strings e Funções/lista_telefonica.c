#include <stdio.h>
void verif_ord(char x[], char y[]);

int main(){
    char str1[101];
    char str2[101];
    scanf("%[^\n]s", str1);
    scanf(" %[^\n]s", str2);
    verif_ord(str1, str2);

}

void verif_ord(char x[], char y[]){
    int i = 0;
    int v = 1;
    if(x == y){
        v = 0;
        printf("atual\n");
    }
    
    while(v){
        if(x[i] < y[i]){
            printf("depois\n");
            v = 0;
            break;
        }else if(x[i] > y[i]){
            printf("antes\n");
            v = 0;
            break;
        }
        i++;
    }
}