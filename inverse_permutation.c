#include <stdio.h>
 
int main()
{
    int n, i;
    scanf("%d", &n);
    int p[n], p1[n];
    for(i = 0; i < n; i++)
    {
      scanf("%d", &p[i]);
      p[i] -= 1;
    }
    for(i = 0; i < n; i++) p1[p[i]] = i;
    for(i = 0; i < n; i++) printf("%d ",p1[i] + 1);
}