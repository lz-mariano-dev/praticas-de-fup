#include <stdio.h>

int main(){
    int n, l = 0, j = 0;
    char num[11];
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%s", num);
        j = 0;
        while(num[j] != '\0'){
            switch(num[j]){
                case '1':
                    l += 2;
                    break;
                case '2':
                case '3':
                    l += 5;
                    break;
                case '7':
                    l += 3;
                    break;
                case '8':
                    l += 7;
                    break;
                case '9':
                case '0':
                    l += 6;
                    break;
                default:
                    l += num[j] - 48;
                    break;
            }
            j++;

        }
        printf("%d leds\n", l);
        l = 0;
        
    }
}