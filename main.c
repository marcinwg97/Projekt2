#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;
	int iloczyn = 1.0;
	int dzielenie;
	int n;
	printf("Podaj n:");
    scanf("%d", &n);
    printf("Podaj m:");
    scanf("%d", &m);


for(int i=n; i <= 2 * n; i++)
{
    dzielenie = m*i;
    iloczyn = iloczyn * dzielenie;


}
printf("Iloraz to: %d", iloczyn);
    return 0;
}
