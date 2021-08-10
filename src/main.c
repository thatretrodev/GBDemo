#include <gb/gb.h>
#include <stdint.h>
#include <stdio.h>

void clear_text() {
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
}

void main() {
	int frame_counter = 0;

	printf("____________________\nGBDemo\n - by thatretrodev\n____________________\n");
	while (1) {
		if (frame_counter > 150) {
			clear_text();
		}
		wait_vbl_done();
		frame_counter++;
	}
}
