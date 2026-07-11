#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_802E1DF8(s32 a0 = 0, s32 a1 = 0);
s32 fn_8023F18C(void);
s32 fn_8023F160(void);
s32 fn_8023ED04(void);
s32 fn_80226328(void);
s32 fn_802261E0(s16 a0 = 0);
s32 fn_8022614C(s32 a0 = 0);
s32 fn_80132E58(u8 a0 = 0);
void * TAdSinglePlyChrSelectGC__sub_8001ED80(void);
void TAdSinglePlyChrSelectGC__sub_802E195C(void* p, void* a1, void* a2, void* a3, void* a4);
int TAdSinglePlyChrSelectGC__sub_802E1A04(void*, void*, void*, void*, void*);
int TAdSinglePlyChrSelectGC__sub_802E1A8C(void*, void*, void*, void*, void*);
int TAdSinglePlyChrSelectGC__sub_802E1BF4(void*);
int TAdSinglePlyChrSelectGC__sub_802E18C8(void);
int TKeyBoardControl__sub_8000F9CC(void*);

int TAdSinglePlyChrSelectGC__sub_802E18C8(void) { return TKeyBoardControl__sub_8000F9CC((void*)(0)); }
void TAdSinglePlyChrSelectGC__sub_802E18EC(s32 arg0) {
    void *temp_r3;

    temp_r3 = TAdSinglePlyChrSelectGC__sub_8001ED80();
    if (temp_r3 == NULL) {
        TAdSinglePlyChrSelectGC__sub_802E1DF8(arg0, 1);
        return;
    }
    fn_80132E58(M2C_FIELD(temp_r3, u8 *, 7));
    fn_802261E0(M2C_FIELD(temp_r3, s16 *, 4));
    fn_8022614C(M2C_FIELD(temp_r3, s8 *, 6));
    fn_80226328();
    fn_8023F160();
    fn_8023F18C();
    fn_8023ED04();
}
void TAdSinglePlyChrSelectGC__sub_802E195C(void* p, void* a1, void* a2, void* a3, void* a4) { TAdSinglePlyChrSelectGC__sub_802E1BF4(p); TAdSinglePlyChrSelectGC__sub_802E1A04(p, a1, a2, a3, a4); }
void TAdSinglePlyChrSelectGC__sub_802E19B0(void* p, void* a1, void* a2, void* a3, void* a4) { TAdSinglePlyChrSelectGC__sub_802E1BF4(p); TAdSinglePlyChrSelectGC__sub_802E1A8C(p, a1, a2, a3, a4); }

}
