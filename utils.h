#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>

void readFile(char *filename, char *buffer, int *len);
void countFrequency(char *buffer, int len, char *chars, int *freq, int *uniqueCount);

#endif
