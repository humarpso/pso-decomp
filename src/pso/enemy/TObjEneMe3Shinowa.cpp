#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {
void TObjEneMe3Shinowa__sub_800E7630(u8 *arg0);
s32 check_v2_mode__9TObjEneDDFv();
M2C_UNK TBoss8Dragon__sub_800BB780(void *);
int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneMe3Shinowa__vt60(u8 *arg0);
}

extern "C" {

void *TObjEneMe3Shinowa__ct(void *arg0);
void TObjEneMe3Shinowa__sub_800E767C(void);
void TObjEneMe3Shinowa__sub_800E7720(void);
void TObjEneMe3Shinowa__vt61(void* p);
void *__dt__17TObjEneMe3ShinowaFv(void *arg0, s16 arg1);
void copy_position_vector__17TObjEneMe3ShinowaFPv(void* p);
void fn_800E762C(void);
int TObjEneDD__sub_800BBA18(void*, void*);
void TObjEneGibbles__sub_80156720(void *);
int VecCopy__FP3VecPC3Vec(void*, void*);
void __dl__7TObjectFPv(void *);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void __dt__9TObjEneDDFv(void *, int);
void init_common__18TObjEneMe3SinowZoaFPv(void *);
void init_object__9TObjEneDDFPv(void *);
void queue_destruction__7TObjectFv(void *);

void fn_800E762C(void) {  }

void TObjEneMe3Shinowa__sub_800E7630(u8 *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 0x3CC) + (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C)));
}

void copy_position_vector__17TObjEneMe3ShinowaFPv(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x74, (char*)p + 0x2fc); }
void TObjEneMe3Shinowa__sub_800E767C(void) {  }

void TObjEneMe3Shinowa__vt60(u8 *arg0) {
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        TBoss8Dragon__sub_800BB780((void *) (arg0));
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x3C4) & 1) {
        TBoss8Dragon__sub_800BB780((void *) (arg0));
        return;
    }
    if ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xC) {
        TObjEneDD__sub_800BBA18((void*)((void *) (arg0)), (void*)((int) (0xC)));
    }
}

void TObjEneMe3Shinowa__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 13) { TObjEneDD__sub_800BBA18(p, (void*)13); } }
void TObjEneMe3Shinowa__sub_800E7720(void) {  }

extern M2C_UNK __vt__17TObjEneMe3Shinowa[];

void *__dt__17TObjEneMe3ShinowaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneMe3Shinowa;
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3E4));
        M2C_FIELD(arg0, M2C_UNK *, 0x3E4) = 0;
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3E0));
        M2C_FIELD(arg0, M2C_UNK *, 0x3E0) = 0;
        if (M2C_FIELD(arg0, void **, 0x424) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x424)); M2C_FIELD(arg0, M2C_UNK *, 0x424) = 0; }
        if (M2C_FIELD(arg0, void **, 0x428) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x428)); M2C_FIELD(arg0, M2C_UNK *, 0x428) = 0; }
        TObjEneGibbles__sub_80156720(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3E8, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__17TObjEneMe3Shinowa[];
extern void *lbl_805D2AC8;

void *TObjEneMe3Shinowa__ct(void *arg0) {
    init_object__9TObjEneDDFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjEneMe3Shinowa;
    init_common__18TObjEneMe3SinowZoaFPv((void *)((char *)arg0 + 1000));
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2AC8;
    return arg0;
}

}
