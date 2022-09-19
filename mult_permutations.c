#include <stdio.h>
 
int main()
{
    int n, m, i, j, k, t ;
    scanf ("%d %d", &n, &m);
    int mass[m][n];
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++){
            scanf ("%d", &mass[i][j]);
            mass[i][j] -= 1;
        }
        
/*     for (i = 0; i < m; i++)
        for (j = 0; j < n; j++){
            printf ("%d ", mass[i][j]);
        }   
*/   
    int mass1[n];
    for (j = 0; j < n; j++){
        t = j;
        for (i = 0; i < m; i++){
            k = mass[i][t];
            t = k;
        }
        mass1[j] = k;
    }
        
     for (j = 0; j < n; j++) printf ("%d ", mass1[j] + 1);
        
    return 0;
}