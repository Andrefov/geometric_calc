#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

int readline(char* line, size_t llen);

int figure_selector();
int operation_selector();
int input_figure_dimensions();

int circle_input_verificator(char* line,float *radius);
int rectangle_input_verificator(char* line);
int trapeze_input_verificator(char* line);
int triangle_input_verificator(char* line);


void help_figure_selector();
void help_operation_selector();
void help_input_figure_dimensions();

