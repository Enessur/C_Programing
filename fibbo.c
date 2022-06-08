#include <stdio.h>
int main() {
	
	
	
    int i, n, nextTerm = 0;
    
    
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", nextTerm);
        nextTerm = nextTerm + i ;
      
        
    }

    return 0;
}
