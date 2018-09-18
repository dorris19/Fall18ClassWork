#include <stdio.h>

int main() {
	unsigned int x = 1234;

	printf("%u\n", x);
	printf("0x%X\n", x);

	//Bitwise and (&) takes its operands and performs an AND operation
	//bit by bit.
	// x & y
	//   1101
	// & 0110
	//  ------
	//   0100

	unsigned int lowest_byte_of_x = x & 0xFF;
	printf("0x%X\n", lowest_byte_of_x);

	// >> and << are bit shifting operators.

	// shift x to the right 8 bits, which throws away the rightmost 8 bits,
	// and adds 8 0's to the left

	unsigned int second_lowest_byte = (x >> 8) & 0xFF;
	printf("Second lowest byte of x 0x%X\n", second_lowest_byte);

	// Sometimes in C when a function takes multiple boolean flags as options,
	// each option gets represented by a single bit of a number

	#define OPTION_ONE 1
	#define OPTION_TWO 2
	#define OPTION_THREE 4
	#define OPTION_FOUR 8

	unsigned char options = 0;

	// We toggle using bitwise or, which is |

	options = options | OPTION_THREE;
	options = options | OPTION_ONE;
	

	return 0;
}
