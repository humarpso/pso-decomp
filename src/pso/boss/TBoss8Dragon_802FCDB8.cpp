#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct DelBase_802FD354 { char pad[0x18]; };
struct Del_802FD354 : DelBase_802FD354 {
    virtual ~Del_802FD354();
};

extern "C" {

void __dt__7TObjectFv(void *, s32);
void maybe_delete__15TObjBoss2TunnelFis(void *, s32);
void __dt__9TObjEneDDFv(void *, s32);
void TBoss8Dragon__sub_800BC5A0(void *, s32);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, u32, u32);
void TObjPlayer__sub_800D7C58(void *, s32);
extern M2C_UNK lbl_804E5534[];
extern u8 *TBoss8Dragon__data_805D69AC;

u8 *TBoss8Dragon__sub_802FD354(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E5534;
        if (M2C_FIELD(arg0, Del_802FD354 **, 0x684) != NULL) {
            delete M2C_FIELD(arg0, Del_802FD354 **, 0x684);
            M2C_FIELD(arg0, Del_802FD354 **, 0x684) = NULL;
        }
        if (M2C_FIELD(arg0, void **, 0x680) != NULL) {
            TBoss8Dragon__sub_800BC5A0(M2C_FIELD(arg0, void **, 0x680), 1);
            M2C_FIELD(arg0, void **, 0x680) = NULL;
        }
        if (M2C_FIELD(arg0, Del_802FD354 **, 0x67C) != NULL) {
            delete M2C_FIELD(arg0, Del_802FD354 **, 0x67C);
            M2C_FIELD(arg0, Del_802FD354 **, 0x67C) = NULL;
        }
        TObjEneGibbles__sub_80156720(arg0);
        if (TBoss8Dragon__data_805D69AC == arg0) {
            TBoss8Dragon__data_805D69AC = NULL;
        }
        __destroy_arr(arg0 + 0x6DC, (void *)TObjPlayer__sub_800D7C58, 0x1C, 4);
        maybe_delete__15TObjBoss2TunnelFis(arg0 + 0x610, -1);
        maybe_delete__15TObjBoss2TunnelFis(arg0 + 0x5EC, -1);
        __dt__7TObjectFv(arg0 + 0x3C4, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
