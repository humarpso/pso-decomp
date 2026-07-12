#include "types.h"

extern "C" {

void close_window__16TObjOnlineEndingFPv(void* p);
int TWindow__close(void*);

void close_window__16TObjOnlineEndingFPv(void* p) { if (*(unsigned int*)((char*)p + 0x154) != 0) { TWindow__close(*(void**)((char*)p + 0x154)); *(int*)((char*)p + 0x154) = 0; } }

}
