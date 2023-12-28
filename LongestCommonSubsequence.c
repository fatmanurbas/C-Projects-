/*
Verilen iki string i�erisine �ifre olarak yerle�tirilmi� en uzun sekansa sahip ifadeyi bulan algoritma
*/
#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int max(int a, int b) {
    return (a > b) ? a : b;
}

int lcs(char *X, char *Y, int m, int n) {
    int L[m + 1][n + 1];
    int isSelected[m + 1][n + 1];  // her bir harfin se�ilip se�ilmedi�ini belirtmek i�in matris

    int i, j;

    // Matrisleri ba�lang�� de�erleriyle doldurdum
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            L[i][j] = 0;
            isSelected[i][j] = 0;
        }
    }

    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                L[i][j] = 0;
            } else if (X[i - 1] == Y[j - 1]) {
                L[i][j] = L[i - 1][j - 1] + 1;
                isSelected[i][j] = 1;  // E�le�en harfi i�aretledim
            } else {
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
            }
            int k,l;

            // Her sat�r�n i�lemi tamamland���nda matrisleri yazd�rd�m
            if (j == n) {
                printf("Dinamik Programlama Matrisi (Satir %d):\n", i);
                for (k = 0; k <= m; k++) {
                    for (l = 0; l <= n; l++) {
                        printf("%d ", L[k][l]);
                    }
                    printf("\n");
                }

                printf("\nHarfin Secilip Secilmedigini Gosteren Matris (Satir %d):\n", i);
                for (k = 0; k <= m; k++) {
                    for (l = 0; l <= n; l++) {
                        printf("%d ", isSelected[k][l]);
                    }
                    printf("\n");
                }

                printf("\n");
            }
        }
    }

    int index = L[m][n];
    char lcs[index + 1];
    lcs[index] = '\0';

    i = m;
    j = n;
    while (i > 0 && j > 0) {
        if (isSelected[i][j]) {
            lcs[index - 1] = X[i - 1];
            i--;
            j--;
            index--;
        } else if (L[i - 1][j] > L[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    printf("En uzun sekansin boyutu: %d\n", L[m][n]);
    printf("En uzun sekans: %s\n", lcs);
}

int main() {
    char X[MAX_LENGTH], Y[MAX_LENGTH];
    int m, n;

    printf("Ilk stringi girin: ");
    scanf("%s", X);

    printf("Ikinci stringi girin: ");
    scanf("%s", Y);

    m = strlen(X);
    n = strlen(Y);

    lcs(X, Y, m, n);

    return 0;
}

