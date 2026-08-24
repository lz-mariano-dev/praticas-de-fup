#include <stdio.h>
#include <math.h>

//Calculo da distÂncia entre dois pontos no plano cartesiano

int main(){
    float x1, y1, x2, y2, distancia;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("%.2f\n", distancia);

    return 0;
}


/*
Para calcular a raiz quadrada em C, você deve incluir a biblioteca math.h em seu projeto e utilizar a função sqrt() passando como argumento o valor do qual deseja encontrar a raiz.
#include <math.h>
int main() {
    raiz = sqtr(numero);
}
A função pow() da biblioteca math.h é a maneira mais direta de elevar um número a qualquer potência em C. Para elevar um número ao quadrado, basta passar o número como primeiro argumento e 2 como segundo argumento.
#include <math.h>
int main() {
    quadrado = pow(numero, 2);
}
*/