#ifndef UTIL_H
#define UTIL_H

#include "types.h"
#include "strings/string.h"

void memcpy(char* source, char* dest, int nbytes);
void memset(uint8_t* dest, uint8_t val, uint32_t len);
void int_to_ascii(int n, char str[]);
int str_to_int(string ch);
void * malloc(int nbytes);

#endif