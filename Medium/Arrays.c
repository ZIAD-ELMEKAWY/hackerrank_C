#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n , i , m;
    int sum =0;
    scanf("%d",&n);
    for ( i=0 ; i<n ; i++)
    {
        scanf("%d",&m);
        sum = sum+m;
    }
    printf("%d",sum);
    return 0;
}
