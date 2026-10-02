#include "types.h"
struct Pair_801205F4 { u8 a; s8 b; };

struct Data_801205F4 { u8 pad[0x27]; u8 flags; };

struct Self_801205F4 { u8 pad[0xf0]; void *f0; u8 padf4[0x1a4 - 0xf4]; Pair_801205F4 pairs[3]; u8 pad1aa[0x1dc - 0x1aa]; Data_801205F4 *data; };

struct Ctl_80120568B { char pad[0x18]; };

struct Ctl_80120568 : Ctl_80120568B {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual u32 m64(s32);
};

struct Pl_80120568B { char pad[0x18]; };

struct Pl_80120568 : Pl_80120568B {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual s8 m31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void m56();
    u8 pad[0xF0-0x1C+0x0];
    Ctl_80120568 *ctl;
};

typedef s32 M2C_UNK;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct VBase_8012065C { u8 pad[0x18]; };

struct Player_8012065C : VBase_8012065C {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40();
    virtual u8 v41();
    virtual void v42(); virtual void v43(); virtual void v44(); virtual void v45();
    virtual void v46(); virtual void v47(); virtual void v48(); virtual void v49();
    virtual void v50(); virtual void v51(); virtual void v52(); virtual void v53();
    virtual void v54(); virtual void v55(); virtual void v56();
    virtual void v57();
};

extern "C" {
void apply_model_params__10TObjPlayerFPv(void *);
void TObjPlayer__sub_80015D74(void *, s32, Pair_801205F4 *);
void TObjPlayer__sub_801205F4(Self_801205F4 *self);
void TItemEquipBase__sub_8010A82C(void *);
void clear_equip_flags__10TObjPlayerFPvUi(void *, u32);
void TKeyBoardControl__sub_801AFCF4(void *, s32);
void TObjPlayer__sub_80120568(Pl_80120568 *arg0);
s32 obj_getField1c(s32);
s32 TObjPlayer__sub_8001BEF8(void *, s32);
s32 get_flag_40__8TItemMagFPv(void *);
M2C_UNK spawn_item_timer__13TItemAttackerFiii(void *, void *, s32);
u32 test_flags_1b8__10TObjPlayerFPvUi(void *, u32);
M2C_UNK create__13TItemEffEquipFPvPvPvPvPv(void *, s32, s32, s32, s32);
s32 TItemMag__sub_80113EC8(s32);
s32 get_item_flags__10TObjPlayerFPv(void *);
M2C_UNK set_status_flags__10TObjPlayerFPvUi(void *, u32);
void clear_equip_flags__10TObjPlayerFPvUi(void *, u32);
void TKeyBoardControl__sub_801AFCF4(void *, s32);
s32 reset_key_machine_state__10TObjPlayerFv();
M2C_UNK update_technique_slot__10TTecRaFoieFi(M2C_UNK, s32, s32);
M2C_UNK TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void TObjPlayer__sub_8011E6A4();
extern void *tl_05;
void TObjPlayer__sub_8012065C(Player_8012065C *arg0);
}

extern "C" {

void TObjPlayer__sub_80120568(Pl_80120568 *arg0) {
    if (arg0->ctl->m64(arg0->m31()) == 0) {
        TKeyBoardControl__sub_801AFCF4(arg0->ctl, 0);
    }
    arg0->m56();
    TItemEquipBase__sub_8010A82C(arg0);
    clear_equip_flags__10TObjPlayerFPvUi(arg0, 0x03000000);
}

void TObjPlayer__sub_801205F4(Self_801205F4 *self) {
    s32 i;
    apply_model_params__10TObjPlayerFPv(self);
    if (!(self->data->flags & 8)) {
        for (i = 0; i != 3; i++) {
            TObjPlayer__sub_80015D74(self->f0, i, &self->pairs[i]);
        }
    }
}
void TObjPlayer__sub_8012065C(Player_8012065C *arg0) {
    if (TObjPlayer__sub_8001BEF8((u8 *)arg0 + 0x178, 1) != 0) {
        if (!(get_item_flags__10TObjPlayerFPv(arg0) & 0x20) && reset_key_machine_state__10TObjPlayerFv() != 0) {
            TKeyBoardControl__sub_801AFCF4(M2C_FIELD(arg0, void **, 0xF0), arg0->v41());
        }
        clear_equip_flags__10TObjPlayerFPvUi(arg0, 0x100);
        if (get_flag_40__8TItemMagFPv(arg0) != 0 || TItemMag__sub_80113EC8(M2C_FIELD(arg0, s32 *, 0xF0)) != 0) {
            set_status_flags__10TObjPlayerFPvUi(arg0, 8);
        } else {
            spawn_item_timer__13TItemAttackerFiii(arg0, (void *)&TObjPlayer__sub_8011E6A4, 0x14);
            create__13TItemEffEquipFPvPvPvPvPv(tl_05, obj_getField1c(M2C_FIELD(arg0, s32 *, 0xF0)), 0x30, 0x9D, 0x9E);
            if (test_flags_1b8__10TObjPlayerFPvUi(arg0, 0x200) != 0U) {
                create__13TItemEffEquipFPvPvPvPvPv(tl_05, obj_getField1c(M2C_FIELD(arg0, s32 *, 0xF0)), 0x23, 0x9D, 0x9E);
            }
            update_technique_slot__10TTecRaFoieFi(TBoss3Volopt__sub_8022675C(0x4000B20A, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0), 0x300, 0);
        }
    } else {
        TKeyBoardControl__sub_801AFCF4(M2C_FIELD(arg0, void **, 0xF0), 0);
        set_status_flags__10TObjPlayerFPvUi(arg0, 0x100);
        set_status_flags__10TObjPlayerFPvUi(arg0, 8);
    }
    arg0->v55();
    clear_equip_flags__10TObjPlayerFPvUi(arg0, 0x03000000);
}

}
