#ifndef PSO_CLASS_PACKAGE
#include "pso/TItemLoad.h"

TItemLoad::~TItemLoad() {}
#else
#if PSO_CLASS_PACKAGE == 0x8010F2AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_load__9TItemLoadFPv(u8 *arg0);
M2C_UNK TItemLoad__sub_8010F61C(u32, s32, s32);
M2C_UNK begin_load_if_pending__9TItemLoadFPvii(u32, u32, s32);
s32 TItemLoad__sub_80110740(u32);
u32 TItemLoad__sub_80110748(u32);
s32 TItemLoad__sub_80110750(u32, s32);
s32 update_item__9TItemLoadFPv(u32);

extern u32 lbl_805D549C;
extern u32 lbl_805D54A0;
extern s32 lbl_805D54A4;

void update_load__9TItemLoadFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    s32 var_r31;
    s32 var_r30;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {
    case 1:
        if (((u32) lbl_805D54A0 != 0U) && ((u32) lbl_805D549C != 0U)) {
            TItemLoad__sub_8010F61C(lbl_805D54A0, lbl_805D54A4 + (M2C_FIELD(arg0, s32 *, 0x1C) * 0x2C00), M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, s32 *, 0x20) = 2;
        }
        return;
    case 2:
        if (update_item__9TItemLoadFPv(lbl_805D54A0) == 1) {
            var_r30 = 0;
            var_r31 = 0;
            do {
                temp_r3 = TItemLoad__sub_80110750(lbl_805D54A0, var_r30);
                var_r30 += 1;
                *(s32 *)(arg0 + var_r31 + 0x2C) = temp_r3;
                var_r31 += 4;
            } while (var_r30 != 4);
            M2C_FIELD(arg0, u32 *, 0x3C) = TItemLoad__sub_80110748(lbl_805D54A0);
            M2C_FIELD(arg0, s32 *, 0x40) = TItemLoad__sub_80110740(lbl_805D54A0);
            if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
                M2C_FIELD(arg0, s32 *, 0x20) = 3;
                begin_load_if_pending__9TItemLoadFPvii(lbl_805D549C, M2C_FIELD(arg0, u32 *, 0x3C), M2C_FIELD(arg0, s32 *, 0x28));
                return;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
            return;
        }
        break;
    case 3:
        if (update_item__9TItemLoadFPv(lbl_805D549C) == 1) {
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
        }
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010F3D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemLoad__sub_8010F3D8(void *arg0, s16 arg1);
M2C_UNK reset_ring_state__9TItemLoadFPv(s32);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK free_texture_if_valid(void *, void *);

extern M2C_UNK lbl_8049F3F4[];
extern s32 lbl_805D549C;
extern s32 lbl_805D54A0;

void *TItemLoad__sub_8010F3D8(void *arg0, s16 arg1) {
    s32 temp_r0;
    void **temp_r3;

    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F3F4;
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
        switch (temp_r0) {
        case 2:
            reset_ring_state__9TItemLoadFPv(lbl_805D54A0);
            break;
        case 3:
            reset_ring_state__9TItemLoadFPv(lbl_805D549C);
            break;
        }
        temp_r3 = M2C_FIELD(arg0, void ***, 0x3C);
        if ((temp_r3 != NULL) && ((u32) M2C_FIELD(*temp_r3, u32 *, 8) != 0U)) {
            free_texture_if_valid(temp_r3, *temp_r3);
        }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010F484
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__9TItemLoadFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
void TItemLoad__sub_80110788(void *);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK lbl_8049F3F4[];

void *init__9TItemLoadFPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049F3F4;
    M2C_FIELD(arg0, void **, 0x1C) = arg2;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, void **, 0x28) = arg4;
    TItemLoad__sub_80110788((void *)((char *)arg0 + 44));
    M2C_FIELD(arg0, u32 *, 0x20) = 1;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010F4F0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_all__9TItemLoadFv(void);
M2C_UNK update_state__9TItemLoadFPv(void *);

extern void *lbl_805D549C;
extern void *lbl_805D54A0;

void update_all__9TItemLoadFv(void) {
    void *temp_r3;
    temp_r3 = lbl_805D549C;
    if (temp_r3 != 0) {
        update_state__9TItemLoadFPv(temp_r3);
    }
    temp_r3 = lbl_805D54A0;
    if (temp_r3 != 0) {
        update_state__9TItemLoadFPv(temp_r3);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010F52C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_all_models__9TItemLoadFv(void);
M2C_UNK free__11TOBoss4RockFUi(s32);

extern void *lbl_805D549C;
extern void *lbl_805D54A0;
extern s32 lbl_805D54A4;

struct Base_8010F52C { char pad[0x14]; };
struct VObj_8010F52C : Base_8010F52C {
    virtual void m0(int);
};

void free_all_models__9TItemLoadFv(void) {
    free__11TOBoss4RockFUi(lbl_805D54A4);
    if (lbl_805D54A0 != NULL) {
        ((struct VObj_8010F52C *)lbl_805D54A0)->m0(1);
    }
    if (lbl_805D549C != NULL) {
        ((struct VObj_8010F52C *)lbl_805D549C)->m0(1);
    }
    lbl_805D549C = NULL;
    lbl_805D54A0 = NULL;
    lbl_805D54A4 = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010F7E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *dt__9TItemLoadFPvs(void *arg0, s16 arg1);
M2C_UNK TItemLoad__sub_8010FCB4(void *, M2C_UNK);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_8049F40C[];

void *dt__9TItemLoadFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_8049F40C;
        TItemLoad__sub_8010FCB4(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010F8A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void begin_load_if_pending__9TItemLoadFPvii(void *arg0, s32 arg1, s32 arg2);
void reload_item__9TItemLoadFPv(void *arg0);
s32 begin_load__9TItemLoadFPvi(void *, s32);
M2C_UNK reset_state__9TItemLoadFPv(void *);
M2C_UNK TItemLoad__sub_8010FD80();
M2C_UNK TLobby__sub_8001EE48(s32);
s32 TLobby__sub_8001EEF4();
s32 TLobby__sub_8001EEFC(s32);
M2C_UNK TLobby__sub_803DE084(s32, s32);

void begin_load_if_pending__9TItemLoadFPvii(void *arg0, s32 arg1, s32 arg2) {
    if ((arg1 != 0) && (begin_load__9TItemLoadFPvi(arg0, arg2) == 1)) {
        M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    }
}

extern s32 lbl_805D2BF0;

void reload_item__9TItemLoadFPv(void *arg0) {
    s32 temp_r31;

    if (TLobby__sub_8001EEF4() == 1) {
        temp_r31 = TLobby__sub_8001EEFC(lbl_805D2BF0);
        TItemLoad__sub_8010FD80();
        TLobby__sub_803DE084(temp_r31, M2C_FIELD(arg0, s32 *, 0x24));
        TLobby__sub_8001EE48(lbl_805D2BF0);
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        reset_state__9TItemLoadFPv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010F950
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemLoad__sub_8010F950(void *arg0, s16 arg1);
M2C_UNK TItemLoad__sub_8010FCB4(void *, M2C_UNK);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_8049F41C[];

void *TItemLoad__sub_8010F950(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_8049F41C;
        TItemLoad__sub_8010FCB4(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010F9A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *construct__9TItemLoadFPv(void *arg0);
void init__9TItemLoadFPv(void *);

extern M2C_UNK lbl_8049F41C[];

void *construct__9TItemLoadFPv(void *arg0) {
    init__9TItemLoadFPv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_8049F41C;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010F9EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_ring_state__9TItemLoadFPv(u8 *arg0);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(void *, int);
s32 TObjPlayer__sub_8001BEF8(void *, int);
M2C_UNK clear_id__10TObjPlayerFPv(void *);

extern s32 lbl_805D5498;

void reset_ring_state__9TItemLoadFPv(u8 *arg0) {
    if (TObjPlayer__sub_8001BEF8(arg0 + 0x1C, 4) != 0) {
        lbl_805D5498 = 0;
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x1C, 4);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    clear_id__10TObjPlayerFPv(arg0 + 0x1C);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010FA4C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__9TItemLoadFPv(void *arg0);
M2C_UNK advance_load_state__9TItemLoadFPv();
M2C_UNK update_ring__9TItemLoadFi();

struct Base_8010FA4C { char pad[0x14]; };
struct VObj_8010FA4C : Base_8010FA4C {
    virtual void m0();
    virtual void m1();
};

void update_state__9TItemLoadFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x18);
    switch (temp_r0) {
    case 1:
        advance_load_state__9TItemLoadFPv();
        return;
    case 2:
        update_ring__9TItemLoadFi();
        return;
    case 4:
        ((VObj_8010FA4C *)arg0)->m1();
    case 3:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010FAB4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 begin_load__9TItemLoadFPvi(u8 *arg0, s32 arg1);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(void *, M2C_UNK);

s32 begin_load__9TItemLoadFPvi(u8 *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) == 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = arg1;
        clear_flags__11TAdRicoRingFPvUi(arg0 + 0x1C, 2);
        M2C_FIELD(arg0, s32 *, 0x18) = 1;
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010FB0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void reset_state__9TItemLoadFPv(void *arg0);
void clear_flags__11TAdRicoRingFPvUi(void *, int);
void free_texture__9TItemLoadFPv(void *);
void set_flags__10TObjPlayerFPvUi(void *, int);
s32 TObjPlayer__sub_8001BEF8(void *, int);

extern u32 lbl_805D5498;
struct VOff_8010FB0C_arg0_8010fb0c { char pad_0[0x1C]; char f_1C[1]; };

void reset_state__9TItemLoadFPv(void *arg0) {
    s32 x;
    struct VOff_8010FB0C_arg0_8010fb0c *self = (struct VOff_8010FB0C_arg0_8010fb0c *)arg0;
    free_texture__9TItemLoadFPv(arg0);
    set_flags__10TObjPlayerFPvUi(self->f_1C, 2);
    x = TObjPlayer__sub_8001BEF8(self->f_1C, 4);
    if (x != 0) {
        lbl_805D5498 = 0;
        clear_flags__11TAdRicoRingFPvUi(self->f_1C, 4);
    }
    M2C_FIELD(arg0, u32 *, 0x18) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010FB74
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_ring__9TItemLoadFi(s32 arg0);
M2C_UNK clear_flags__11TAdRicoRingFPvUi(s32, M2C_UNK);
M2C_UNK update_load_state__9TItemLoadFPv(s32);
s32 get_ring_lobby__9TItemLoadFPv();
M2C_UNK set_flags__10TObjPlayerFPvUi(s32, M2C_UNK);

void update_ring__9TItemLoadFi(s32 arg0) {
    s32 temp_r3;

    temp_r3 = get_ring_lobby__9TItemLoadFPv();
    if (temp_r3 != 2) {
        if (temp_r3 == 3) {
            clear_flags__11TAdRicoRingFPvUi(arg0 + 0x1C, 1);
        } else {
            set_flags__10TObjPlayerFPvUi(arg0 + 0x1C, 1);
        }
        update_load_state__9TItemLoadFPv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010FBD4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_load_state__9TItemLoadFPv(u8 *arg0);
M2C_UNK free_texture__9TItemLoadFPv();
s32 TObjPlayer__sub_8001BEF8(void *, int);

void update_load_state__9TItemLoadFPv(u8 *arg0) {
    free_texture__9TItemLoadFPv();
    if (TObjPlayer__sub_8001BEF8(arg0 + 0x1C, 1) != 0) {
        M2C_FIELD(arg0, s32 *, 0x18) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 4;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010FC28
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_load_state__9TItemLoadFPv(u8 *arg0);
M2C_UNK request_load__9TItemLoadFPvi(void *, void *);
u32 load_data__9TItemLoadFPvi(void *, int);
M2C_UNK TItemLoad__sub_801107DC(void *);
M2C_UNK set_flags__10TObjPlayerFPvUi(void *, int);
s32 TObjPlayer__sub_8001BEF8(void *, int);

extern s32 lbl_805D5494;
extern s32 lbl_805D5498;

void advance_load_state__9TItemLoadFPv(u8 *arg0) {
    if (TObjPlayer__sub_8001BEF8((void *) (arg0 + 0x1C), (int) (4)) == 0) {
        if ((s32) lbl_805D5498 != 1) {
            lbl_805D5498 = 1;
            set_flags__10TObjPlayerFPvUi((void *) (arg0 + 0x1C), (int) (4));
            goto block_3;
        }
    } else {
block_3:
        if (load_data__9TItemLoadFPvi((void *) (arg0), (int) (M2C_FIELD(arg0, s32 *, 0x20))) != 0U) {
            TItemLoad__sub_801107DC((void *) (arg0));
            request_load__9TItemLoadFPvi((void *) (arg0), (void *) (lbl_805D5494));
            M2C_FIELD(arg0, s32 *, 0x18) = 2;
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010FD2C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *init__9TItemLoadFPv(void *arg0);
void TItemLoad__sub_8011006C(void *);
void init_forward__10TObjPlayerFPv(void *);
void clear_id__10TObjPlayerFPv(void *);

extern M2C_UNK lbl_8049F42C[];
struct VOff_8010FD2C_arg0_8010fd2c { char pad_0[0x1C]; char f_1C[1]; };

void *init__9TItemLoadFPv(void *arg0) {
    struct VOff_8010FD2C_arg0_8010fd2c *self = (struct VOff_8010FD2C_arg0_8010fd2c *)arg0;
    TItemLoad__sub_8011006C(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = lbl_8049F42C;
    init_forward__10TObjPlayerFPv(self->f_1C);
    M2C_FIELD(arg0, u32 *, 0x18) = 0;
    clear_id__10TObjPlayerFPv(self->f_1C);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010FDC4
#include "types.h"

extern "C" {

void free_boss4_rock__9TItemLoadFv(void);
int free__11TOBoss4RockFUi(void*);

    extern int lbl_805D5494;
void free_boss4_rock__9TItemLoadFv(void) { free__11TOBoss4RockFUi((void*)(lbl_805D5494)); lbl_805D5494 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010FDF0
#include "types.h"

extern "C" {

void alloc_work_buffer__9TItemLoadFv(void);
int alloc_buffer__11TOBoss4RockFPv(void*);

    extern int lbl_805D5494;
    extern int lbl_805D5498;
void alloc_work_buffer__9TItemLoadFv(void) { lbl_805D5494 = alloc_buffer__11TOBoss4RockFPv((void*)24576); lbl_805D5498 = 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010FE20
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 *__dt__9TItemLoadFPvs(s32 *arg0, s16 arg1);
M2C_UNK __dl__FPv(s32 *);
M2C_UNK free__11TOBoss4RockFUi(s32);

s32 *__dt__9TItemLoadFPvs(s32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        free__11TOBoss4RockFUi(*arg0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010FE6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *load_buffer__9TItemLoadFPvUii(void *arg0, u32 arg1, s32 arg2);
M2C_UNK TItemBuff__ct();
s32 TLobby__sub_800F9DF4(u32, s32);
u32 alloc_buffer__11TOBoss4RockFPv(s32);
s32 create_item_buff(s32);
s32 fn_800F7D30(s32, u32, s32);
M2C_UNK destroy__9TItemDropFPvs(M2C_UNK *, M2C_UNK);
s32 TItemDrop__sub_800F9C00(M2C_UNK *);
M2C_UNK construct__9TItemDropFPv(M2C_UNK *);

struct Sp8Buf_8010fe6c {
    s32 field00;
    s32 field04;
    s32 field08;
    s32 field0c;
    s32 field10;
    s32 field14;
    s32 field18;
    u32 field1c;
    s32 field20;
    s32 field24;
    s32 field28;
    s32 field2c;
    s32 field30;
    s32 field34;
    s32 field38;
    s32 field3c;
};

void *load_buffer__9TItemLoadFPvUii(void *arg0, u32 arg1, s32 arg2) {
    struct Sp8Buf_8010fe6c sp8;
    s32 temp_r31;
    s32 temp_r3;

    M2C_FIELD(arg0, u32 *, 0) = 0U;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    if ((arg2 != 0) && (arg1 != 0U)) {
        M2C_FIELD(arg0, u32 *, 0) = alloc_buffer__11TOBoss4RockFPv(arg2);
        temp_r3 = create_item_buff(arg2);
        if ((temp_r3 != 0) && ((u32) M2C_FIELD(arg0, u32 *, 0) != 0U) && (TLobby__sub_800F9DF4(arg1, temp_r3) > 0)) {
            temp_r31 = fn_800F7D30(temp_r3, M2C_FIELD(arg0, u32 *, 0), arg2);
            construct__9TItemDropFPv((M2C_UNK *)&sp8);
            sp8.field1c = M2C_FIELD(arg0, u32 *, 0);
            sp8.field20 = temp_r31;
            M2C_FIELD(arg0, s32 *, 4) = TItemDrop__sub_800F9C00((M2C_UNK *)&sp8);
            destroy__9TItemDropFPvs((M2C_UNK *)&sp8, -1);
        }
        TItemBuff__ct();
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010FF38
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void request_load__9TItemLoadFPvi(void *arg0, s32 arg1);
M2C_UNK TLobby__sub_803CCB5C(s32, s32, s32, void *);

void request_load__9TItemLoadFPvi(void *arg0, s32 arg1) {
    TLobby__sub_803CCB5C(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, s32 *, 0xC), arg1, arg0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010FF68
#include "types.h"

extern "C" {

void free_texture__9TItemLoadFPv(void* p);
int TLobby__sub_803CCE9C(void*);

void free_texture__9TItemLoadFPv(void* p) { if (*(unsigned int*)((char*)p + 0x4) != 0) { TLobby__sub_803CCE9C(*(void**)((char*)p + 0x4)); *(int*)((char*)p + 0x4) = 0; *(int*)((char*)p + 0xc) = 0; } }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8010FFAC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 load_data__9TItemLoadFPvi(void *arg0, s32 arg1);
M2C_UNK free_texture__9TItemLoadFPv();
s32 TLobby__sub_803CC53C(u32);
u32 TLobby__sub_803CD16C(s32, s32);

u32 load_data__9TItemLoadFPvi(void *arg0, s32 arg1) {
    u32 temp_r3;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x10) == 1) {
        free_texture__9TItemLoadFPv();
        M2C_FIELD(arg0, u32 *, 4) = TLobby__sub_803CD16C(M2C_FIELD(arg0, s32 *, 8), arg1);
        temp_r3 = M2C_FIELD(arg0, u32 *, 4);
        if (temp_r3 != 0U) {
            M2C_FIELD(arg0, s32 *, 0xC) = TLobby__sub_803CC53C(temp_r3);
        }
    }
    return M2C_FIELD(arg0, u32 *, 4);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80110010
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemLoad__sub_80110010(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK free_texture__9TItemLoadFPv(M2C_UNK *);

extern M2C_UNK lbl_8049F43C[];

void *TItemLoad__sub_80110010(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK *, 0x14) = (M2C_UNK)lbl_8049F43C;
        free_texture__9TItemLoadFPv((M2C_UNK *)arg0);
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0));
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80110154
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void get_data_entry__9TItemLoadFiPv(s32 arg0, s32 *arg1);
void lookup_item_data__9TItemLoadFiPv(s32 arg0, s32 *arg1);
void get_item_params__9TItemLoadFPvPvPv(s32 *arg0, s32 *arg1, s32 *arg2);
void get_model_ids__9TItemLoadFUcPvPv(u8 arg0, s32 *arg1, s32 *arg2);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, s32);
s32 TObjFish__sub_8001ED9C(s32, M2C_UNK);

extern s32 TItemLoad__data_805D5480;

void get_data_entry__9TItemLoadFiPv(s32 arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = TObjFish__sub_8001EDB0(TItemLoad__data_805D5480, 0);
    }
}

extern s32 TItemLoad__data_805D5480;

void lookup_item_data__9TItemLoadFiPv(s32 arg0, s32 *arg1) {
    if (arg1 != NULL) {
        *arg1 = TObjFish__sub_8001EDC4((s32)(TItemLoad__data_805D5480), (s32)(arg0));
    }
}

extern s32 TItemLoad__data_805D5480;

void get_item_params__9TItemLoadFPvPvPv(s32 *arg0, s32 *arg1, s32 *arg2) {
    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != NULL)) {
        *arg0 = TObjFish__sub_8001EDC4((s32)(TItemLoad__data_805D5480), (s32)(1));
        *arg1 = TObjFish__sub_8001EDB0(TItemLoad__data_805D5480, 0);
        *arg2 = TObjFish__sub_8001ED9C(TItemLoad__data_805D5480, 0);
    }
}

extern s32 TItemLoad__data_805D5480;

void get_model_ids__9TItemLoadFUcPvPv(u8 arg0, s32 *arg1, s32 *arg2) {
    if ((arg1 != NULL) && (arg2 != NULL)) {
        *arg1 = TObjFish__sub_8001EDC4((s32)(TItemLoad__data_805D5480), (s32)(arg0 + 2));
        *arg2 = TObjFish__sub_8001EDB0(TItemLoad__data_805D5480, 0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801104C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801104C4 { char pad[0x18]; };
struct VObj_801104C4 : Base_801104C4 {
    virtual int m0();
    virtual int m1();
};

extern "C" {

void update__9TItemLoadFv(void);
s32 TItemLoad__sub_801107F4(void *);
M2C_UNK update_all__9TItemLoadFv();
M2C_UNK set_parent__7TObjectFP7TObject(void *, u32);

extern void *TItemLoad__data_805D5484;
extern u32 TItemLoad__data_805D5488;

void update__9TItemLoadFv(void) {
    void *temp_r31;

    update_all__9TItemLoadFv();
    if (((void *) TItemLoad__data_805D5484 != NULL) && ((u32) TItemLoad__data_805D5488 != 0U)) {
        temp_r31 = M2C_FIELD(TItemLoad__data_805D5484, void **, 0x14);
        if (temp_r31 != NULL) {
            ((VObj_801104C4 *)temp_r31)->m1();
            if (TItemLoad__sub_801107F4(temp_r31) == 1) {
                set_parent__7TObjectFP7TObject(temp_r31, TItemLoad__data_805D5488);
            }
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80110540
#include "types.h"

extern "C" {

int run_task__9TItemLoadFv(void* p);
int update__9TItemLoadFv(void*);

int run_task__9TItemLoadFv(void* p) { return update__9TItemLoadFv(p); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80110560
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__9TItemLoadFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void disallow_rendering__7TObjectFv(void *);

extern M2C_UNK __vt__9TItemLoad[];
extern void *lbl_805D2BF4;

void *__ct__9TItemLoadFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__9TItemLoad;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2BF4;
    disallow_rendering__7TObjectFv(arg0);
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801105AC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801105AC { char pad[0x18]; };
struct VObj_801105AC : Base_801105AC {
    virtual void m0(s32);
};

extern "C" {

void free_all__9TItemLoadFv(void);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK TLobby__sub_8001FE7C(s32, M2C_UNK);
M2C_UNK free_all_models__9TItemLoadFv();
M2C_UNK free_boss4_rock__9TItemLoadFv();

extern s32 TItemLoad__data_805D5480;
extern void *TItemLoad__data_805D5484;
extern void *TItemLoad__data_805D5488;
extern s32 TItemLoad__data_805D548C;
extern s32 lbl_805D5490;

void free_all__9TItemLoadFv(void) {
    free__11TOBoss4RockFUi(TItemLoad__data_805D548C);
    if ((void *) TItemLoad__data_805D5484 != NULL) {
        ((VObj_801105AC *)TItemLoad__data_805D5484)->m0(1);
    }
    if ((void *) TItemLoad__data_805D5488 != NULL) {
        ((VObj_801105AC *)TItemLoad__data_805D5488)->m0(1);
    }
    TLobby__sub_8001FE7C(TItemLoad__data_805D5480, 1);
    lbl_805D5490 = 0;
    TItemLoad__data_805D5480 = 0;
    TItemLoad__data_805D5484 = NULL;
    TItemLoad__data_805D5488 = NULL;
    TItemLoad__data_805D548C = 0;
    free_all_models__9TItemLoadFv();
    free_boss4_rock__9TItemLoadFv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011070C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void create__9TItemLoadFv(void);
M2C_UNK __ct__9TItemLoadFv(void *, s32);
void * __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_05;

void create__9TItemLoadFv(void) {
    void *obj = __nw__7TObjectFUl(0x1C);
    if (obj != 0) {
        __ct__9TItemLoadFv(obj, tl_05);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80110740
#include "types.h"

extern "C" {

s32 TItemLoad__sub_80110740(void* p);
s32 TItemLoad__sub_80110748(void* p);
int update_item__9TItemLoadFPv(void* p);
void TItemLoad__sub_801107B4(void);
int get_ring_lobby__9TItemLoadFPv(void* p);
s32 TItemLoad__sub_801107DC(void* p);
s32 TItemLoad__sub_801107E4(void* p);
void* TItemLoad__sub_801107EC(void* p);
int TItemLoad__sub_801107F4(void* p);
int TObjPlayer__sub_8001BEF8(void*, int);
int TLobby__sub_803CC4C0(void*);

s32 TItemLoad__sub_80110740(void* p) { return *(s32*)((char*)p + 0x3c); }
s32 TItemLoad__sub_80110748(void* p) { return *(s32*)((char*)p + 0x28); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80110760
#include "types.h"

extern "C" {

s32 TItemLoad__sub_80110740(void* p);
s32 TItemLoad__sub_80110748(void* p);
int update_item__9TItemLoadFPv(void* p);
void TItemLoad__sub_801107B4(void);
int get_ring_lobby__9TItemLoadFPv(void* p);
s32 TItemLoad__sub_801107DC(void* p);
s32 TItemLoad__sub_801107E4(void* p);
void* TItemLoad__sub_801107EC(void* p);
int TItemLoad__sub_801107F4(void* p);
int TObjPlayer__sub_8001BEF8(void*, int);
int TLobby__sub_803CC4C0(void*);

int update_item__9TItemLoadFPv(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x1c, 2); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801107B4
#include "types.h"

extern "C" {

s32 TItemLoad__sub_80110740(void* p);
s32 TItemLoad__sub_80110748(void* p);
int update_item__9TItemLoadFPv(void* p);
void TItemLoad__sub_801107B4(void);
int get_ring_lobby__9TItemLoadFPv(void* p);
s32 TItemLoad__sub_801107DC(void* p);
s32 TItemLoad__sub_801107E4(void* p);
void* TItemLoad__sub_801107EC(void* p);
int TItemLoad__sub_801107F4(void* p);
int TObjPlayer__sub_8001BEF8(void*, int);
int TLobby__sub_803CC4C0(void*);

void TItemLoad__sub_801107B4(void) {  }
int get_ring_lobby__9TItemLoadFPv(void* p) { return TLobby__sub_803CC4C0(*(void**)((char*)p + 0x4)); }
s32 TItemLoad__sub_801107DC(void* p) { return *(s32*)((char*)p + 0xc); }
s32 TItemLoad__sub_801107E4(void* p) { return *(s32*)((char*)p + 0x1c); }
void* TItemLoad__sub_801107EC(void* p) { return (char*)p + 0x2c; }
int TItemLoad__sub_801107F4(void* p) { return *(u32*)((char*)p + 0x20) == 0; }

}
#endif
#endif
