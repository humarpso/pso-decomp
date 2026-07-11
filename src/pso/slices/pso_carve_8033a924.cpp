#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 fn_8007EBFC(s32);
int fn_8007EBB4(void*);
int memset(void*, void*, void*);
void fn_8033A928(void* p);
void clear_buffer(void* p);
void fn_8033A924(void);

void fn_8033A924(void) {  }
void fn_8033A928(void* p) { if (*(unsigned int*)((char*)p + 0x20) != 0) { fn_8007EBB4(*(void**)((char*)p + 0x20)); *(int*)((char*)p + 0x20) = 0; *(int*)((char*)p + 0x1c) = 0; } }
void clear_buffer(void* p) { if (*(unsigned int*)((char*)p + 0x20) != 0) { memset(*(void**)((char*)p + 0x20), (void*)0, *(void**)((char*)p + 0x1c)); } }
void fn_8033A9A4(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x20) == 0U) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 0x16000;
        M2C_FIELD(arg0, u32 *, 0x20) = fn_8007EBFC(M2C_FIELD(arg0, s32 *, 0x1C));
    }
}

}
