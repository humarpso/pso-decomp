#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TItem__vt16(void);
void TItem__sub_80101DB8(void);

void TItem__vt16(void) {  }
void TItem__sub_80101DB8(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x80100508
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_owner__5TItemFPvi(void *arg0, s32 arg1);
void apply_switch_attack__5TItemFPvi(void *arg0, s32 arg1);
void TItem__sub_801005D8(void);
s32 PPCSync();
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 get_id__13TItemProArmorFPv(void *);
void TItem__sub_801005DC(void);
void TItem__sub_801005E0(void);
int TItem__sub_801005E4(void);
s32 TLobby__sub_80101AB0();
s32 TOComputerMachine01__sub_8023DDC8(s32, s32, s32, s32, s32);
s32 spawn_particle_effect_with_flags(s32, s32, s32);
s32 set_owner_id__13TParticleCtrlFPvUs(s32, s32);
u16 TObjPlayer__sub_80100474(void* p);
s8 TObjPlayer__sub_80102C30();
s32 test_flag_2000000__10TObjPlayerFPv(u32);

void notify_owner__5TItemFPvi(void *arg0, s32 arg1) {
    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (test_flag_2000000__10TObjPlayerFPv(M2C_FIELD(arg0, u32 *, 0xF0)) == 0)) {
        TBoss3Volopt__sub_8022675C(arg1, M2C_FIELD(arg0, u32 *, 0xF0) + 0x38, 0, 0);
    }
}
void apply_switch_attack__5TItemFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;

    if (((u32) M2C_FIELD(arg0, u32 *, 0xF0) != 0U) && (test_flag_2000000__10TObjPlayerFPv(M2C_FIELD(arg0, u32 *, 0xF0)) == 0)) {
        temp_r3 = spawn_particle_effect_with_flags(M2C_FIELD(arg0, u32 *, 0xF0) + 0x2FC, arg1, 0x10);
        if (temp_r3 != 0) {
            set_owner_id__13TParticleCtrlFPvUs(temp_r3, get_id__13TItemProArmorFPv(arg0));
        }
    }
}
void TItem__sub_801005D8(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801005DC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TOComputerMachine01__sub_8023DDC8(s32, s32, s32, s32, s32);
s32 PPCSync();
s32 test_flag_2000000__10TObjPlayerFPv(u32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 spawn_particle_effect_with_flags(s32, s32, s32);
s32 set_owner_id__13TParticleCtrlFPvUs(s32, s32);
s32 get_id__13TItemProArmorFPv(void *);
s32 TLobby__sub_80101AB0();
s8 TObjPlayer__sub_80102C30();
u16 TObjPlayer__sub_80100474(void* p);
void TItem__sub_801005D8(void);
void TItem__sub_801005DC(void);
void TItem__sub_801005E0(void);
int TItem__sub_801005E4(void);

void TItem__sub_801005DC(void) {  }
void TItem__sub_801005E0(void) {  }
int TItem__sub_801005E4(void) { return 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80100648
#include "types.h"

extern "C" {

void TItem__sub_80100648(void);

void TItem__sub_80100648(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80100674
#include "types.h"

extern "C" {

void TItem__sub_80100674(void);
void TItem__sub_80100678(void);
void TItem__sub_8010067C(void);
int TItem__sub_80100680(void);
void TItem__sub_80100688(void);
void TItem__sub_8010068C(void);
void TItem__sub_80100690(void);
void TItem__sub_80100694(void);
void TItem__sub_80100698(void);

void TItem__sub_80100674(void) {  }
void TItem__sub_80100678(void) {  }
void TItem__sub_8010067C(void) {  }
int TItem__sub_80100680(void) { return 0; }
void TItem__sub_80100688(void) {  }
void TItem__sub_8010068C(void) {  }
void TItem__sub_80100690(void) {  }
void TItem__sub_80100694(void) {  }
void TItem__sub_80100698(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80100758
#include "types.h"

extern "C" {

void TItem__sub_80100758(void);
void TItem__sub_8010075C(void);
void update_pickup_flag__5TItemFi(s32 arg0);
void TItem__sub_801007A8(void);
void TItem__sub_801007AC(void);
void TItem__sub_801007B0(void);
s32 set_flag_1024__11TItemObjectFPv(s32);
s32 check_flag_400__20TWindowSubStatusDispFv();
s32 TItem__sub_800FFE70(s32);

void TItem__sub_80100758(void) {  }
void TItem__sub_8010075C(void) {  }
void update_pickup_flag__5TItemFi(s32 arg0) {
    if (check_flag_400__20TWindowSubStatusDispFv() != 0) {
        set_flag_1024__11TItemObjectFPv(arg0);
        return;
    }
    TItem__sub_800FFE70(arg0);
}
void TItem__sub_801007A8(void) {  }
void TItem__sub_801007AC(void) {  }
void TItem__sub_801007B0(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80100B8C
#include "types.h"

extern "C" {

int TItem__sub_80100B8C(void* p);
int TItem__sub_80100A40(void*);

int TItem__sub_80100B8C(void* p) { return TItem__sub_80100A40((char*)p + 0x38); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801013BC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_item_data__5TItemFPv(void *arg0);
void TItem__sub_801013E8(void *arg0);
void TItemData__sub_8010CC68(void *);
void TItemData__sub_8010DF68(void *);
void copy_to_item_data__5TItemFPvPv(void *, void *);

void update_item_data__5TItemFPv(void *arg0) {
    M2C_UNK sp8[4];

    copy_to_item_data__5TItemFPvPv(arg0, &sp8);
    TItemData__sub_8010CC68(&sp8);
}

void TItem__sub_801013E8(void *arg0) {
    M2C_UNK sp8[4];

    copy_to_item_data__5TItemFPvPv(arg0, &sp8);
    TItemData__sub_8010DF68(&sp8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80101414
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy__5TItemFPv(void* p);
void copy_item_data_and_process__5TItemFPv(void *arg0);
int TItem__sub_80101B20(void*);
void copy_to_item_data__5TItemFPvPv(void *, void *);
int disallow_rendering__7TObjectFv(void*);
void get_item_price_if_valid__24TShopEquipmentSellWindowFUi(void *);
int queue_destruction__7TObjectFv(void*);

void destroy__5TItemFPv(void* p) { TItem__sub_80101B20(p); disallow_rendering__7TObjectFv(p); queue_destruction__7TObjectFv(p); }

void copy_item_data_and_process__5TItemFPv(void *arg0) {
    M2C_UNK sp8[4];

    copy_to_item_data__5TItemFPvPv(arg0, &sp8);
    get_item_price_if_valid__24TShopEquipmentSellWindowFUi(&sp8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80101580
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void claim_ownership__5TItemFii(s32 arg0, s32 arg1);
M2C_UNK set_item_count__6TLobbyFPvs(s32, s32);
s32 TLobby__sub_80103AD4();
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(s32, M2C_UNK, M2C_UNK);
M2C_UNK reset_photon_effect__10TObjPlayerFPv(s32);
u16 obj_getField1c();

void claim_ownership__5TItemFii(s32 arg0, s32 arg1) {
    if ((u16) obj_getField1c() == 0xFFFF) {
        set_item_count__6TLobbyFPvs(arg0, TLobby__sub_80103AD4());
        reset_photon_effect__10TObjPlayerFPv(arg0);
        if (arg1 != 0) {
            clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801015EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_mode__5TItemFPvc(void *arg0, s8 arg1);

M2C_UNK TItem__sub_80101514(void *);
M2C_UNK claim_ownership__5TItemFii(void *, M2C_UNK);

void set_mode__5TItemFPvc(void *arg0, s8 arg1) {
    if (arg1 == 3) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 0;
    }
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 0;
        claim_ownership__5TItemFii(arg0, 0);
    } else {
        TItem__sub_80101514(arg0);
    }
    M2C_FIELD(arg0, s8 *, 0xEB) = arg1;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80101658
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 register_attack__5TItemFPv(void *arg0);
M2C_UNK TItemData__sub_8010E59C(M2C_UNK *, s32);
M2C_UNK copy_to_item_data__5TItemFPvPv(void *, M2C_UNK *);
s32 TItemAttacker__sub_80103548(M2C_UNK);

s32 register_attack__5TItemFPv(void *arg0) {
    M2C_UNK sp8[8];
    s32 temp_r3;

    copy_to_item_data__5TItemFPvPv(arg0, sp8);
    temp_r3 = TItemAttacker__sub_80103548(0);
    TItemData__sub_8010E59C(sp8, temp_r3);
    return temp_r3;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801016A4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void calc_display_grade__5TItemFPv(void *arg0);
void calc_display_grade__9TItemDataFPv(void *);
void copy_to_item_data__5TItemFPvPv(void *, void *);

void calc_display_grade__5TItemFPv(void *arg0) {
    M2C_UNK sp8[4];

    copy_to_item_data__5TItemFPvPv(arg0, &sp8);
    calc_display_grade__9TItemDataFPv(&sp8);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80101CEC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80101CFC { char pad[0x18]; };
struct VObj_80101CFC : Base_80101CFC {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(void *);
};

extern "C" {

void TItem__sub_80101CEC(void);
void TItem__sub_80101CF0(void);
void TItem__sub_80101CF4(void);
void TItem__sub_80101CF8(void);
s32 copy_to_item_data__5TItemFPvPv(void *arg0, void *arg1);
M2C_UNK TItemData__sub_8010B848(void *, s8);
M2C_UNK TItemData__sub_8010C498(void *);
M2C_UNK TItemData__sub_8010C638(void *, u16);
M2C_UNK init__9TItemDataFv(void *);

void TItem__sub_80101CEC(void) {  }
void TItem__sub_80101CF0(void) {  }
void TItem__sub_80101CF4(void) {  }
void TItem__sub_80101CF8(void) {  }

struct TItemDataX_80101cfc;

s32 copy_to_item_data__5TItemFPvPv(void *arg0, void *arg1) {
    struct TItemDataX_80101cfc *item = (struct TItemDataX_80101cfc *)arg1;
    struct VObj_80101CFC *o = (struct VObj_80101CFC *)arg0;
    if (item != NULL) {
        init__9TItemDataFv(item);
        M2C_FIELD(item, u8 *, 0) = (u8) M2C_FIELD(o, u8 *, 0xEC);
        M2C_FIELD(item, u8 *, 1) = (u8) M2C_FIELD(o, u8 *, 0xED);
        M2C_FIELD(item, u8 *, 2) = (u8) M2C_FIELD(o, u8 *, 0xEE);
        M2C_FIELD(item, s32 *, 0xC) = (s32) M2C_FIELD(o, s32 *, 0xD8);
        o->m16(item);
        if (M2C_FIELD(o, s32 *, 0xDC) & 0x100) {
            TItemData__sub_8010C638(item, M2C_FIELD(o, u16 *, 0xE8));
        }
        if (M2C_FIELD(o, s32 *, 0xDC) & 0x400) {
            TItemData__sub_8010C498(item);
            TItemData__sub_8010B848(item, (s8) M2C_FIELD(o, u8 *, 0xEA));
        }
        return 1;
    }
    return 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80101ED4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_owner__5TItemFPvUs(void *arg0, u16 arg1);
M2C_UNK TItem__sub_80101E7C(void *, u16);
M2C_UNK get_player_by_client_id(int);
s32 TObjPlayer__sub_80019248();
s32 TLobby__sub_8011AF58(u16);

void init_owner__5TItemFPvUs(void *arg0, u16 arg1) {
    get_player_by_client_id(arg1);
    if (TObjPlayer__sub_80019248() != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == -1) {
            M2C_FIELD(arg0, s32 *, 0xC) = TLobby__sub_8011AF58(arg1);
        }
        TItem__sub_80101E7C(arg0, arg1);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80102088
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void assign_id_and_init__5TItemFPvii(void *arg0, s32 arg1, s32 arg2);
void send_field_state__5TItemFisi(s32 arg0, s16 arg1, s32 arg2);
void handle_pickup__5TItemFiiUi(s32 arg0, s32 arg1, u32 arg2);
M2C_UNK set_mode__5TItemFPvc(s32, M2C_UNK);
M2C_UNK TItem__sub_80101FEC(void *, s32, s32);
M2C_UNK send_field_state_if_active__10TObjPlayerFii(s32, M2C_UNK);
u32 TObjPlayer__sub_801B8E68(u32, s32);
s32 get_current_floor();
M2C_UNK spawn_particle_effect(s32, M2C_UNK);
s32 get_field_d8__10TObjPlayerFPv();
M2C_UNK TLobby__sub_8011AA44(s32, s32);
s32 TLobby__sub_8011AF58(s32);
M2C_UNK set_flag8__6TLobbyFPv(s32);

void assign_id_and_init__5TItemFPvii(void *arg0, s32 arg1, s32 arg2) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == -1) {
        M2C_FIELD(arg0, s32 *, 0xC) = TLobby__sub_8011AF58(arg1);
    }
    TItem__sub_80101FEC(arg0, arg1, arg2);
}

void send_field_state__5TItemFisi(s32 arg0, s16 arg1, s32 arg2) {
    if (arg1 == get_current_floor()) {
        spawn_particle_effect(arg0 + 0x38, 0x9B);
        send_field_state_if_active__10TObjPlayerFii(arg2, 0x52802);
    }
}

void handle_pickup__5TItemFiiUi(s32 arg0, s32 arg1, u32 arg2) {
    TLobby__sub_8011AA44(arg1, get_field_d8__10TObjPlayerFPv());
    if ((arg2 != 0U) && (TObjPlayer__sub_801B8E68(arg2, arg0) != 0U)) {
        set_mode__5TItemFPvc(arg0, 1);
        set_flag8__6TLobbyFPv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801023A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8010319C(s32);
s32 submit_cursor_candidate(void *, s32);
void TItem__sub_80102420(void);

void update_timer__5TItemFPv(void *arg0) {
    s16 temp_r3;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x60);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (temp_r4 + 0x200);
    if (fn_8010319C((s32) arg0) != 0) {
        temp_r3 = M2C_FIELD(arg0, s16 *, 0xE6);
        if (temp_r3 == 0x384) {
            M2C_FIELD(arg0, u16 *, 0x94) = 0xFFFF;
            M2C_FIELD(arg0, s16 *, 0xE6) = 0;
        } else {
            M2C_FIELD(arg0, s16 *, 0xE6) = (s16) (temp_r3 + 1);
        }
    }
    submit_cursor_candidate(arg0, -1);
}
void TItem__sub_80102420(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80102864
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__5TItemFv(void *arg0, s16 arg1);
M2C_UNK set_mode__5TItemFPvc(void *, M2C_UNK);
M2C_UNK TItem__sub_80101B20(void *);
M2C_UNK free_obj_heap__10TObjPlayerFPv(void *);
M2C_UNK clear_obj_links(void *);
M2C_UNK destroy_particle_controller__10TObjPlayerFPvs(void *, M2C_UNK);

extern void *__vt__5TItem[];

void *__dt__5TItemFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__5TItem;
        set_mode__5TItemFPvc(arg0, 3);
        clear_obj_links(arg0);
        TItem__sub_80101B20(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801031C0
#include "types.h"

extern "C" {

void TItem__sub_801031C0(void* p);

void TItem__sub_801031C0(void* p) { *(s32*)((char*)p + 0x0) = 4; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80115D68
#include "types.h"

extern "C" {

void TItem__sub_80115D68(void);
u8 TItemObject__sub_80115D7C(void* p);

void TItem__sub_80115D68(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8011892C
#include "types.h"

extern "C" {

void TItem__sub_8011892C(void);

void TItem__sub_8011892C(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80363AF4
#include "types.h"

extern "C" {

void push_to_player_list__5TItemFPv(void* a0);
int push_to_list__10TObjPlayerFPvi(void*, void*);

    extern int lbl_805D6FBC;
void push_to_player_list__5TItemFPv(void* a0) { push_to_list__10TObjPlayerFPvi((void*)(lbl_805D6FBC), a0); }

}
#endif
#endif
