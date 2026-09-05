#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TItemObject__vt34(u8 *arg0);
}

extern "C" {

void *__dt__11TItemObjectFv(void *arg0, s16 arg1);
s32 call_dispatch__11TItemObjectFi(s32 arg0);
int TLobby__send_and_handle_60(void*);
void __dt__5TItemFv(void *, int);
int bswap_16__FPUs(void* a0 = 0);
void bswap_and_send_item__10TObjPlayerFPv(void* p);
void bswap_fields_x4__10TObjPlayerFPv(void* p);
void free_obj_heap__10TObjPlayerFPv(void *);
s32 get_item_flags__10TObjPlayerFPv(void* p);
u16 get_type_id__10TObjPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void* a0 = 0);
void set_type_bytes__10TObjPlayerFPv(void* p);

s32 (*TLobby__sub_8010440C())(s32);

s32 call_dispatch__11TItemObjectFi(s32 arg0) {
    if (arg0 != 0) {
        s32 (*fp)(s32) = TLobby__sub_8010440C();
        return fp(arg0);
    }
    return 0;
}

extern M2C_UNK __vt__11TItemObject[];

void *__dt__11TItemObjectFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TItemObject;
        __dt__5TItemFv(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}
s32 TItemObject__vt34(u8 *arg0) {
    return M2C_FIELD(arg0, s32 *, 0xFC) ^ (s32) (arg0 + 0xFC);
}

}
