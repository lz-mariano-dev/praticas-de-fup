#include <stdio.h>

int main(){
    char x, y, op, result;
    scanf("%c %c %c", &x, &op, &y);
    switch(op){
        case '+':
            result = (x + y) - 97;
            if(result > 122){result -= 26;}
        break;
        case '-':
            result = (x - y) + 97;
            if(result < 97){result += 26;}
        break;
    }
    
   
    printf("%c\n", result);
}