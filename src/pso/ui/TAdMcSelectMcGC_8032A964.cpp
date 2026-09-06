#include "pso/TAdMcSelectMcGC.h"

TAdMcSelectMcGC::~TAdMcSelectMcGC() {}

#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TLobby__sub_803DA16C(void *, M2C_UNK);
extern int TAdMcSelectMcGC__data_805D6C98;
void TAdMcSelectMcGC__sub_8032AA54(void);
}

extern "C" {

s32 TAdMcSelectMcGC__sub_8032AAC4(void* p);
void init_memorycard__15TAdMcSelectMcGCFv(void);
int TLobby__sub_8023E4B4(void*, void*);

    extern unsigned char lbl_80477150[];
    extern unsigned char lbl_804ED9CC[];
    extern int TAdMcSelectMcGC__data_805D6C98;

void TAdMcSelectMcGC__sub_8032AA54(void) {
    u8 *temp_r4;
    if ((void **) (*(void ** *)&TAdMcSelectMcGC__data_805D6C98) != NULL) {
        temp_r4 = (u8 *)(*(*(void ** *)&TAdMcSelectMcGC__data_805D6C98));
        if ((u32) M2C_FIELD(temp_r4, u32 *, 8) != 0U) {
            TLobby__sub_803DA16C((*(void ** *)&TAdMcSelectMcGC__data_805D6C98), (s32) temp_r4);
        }
    }
}

void init_memorycard__15TAdMcSelectMcGCFv(void) { TAdMcSelectMcGC__data_805D6C98 = (int)lbl_804ED9CC; TLobby__sub_8023E4B4(lbl_80477150, lbl_804ED9CC); }

s32 TAdMcSelectMcGC__sub_8032AAC4(void* p) { return *(s32*)((char*)p + 0x20); }

}
