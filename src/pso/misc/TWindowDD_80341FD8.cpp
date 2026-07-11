#include "types.h"

extern "C" {

void reset_fields__9TWindowDDFPv(void* a0);

    extern const float TWindowDD__data_805DFCA8;
void reset_fields__9TWindowDDFPv(void* a0) { *(float*)((char*)a0 + 0x88) = TWindowDD__data_805DFCA8; *(float*)((char*)a0 + 0x84) = TWindowDD__data_805DFCA8; *(int*)((char*)a0 + 0x68) = 0; *(int*)((char*)a0 + 0x6c) = 0; *(int*)((char*)a0 + 0x8c) = 1; }

}
