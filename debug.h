#ifndef clox_debug_h
#define clox_debug_h

#include "chunk.h"

static int constantInstruction(const char *str, Chunk *chunk, int offset);

void disassembleChunk(Chunk *chunk, const char *name);

int disassembleInstruction(Chunk *chunk, int offset);

static int simpleInstruction(const char *name, int offset);

#endif
