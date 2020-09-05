#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int i = 0, j = 0, n = 0, k = 0;
    scanf("%d", &n);
    k = (2 * n) - 1;

    for (i = 1; i <= k; i++) {

        for (j = 1; j <= k; j++) {

            if (i <= n) {
                if (j <= i || j > k - i) {
                    printf("*");
                }
                else printf(" ");
            }
            else if (i > n) {
                if (j <= k - i + 1 || j >= i) {
                    printf("*");

                }
                else printf(" ");
            }
        }
        printf("\n");
    }

}