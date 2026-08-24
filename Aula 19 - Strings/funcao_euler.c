#include <stdio.h>

double fatorial(int f);
double euler(int v);

int main(){
    int n;
    scanf("%d", &n);
    printf("%lf\n", euler(n));
    

}

double fatorial(int f){
    double fat = 1;
    for(int i = 1; i <= f; i++){
        fat *= i;
    }
    return fat;
}

double euler(int v){
    double e = 1;
    for(int i = v; i >= 1; i--){
        e += 1/fatorial(i);
    }
    return e;
};