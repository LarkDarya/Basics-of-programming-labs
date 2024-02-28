#include <stdio.h>
#include "vectorVoid.c"

int main() {
    size_t n;
    scanf("%zd", &n);
    
    vectorVoid v = createVectorV(0, sizeof(int));
    
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        
        pushBackV(&v, &x);
    }
    
    for (int i = 0; i < n; i++) {
        int x;
        
        getVectorValueV(&v, i, &x);
        
        printf("%d ", x);
    }
    
    return 0;
}


