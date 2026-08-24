#include <stdio.h>

int main(){
    int l, c;
    scanf("%d %d", &l, &c);
    char m[l + 1][c + 1];
    int count[l + 1][c + 1];

    for(int i = 1; i <= l; i++)
        for(int j = 1; j <= c; j++){
            scanf(" %c", &m[i][j]);
            count[i][j] = 0;
        }

    for(int i = 1; i <= l; i++){
        for(int j = 1; j <= c; j++){
            if(m[i][j] == '*') continue;

            for(int x = i - 1; x <= i + 1; x++){
                for(int y = j - 1; y <= j + 1; y++){
                    if(x < 1 || x > l || y < 1 || y > c) continue;
                    if(m[x][y] == '*') count[i][j]++;
                }
            }
        }
    }

    for(int i = 1; i <= l; i++){
        for(int j = 1; j <= c; j++){
            if(m[i][j] == '*')
                printf("%c", m[i][j]);
            else if(count[i][j] == 0)
                printf("-");
            else
                printf("%d", count[i][j]);
        }
        printf("\n");
    }

    return 0;
}