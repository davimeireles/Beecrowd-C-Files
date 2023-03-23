#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float n = 3.14159, area, raio;

    scanf("%f",&raio);

    area = n * pow(raio,2) ;

    printf("A=%.4f\n",area);

    return 0;

}