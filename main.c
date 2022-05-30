#include <stdio.h>
#include "shell.h"
#include "calculator.h"


int main() {
	for (;;) {
		if (figure_selector() == 1) {
			return 0;
			break;
		}
		if (operation_selector() == 1)
			return 0;
		else
			input_figure_dimensions();
	}
	
}

