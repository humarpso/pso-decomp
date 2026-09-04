#include "types.h"
extern "C" {
s32 GXGetTexObjFmt(void* p);
s32 GXGetTexObjFmt(void* p);
}

extern "C" {

s32 GXGetTexObjFmt(void* p) { return *(s32*)((char*)p + 0x14); }

}
