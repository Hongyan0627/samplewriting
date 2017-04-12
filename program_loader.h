/*
 *     Hongyan Wang
 *     April 8th, 2016
 *
 *     summary: Interface for loader for UM 
 */

#ifndef PROGRAM_LOADER_H_INCLUDED
#define PROGRAM_LOADER_H_INCLUDED

#include <stdio.h>
#include "seg.h"

/* 
 * given a valid filepointer and the number of instructions in file, will
 * return a Seg_T with the program loaded into segment 0. It is an unchecked 
 * runtime error for the number of words to be incorrect, even by a byte. It is
 * a checked runtime error for fp to be NULL.
 */
Seg_T initial_load_program(FILE *fp, uint32_t numWords);

#endif


