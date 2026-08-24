#include <stdio.h>

float converte_para_celsius(float f);

int main(){
    float f;
    scanf("%f", &f);
    printf("%f\n", converte_para_celsius(f));

}

float converte_para_celsius(float f){
    return (f - 32) * 5/9;
}