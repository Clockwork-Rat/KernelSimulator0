#ifndef INPUT_H
#define INPUT_H

#include <stdint.h>
#include <string.h>
#include <stdio.h>

typedef struct system {
    uint16_t memory;
    uint16_t ops;
} system;

int read_system_specs( char *filein, system *system );
int read_programs( char *filein );

#endif