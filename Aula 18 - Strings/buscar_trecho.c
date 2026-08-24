#include <stdio.h> 

int main(){
    int cont = 0, t = 0, i = 0, val = 0;
    char text[101], trec[21];
    scanf("%[^\n]s", text);
    scanf(" %[^\n]s", trec);
    while(trec[t] != '\0'){
        t++;
    }
    while(text[i] != '\0'){
        if(text[i] == trec[0]){
            for(int j = 0; j < t; j++){
                if(trec[j] == text[i + j]){
                    val = 1;
                }else{
                    val = 0;
                    break;
                }
            }
            if(val == 1){
                cont++;
                val = 0;
            }
            
        }
        i++;
    }
    printf("%d\n", cont);
}