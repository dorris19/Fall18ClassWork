#include <stdio.h>
// stdint.h provides uint32_t, a guaranteed 32-bit unsigned integer type
#include <stdint.h>  


int main() {
    printf("Enter a non-negative integer: ");
    // x is an unsigned 32-bit integer
    uint32_t x;
    // %u is the conversion specification for an unsigned int
    scanf("%u", &x);

    printf("decimal: %u\n", x);
    // %X prints the hex representation but not the 0x prefix, thus 0x%X
    printf("hex:     0x%X\n", x);

    printf("binary:  ");
    for(int i = 31; i>=0; i--){
        printf("%d", (x >> i) & 1);
    }
    printf("\n");
    // TODO: Add your code here
    printf("individual bytes, from most to least significant:\n");
    for(int i = 3; i >= 0; i--){
         unsigned int byte = (x >> i*8) & 0xFF;
         printf("0x%02X\n", byte);
    }
    return 0;
}
