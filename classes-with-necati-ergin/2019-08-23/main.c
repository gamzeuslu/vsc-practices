#include <stdio.h>
#include <ctype.h>

int main(void) {
    
    for(int i=0; i < 128; ++i) {
        if(ispunct(i)) {
            printf("%3d\t%c\n\n", i, i);

        }
    }
    printf("\n");
}
