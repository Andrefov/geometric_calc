#include "shell.h"
int selected_figure;
int selected_operation;

// 0 circle
// 1 rectangle
// 2 triangle
// 3 trapeze

void help_figure_selector() {
	printf("select figure by typing it's name: circle, rectangle, triangle, trapeze\n");
	printf("type exit for quit, or help to display this message\n\n");
}

void help_operation_selector() {
	printf("select calulating function to proceed: perimeter, field.\n");
	printf("type exit for quit, or help to display this message\n\n");
}
void help_input_figure_dimensions() {
	if (selected_figure == 0) {
		printf("input width of radius ex: 10.\n");
		printf("type exit for quit, or help to display this message\n\n");
	}
	else if (selected_figure == 1) {
		printf("input width of 4 sides, each separated with coma ex: 10.1, 20.3, 10.1, 20.3\n");
		printf("type exit for quit, or help to display this message\n\n");
	}
	else if (selected_figure == 2) {
		printf("input width of 3 sides, each separated with coma ex: 10, 20.5, 20\n");
		printf("type exit for quit, or help to display this message\n\n");
	}
	else if (selected_figure == 3) {
		printf("input width of 4 sides, each separated with coma ex: 20.7, 7, 15.25, 7\n");
		printf("type exit for quit, or help to display this message\n\n");
	}
	else
		printf("something is wrong...");
}

int readline(char* line, size_t llen) {
	line[llen - 1] = 0xaa;

	if (fgets(line, llen, stdin) == NULL) {
		printf("critical error\n");
		return -1;
	}

	if (line[llen - 1] == "\0" && line[llen - 2] == "\n") {
		printf("critical error\n");
		return -1;
	}
	line[strlen(line) - 1] = '\0';
}
int figure_selector(){
	help_figure_selector();

	for (;;) {
		char line[100];

		if (readline(line, sizeof(line)) == 0) {
			continue;
		}
		else if (strncmp(line, "circle", 6) == 0) {
			selected_figure = 0;
			return 0;
		}
		else if (strncmp(line, "rectangle", 9) == 0) {
			selected_figure = 1;
			return 0;
		}
		else if (strncmp(line, "triangle", 8) == 0) {
			selected_figure = 2;
			return 0;
		}
		else if (strncmp(line, "trapeze", 7) == 0) {
			selected_figure = 3;
			return 0;
		}
		else if (strncmp(line, "exit", 4) == 0) {
			return 0;
		}
		else if (strncmp(line, "help", 4) == 0) {
			help_figure_selector();
			continue;
		}
		else
			printf("invalid input, try again or type help\n");
	}
}

int operation_selector() {
	help_operation_selector();
	for (;;) {
		char line[100];

		if (readline(line, sizeof(line)) == 0) {
			continue;
		}
		else if (strncmp(line, "perimeter", 9) == 0) {
			selected_operation = 0;
			break;
		}
		else if (strncmp(line, "field", 5) == 0) {
			selected_operation = 1;
			break;
		}
		else if (strncmp(line, "exit", 4) == 0) {
			break;
		}
		else if (strncmp(line, "help", 4) == 0) {
			help_operation_selector();
			continue;
		}
		else
			printf("invalid input, try again or type help\n");
	}
}

int input_figure_dimensions() {
	help_input_figure_dimensions();
	for (;;) {
		char line[100];
		float side_a = 0;

		if (readline(line, sizeof(line)) == 0) {
			continue;
		}

		else if(selected_figure == 0 && circle_input_verificator(line, &side_a) == 0){
			float perimeter_ = circle_calculate_perimeter(side_a);
			printf("The perimeter of a circle with radius = %5.2lf is %5.2lf\n", side_a, perimeter_);
			return 0;
		}
	}

}

int circle_input_verificator(char *line, float *radius) {

	float radius_ = atof(line);

	if (radius_ == 0 || radius_ < 0) {
		printf("invalid input, try again or type help\n");
		return -1;
	}
	else {
		*radius = radius_;
		return 0;
	}
}
	