#include <stdio.h>

int main(){
    int i = 0, j = 0;
    char str[101];
    char cons[101];
    scanf("%[^\n]s", str);
    while(str[i] != '\0'){
        switch(str[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c", str[i]);
                break;
            default:
                if(str[i] != ' '){
                    cons[j] = str[i];
                    j++;
                }  
        }
        i++;
    }
    printf("\n");
    for(i = 0; i < j; i++){
        printf("%c", cons[i]);
    }
    printf("\n");
    
}