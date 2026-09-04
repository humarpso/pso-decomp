#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOMineTrap__sub_801702C8(void);
void *__dt__10TOMineTrapFv(void *arg0, s16 arg1);
void* get_mine_data_ptr__10TOMineTrapFPv(void* p);
void set_state__10TOMineTrapFPv(void* p);
int TOMineTrap__sub_80170340(void);
int TOMineTrap__sub_80170348(void);
void TOMineTrap__sub_80170350(void);
void TOMineTrap__sub_80170354(void);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
s32 TObjPlayer__sub_80019248(u32 a0 = 0);
M2C_UNK TObjPlayer__sub_80154A00(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__6TOMineFv(void *, M2C_UNK);

void set_state__10TOMineTrapFPv(void* p) { *(s16*)((char*)p + 0x326) = 4; }

void* get_mine_data_ptr__10TOMineTrapFPv(void* p) { return (char*)p + 0x334; }

extern M2C_UNK __vt__10TOMineTrap[];

void *__dt__10TOMineTrapFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TOMineTrap;
        TObjPlayer__sub_80154A00(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__6TOMineFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

s32 TOMineTrap__sub_801702C8(void) { return 0; }

}
