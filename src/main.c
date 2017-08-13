/*-------------------------------------------------------
 * Actividad de Programación Avanzada: kata 5 - Arrays: Left Rotation
 * Fecha: 13-10-2016
 * Autor:
 *      A01064215 Rodrigo Reyes Murillo
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, d, i; 
    scanf("%d %d",&n,&d);
    int *a = malloc(sizeof(int) * n);
    int *b = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
       b[i] = a[i];
    }
    for (i = 0; i < n; i++)
	{
		a[(n+i-d) % n] = b[i];
	}
    for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
    return 0;
}