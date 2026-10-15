#include "types.h"
#include <stddef.h>

namespace part0 {

#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define PADV virtual void CAT(f,__LINE__)();
struct Base_A_80213788 { char pad[0x18]; };
struct V_A_80213788 : Base_A_80213788 {
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m7(s32, s32);
    virtual s32 m8();
};
struct Base_A_8021383c_80213788 { char pad[0x18]; };
struct V_A_8021383c_80213788 : public Base_A_8021383c_80213788 {
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void m7(int, int);
    virtual s32 m8();
};
struct Base_802138F0_80213788 { char pad[0x18]; };
struct VObj_802138F0_80213788 : Base_802138F0_80213788 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(s32, s32);
    virtual s32 m8();
};

struct VBase_18_97738d { char pad[0x18]; };

struct VObj_18_97738d : VBase_18_97738d {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual s32 m7(s32, s32);
};

struct Stack_80213B18 {
    f32 sp8;
    f32 spC;
};

struct RecoveredGlobal_80213CCC_lbl_804C9740 { s32 value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_80213CCC_lbl_804C9740_size[sizeof(RecoveredGlobal_80213CCC_lbl_804C9740) == 0x38 ? 1 : -1];

struct RecoveredGlobal_80213CCC_lbl_80513E70 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80213CCC_lbl_80513E70_size[sizeof(RecoveredGlobal_80213CCC_lbl_80513E70) == 0x10 ? 1 : -1];

struct Seq_80213D84 {
    s32 f0; u8 pad4[0x14]; void *vt; s32 f1c; s32 f20; s32 f24; u8 pad28[4]; s32 f2c; s32 f30; s32 f34; s32 f38; s32 f3c;
};

struct VBase_18_80213BE0 { char pad[0x18]; };

struct VObj_80213BE0 : VBase_18_80213BE0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
};

struct Seq_80213BE0 : VObj_80213BE0 {
    u32 pad1c;
    u32 state;
};

struct Base_80213980 { char pad[0x18]; };

struct V_80213980 : Base_80213980 {
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m7(s32, s32);
    virtual s32 m8();
};

struct Obj_80213980 : V_80213980 { char pad1c[0x14]; s32 state; s32 f34; s32 thread; };

extern "C" {
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
u32 create_message_window__13TShopSequenceFPvii(void *, s32, s32);
s32 get_window_layout_position(int, f32);
extern const f32 lbl_805DC658;
extern const f32 lbl_805DC65C;
void THunterGuildSeqOffline__sub_80213B18(u8 *arg0);
s32 queue_destruction__7TObjectFv(int);
s32 close_message_window__13TShopSequenceFPv(void *);
s32 __dt__13TShopSequenceFv(void *, int);
s32 TShopWindowBase__sub_8022397C(void *);
s32 __dl__7TObjectFPv(void *);
s32 TWindow__close(int);
extern RecoveredGlobal_80213CCC_lbl_804C9740 __vt__28THunterGuildSeqOnline_Client;
extern RecoveredGlobal_80213CCC_lbl_80513E70 lbl_80513E70;
extern s32 hunter_guild_seq_online_client_instance;
u8 *__dt__28THunterGuildSeqOnline_ClientFv(u8 *arg0, s16 arg1);
extern RecoveredGlobal_80213CCC_lbl_80513E70 lbl_80513E70;
void THunterGuildSeqOffline__sub_80213CA4(void);
extern RecoveredGlobal_80213CCC_lbl_80513E70 lbl_80513E70;
void clear_slots__22THunterGuildSeqOfflineFv(void);
u8 *TShopSequence__ct(u8 *);
s32 TShopWindowBase__sub_8022397C(void *);
extern RecoveredGlobal_80213CCC_lbl_804C9740 __vt__28THunterGuildSeqOnline_Client;
extern RecoveredGlobal_80213CCC_lbl_80513E70 lbl_80513E70;
extern s32 THunterGuildSeqOnline_Client__name;
extern s32 hunter_guild_seq_online_client_instance;
Seq_80213D84 *THunterGuildSeqOnline_Client__ct(Seq_80213D84 *arg0, s32 arg1, s32 arg2);
void THunterGuildSeqOffline__sub_80213B18(u8 *arg0);
void handle_close__22THunterGuildSeqOfflineFPv(void *arg0);
void update_close_shop__22THunterGuildSeqOfflineFPv(void *arg0);
void update_shop_close__22THunterGuildSeqOfflineFPv(void *arg0);
void open_judgment_item_window__22THunterGuildSeqOfflineFPv(void *);
void handle_confirm_window__22THunterGuildSeqOfflineFPv(void *);
void THunterGuildSeqOffline__sub_80213BE0(Seq_80213BE0 *arg0);
s32 is_quest_active();
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
s32 create_quest_thread(s32);
s32 get_register__12TQuestThreadFPvi(s32, s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
extern s32 THunterGuildSeqOffline__quest_result_callbacks[];
extern s32 quest_mission_manager;
void THunterGuildSeqOffline__sub_80213980(Obj_80213980 *self);
}

extern "C" {

void handle_close__22THunterGuildSeqOfflineFPv(void *arg0);
void reset_random_enemies_mode(void);
void restore_and_init_quest_list__22THunterGuildSeqOfflineFPv(void *arg0);
void update_close_shop__22THunterGuildSeqOfflineFPv(void *arg0);
void update_shop_close__22THunterGuildSeqOfflineFPv(void *arg0);
s32 set_service_counter_camera(void *, s32);
int TKeyBoardControl__sub_8000F950(void);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
int clear_counter__6TLobbyFv(void);
s32 restore_player_state__13TShopSequenceFPv();
s32 set_field_20__12TQuestListVMFPvi(void *, s32);

void update_shop_close__22THunterGuildSeqOfflineFPv(void *arg0) {
    void *temp_r3;

    temp_r3 = *(void **)((s8 *)arg0 + 0x38);
    if (temp_r3 != NULL) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 1) {
            *(u32 *)((s8 *)arg0 + 0x38) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A_80213788 *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A_80213788 *) arg0)->m7(0xC, 1);
            *(s32 *)((s8 *)arg0 + 0x34) = 1;
            set_field_20__12TQuestListVMFPvi(arg0, 0xC);
        }
    }
}

void update_close_shop__22THunterGuildSeqOfflineFPv(void *arg0) {
    void *p = *(void **)((s8 *)arg0 + 0x38);
    if (p != 0) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(p) == 0) {
            *(u32 *)((s8 *)arg0 + 0x38) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A_8021383c_80213788 *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A_8021383c_80213788 *) arg0)->m7(0xC, 1);
            *(s32 *)((s8 *)arg0 + 0x34) = 1;
            set_field_20__12TQuestListVMFPvi(arg0, 0xC);
        }
    }
}

void handle_close__22THunterGuildSeqOfflineFPv(void *arg0) {
    if ((((VObj_802138F0_80213788 *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        ((VObj_802138F0_80213788 *)arg0)->m7(0xC, 1);
        *(s32 *)((s8 *)arg0 + 0x34) = 0;
        set_field_20__12TQuestListVMFPvi(arg0, 0xC);
    }
}

void THunterGuildSeqOffline__sub_80213980(Obj_80213980 *self) {
    if (self->m8() == 0) {
        return;
    }
    switch (self->state) {
    case 1:
        return;
    case 0:
        if (is_quest_active() != 0) {
            if (get_register__12TQuestThreadFPvi(quest_mission_manager, 0xFF) != 0) {
                self->m7(0xB, 1);
                if (THunterGuildSeqOffline__quest_result_callbacks[1] != -1) {
                    self->thread = create_quest_thread(THunterGuildSeqOffline__quest_result_callbacks[1]);
                }
                set_field_20__12TQuestListVMFPvi((void *)(self), (s32)(4));
            } else if (get_register__12TQuestThreadFPvi(quest_mission_manager, 0xFD) != 0) {
                self->m7(0x12, 1);
                if (THunterGuildSeqOffline__quest_result_callbacks[0] != -1) {
                    self->thread = create_quest_thread(THunterGuildSeqOffline__quest_result_callbacks[0]);
                }
                set_field_20__12TQuestListVMFPvi((void *)(self), (s32)(5));
            } else {
                self->m7(2, 1);
                set_field_20__12TQuestListVMFPvi((void *)(self), (s32)(6));
            }
        } else if (TShopWindowBase__sub_80223A48(self) != 0 || TShopWindowBase__sub_802239EC(self) != 0) {
            self->m7(0x15, 1);
            set_field_20__12TQuestListVMFPvi((void *)(self), (s32)(0xB));
        }
        break;
    }
}

void THunterGuildSeqOffline__sub_80213B18(u8 *arg0) {
    Stack_80213B18 stack;
    stack.sp8 = lbl_805DC658;
    stack.spC = lbl_805DC65C;
    create_message_window__13TShopSequenceFPvii(arg0, get_window_layout_position((int) (0x2C), (f32) (lbl_805DC658)), (s32) &stack.sp8);
    ((VObj_18_97738d *)(arg0))->m7(1, 1);
    *(s32 *)((s8 *)arg0 + 0x30) = 0;
    set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(2));
}

void restore_and_init_quest_list__22THunterGuildSeqOfflineFPv(void *arg0) {
    restore_player_state__13TShopSequenceFPv();
    *(s32 *)((s8 *)arg0 + 0x2C) = set_service_counter_camera(arg0, 1);
    set_field_20__12TQuestListVMFPvi(arg0, 1);
}

    extern int evt2_random_enemies_mode;

void THunterGuildSeqOffline__sub_80213BE0(Seq_80213BE0 *arg0) {
    switch (arg0->state) {
    case 0: arg0->m10(); break;
    case 1: THunterGuildSeqOffline__sub_80213B18((u8 *)(arg0)); break;
    case 2: THunterGuildSeqOffline__sub_80213980((Obj_80213980 *)(arg0)); break;
    case 11: handle_close__22THunterGuildSeqOfflineFPv(arg0); break;
    case 4: update_close_shop__22THunterGuildSeqOfflineFPv(arg0); break;
    case 5: update_shop_close__22THunterGuildSeqOfflineFPv(arg0); break;
    case 6: open_judgment_item_window__22THunterGuildSeqOfflineFPv(arg0); break;
    case 7: handle_confirm_window__22THunterGuildSeqOfflineFPv(arg0); break;
    case 12: arg0->m11(); break;
    case 14: return;
    }
}

void clear_slots__22THunterGuildSeqOfflineFv(void) {
    s32 i;
    for (i = 0; i < 4; i++) ((s32 *)&lbl_80513E70)[i] = 0;
}

void THunterGuildSeqOffline__sub_80213CA4(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&lbl_80513E70)[i] = 0;
    }
}

u8 *__dt__28THunterGuildSeqOnline_ClientFv(u8 *arg0, s16 arg1) {
    u32 temp_r3;
    u32 temp_r3_2;
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &__vt__28THunterGuildSeqOnline_Client.value;
        temp_r3 = *(u32 *)((s8 *)arg0 + 0x2C);
        if (temp_r3 != 0U) {
            queue_destruction__7TObjectFv((int) (temp_r3));
            *(u32 *)((s8 *)arg0 + 0x2C) = 0U;
        }
        close_message_window__13TShopSequenceFPv((void *) (arg0));
        temp_r3_2 = *(u32 *)((s8 *)arg0 + 0x3C);
        if (temp_r3_2 != 0U) {
            TWindow__close((int) (temp_r3_2));
            *(u32 *)((s8 *)arg0 + 0x3C) = 0U;
        }
        *(s32 *)((s8 *)(&lbl_80513E70.value) + (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 0;
        hunter_guild_seq_online_client_instance = 0;
        __dt__13TShopSequenceFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

#pragma push
#pragma opt_propagation off
Seq_80213D84 *THunterGuildSeqOnline_Client__ct(Seq_80213D84 *arg0, s32 arg1, s32 arg2) {
    s32 one;
    TShopSequence__ct((u8 *)arg0);
    arg0->vt = ((u8 *)&__vt__28THunterGuildSeqOnline_Client);
    one = 1;
    arg0->f0 = THunterGuildSeqOnline_Client__name;
    arg0->f20 = 0;
    arg0->f24 = arg2;
    arg0->f2c = 0;
    arg0->f30 = 0;
    arg0->f34 = 0;
    arg0->f3c = 0;
    arg0->f38 = 0;
    {
        s32 idx = TShopWindowBase__sub_8022397C(arg0);
        (*(void * *)&hunter_guild_seq_online_client_instance) = arg0;
        ((s32 *)&lbl_80513E70)[idx] = one;
    }
    return arg0;
}
#pragma pop

void reset_random_enemies_mode(void) { clear_counter__6TLobbyFv(); evt2_random_enemies_mode = 0; TKeyBoardControl__sub_8000F950(); }

}

}

namespace part1 {

extern "C" {

struct Base_80213E64_80213E38 { char pad[0x18]; };
struct VObj_80213E64_80213E38 : Base_80213E64_80213E38 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};

void THunterGuildSeqOffline__sub_80213E64(void);
void set_random_enemies_mode(void);
int TKeyBoardControl__sub_8000F950(void);
int set_enemy_mode_flag__6TLobbyFv(void);
s32 set_field_20__12TQuestListVMFPvi(void *, s32);

    extern int evt2_random_enemies_mode;
void set_random_enemies_mode(void) { set_enemy_mode_flag__6TLobbyFv(); evt2_random_enemies_mode = 2; TKeyBoardControl__sub_8000F950(); }

extern struct VObj_80213E64_80213E38 *offline_quest_list_vm;

void THunterGuildSeqOffline__sub_80213E64(void) {
    if (offline_quest_list_vm != NULL) {
        offline_quest_list_vm->m7(6, 1);
        set_field_20__12TQuestListVMFPvi(offline_quest_list_vm, 0xC);
        *(s32 *)((s8 *)offline_quest_list_vm + 0x34) = 2;
    }
}

}

}

namespace part2 {

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32, s32);
};
extern "C" {
s32 TQuestVmDownLoadServer__sub_8006EF6C(int);
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
void reset_quest_list_vm__22THunterGuildSeqOfflineFv(void);
}

extern "C" {

void THunterGuildSeqOffline__sub_80213EBC(void);
s32 set_field_20__12TQuestListVMFPvi(void *, s32);

struct Base_80213EBC { char pad[0x18]; };
struct VObj_80213EBC : Base_80213EBC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};
extern struct VObj_80213EBC *offline_quest_list_vm;

void THunterGuildSeqOffline__sub_80213EBC(void) {
    if (offline_quest_list_vm != NULL) {
        offline_quest_list_vm->m7(0xC, 1);
        set_field_20__12TQuestListVMFPvi(offline_quest_list_vm, 0xA);
        *(s32 *)((s8 *)offline_quest_list_vm + 0x34) = 2;
    }
}
void reset_quest_list_vm__22THunterGuildSeqOfflineFv(void) {
    if ((void *) (*(u8 * *)&offline_quest_list_vm) != NULL) {
        ((VObj_18 *)((*(u8 * *)&offline_quest_list_vm)))->m5(TQuestVmDownLoadServer__sub_8006EF6C((int) (0x43)), 1);
        set_field_20__12TQuestListVMFPvi((void *)((void *) ((*(u8 * *)&offline_quest_list_vm))), (s32)((int) (9)));
        *(s32 *)((s8 *)(*(u8 * *)&offline_quest_list_vm) + 0x34) = 0;
    }
}

}

}

namespace part3 {

extern "C" {

struct Base_80213F78 { char pad[0x18]; };
struct VObj_80213F78 : Base_80213F78 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(int, int);
};

void THunterGuildSeqOffline__sub_80213F78(void);
s32 set_field_20__12TQuestListVMFPvi(void *, s32);

extern struct VObj_80213F78 *offline_quest_list_vm;

void THunterGuildSeqOffline__sub_80213F78(void) {
    if (offline_quest_list_vm != NULL) {
        offline_quest_list_vm->m7(0xC, 1);
        set_field_20__12TQuestListVMFPvi(offline_quest_list_vm, 9);
        *(s32 *)((s8 *)offline_quest_list_vm + 0x34) = 0;
    }
}

}

}

namespace part4 {

struct Base_80213FD0 { char pad[0x18]; };
struct VObj_80213FD0 : Base_80213FD0 {
    virtual int m0();
    virtual int m1();
    virtual int m2();
    virtual int m3();
    virtual int m4();
    virtual int m5();
    virtual int m6();
    virtual int m7(int, int);
    virtual int m8();
};

extern "C" {

void confirm_and_close_if_valid__15TShopWindowBaseFPv(void *arg0);
int set_field_20__12TQuestListVMFPvi(void *, int);
int TShopWindowBase__sub_802239EC(void *);
int TShopWindowBase__sub_80223A48(void *);

void confirm_and_close_if_valid__15TShopWindowBaseFPv(void *arg0) {
    VObj_80213FD0 *o = (VObj_80213FD0 *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48(arg0) != 0 || TShopWindowBase__sub_802239EC(arg0) != 0)) {
        o->m7(0xc, 1);
        set_field_20__12TQuestListVMFPvi(arg0, 0xc);
    }
}

}

}

namespace part5 {

struct VBase_18_80214058 { char pad[0x18]; };

struct VObj_80214058 : VBase_18_80214058 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(s32, s32);
};

struct Seq_80214058 : VObj_80214058 {
    u8 pad1c[8];
    s32 f24;
};

struct List_80214058 { u8 pad[0x28]; void *f28; void *f2c; void *f30; void *f34; };

extern "C" {
void set_field_20__12TQuestListVMFPvi(void *, int);
void *TQuestListOnline__ct(void *, void *, void *, void *);
void *__nw__7TObjectFUl(u32);
void THunterGuildSeqOffline__sub_80213E64(void);
void THunterGuildSeqOffline__sub_80213EBC(void);
void reset_quest_list_vm__22THunterGuildSeqOfflineFv(void);
void THunterGuildSeqOffline__sub_80213F78(void);
extern s32 tl_05;
void fn_80214058(Seq_80214058 *arg0);
}

extern "C" {

void fn_80214058(Seq_80214058 *arg0) {
    List_80214058 *l;
    void *e;
    l = (List_80214058 *)__nw__7TObjectFUl(0x70);
    if (l != 0) {
        l = (List_80214058 *)TQuestListOnline__ct(l, (void *)tl_05, arg0, (void *)arg0->f24);
    }
    if (l != 0) {
        arg0->m7(4, 1);
        l->f28 = (void *)THunterGuildSeqOffline__sub_80213F78;
        l->f2c = (void *)THunterGuildSeqOffline__sub_80213EBC;
        l->f30 = (void *)THunterGuildSeqOffline__sub_80213E64;
        l->f34 = (void *)reset_quest_list_vm__22THunterGuildSeqOfflineFv;
        set_field_20__12TQuestListVMFPvi(arg0, 0xE);
    }
}

}

}

namespace part6 {

struct Base_80214104 { char pad[0x18]; };

struct Seq_80214104 : Base_80214104 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8();
    u8 pad1c[8];
    void *player;
    u8 pad28[0xC];
    s32 mode;
    u8 pad38[4];
    void *child;
};

extern "C" {
void *obj_getField1c(void *);
void queue_destruction__7TObjectFv(void *);
s32 is_quest_active();
void init__22THunterGuildSeqOfflineFPvPvPv(void *, s32, void (*)(void));
void send_quest_menu_closed__9TProtocolFv(s32);
void THunterGuildSeqOffline__sub_8021E180(void *);
void close_window__13TShopSequenceFPv(void *);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
void *__nw__7TObjectFUl(u32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
void reset_random_enemies_mode(void);
void set_random_enemies_mode(void);
extern s32 TLobby__protocol_instance;
extern s32 tl_00;
void handle_random_enemies_choice__6TLobbyFPv(Seq_80214104 *self);
}

extern "C" {

void handle_random_enemies_choice__6TLobbyFPv(Seq_80214104 *self) {
    void *mem;
    if (self->child != NULL) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(self->child) != 0) return;
        self->child = NULL;
    }
    if (self->m8() == 0) return;
    switch (self->mode) {
    case 0:
        if (TShopWindowBase__sub_80223A48(self) == 0 && TShopWindowBase__sub_802239EC(self) == 0) return;
        if (is_quest_active() == 0) {
            send_quest_menu_closed__9TProtocolFv(TLobby__protocol_instance);
        }
        close_window__13TShopSequenceFPv(self);
        queue_destruction__7TObjectFv(self);
        break;
    case 1:
        mem = __nw__7TObjectFUl(0x28);
        if (mem != NULL) init__22THunterGuildSeqOfflineFPvPvPv(mem, tl_00, reset_random_enemies_mode);
        THunterGuildSeqOffline__sub_8021E180(obj_getField1c(self->player));
        close_window__13TShopSequenceFPv(self);
        queue_destruction__7TObjectFv(self);
        break;
    case 2:
        mem = __nw__7TObjectFUl(0x28);
        if (mem != NULL) init__22THunterGuildSeqOfflineFPvPvPv(mem, tl_00, set_random_enemies_mode);
        THunterGuildSeqOffline__sub_8021E180(obj_getField1c(self->player));
        close_window__13TShopSequenceFPv(self);
        queue_destruction__7TObjectFv(self);
        break;
    }
}

}

}

namespace part7 {

struct VBase_18_97738d { char pad[0x18]; };

struct VObj_18_97738d : VBase_18_97738d {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual s32 m7(s32, s32);
};

struct RecoveredGlobal_80214254_THunterGuildSeqOffline__data_80513DC8 {
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
void set_field_20__12TQuestListVMFPvi(void *, s32);
s32 create_quest_thread(s32);
void TWindow__close(void *);
s32 get_selected_menu_value(void *);
extern RecoveredGlobal_80214254_THunterGuildSeqOffline__data_80513DC8 THunterGuildSeqOffline__quest_result_callbacks;
void fn_80214254(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_80214254_THunterGuildSeqOffline__data_80513DC8_size[sizeof(RecoveredGlobal_80214254_THunterGuildSeqOffline__data_80513DC8) == 0x10 ? 1 : -1];
void fn_80214254(u8 *arg0) {
    s32 temp_r3_2;
    u8 *temp_r3;
    u8 *temp_r3_3;
    temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x38));
    if ((temp_r3 != NULL) && (is_visible__17TWindowSubComCardFPv(temp_r3) != 0)) {
        temp_r3_2 = get_selected_menu_value(*(u8 **)((s8 *)arg0 + 0x38));
        switch (temp_r3_2) {
        case 0:
            TWindow__close(*(u8 **)((s8 *)arg0 + 0x38));
            *(u8 **)((s8 *)arg0 + 0x38) = NULL;
            ((VObj_18_97738d *)(arg0))->m7(9, 1);
            *(s32 *)((s8 *)arg0 + 0x34) = 1;
            if ((s32) *(s32 *)((s8 *)(&THunterGuildSeqOffline__quest_result_callbacks.value) + 8) != -1) {
                *(s32 *)((s8 *)arg0 + 0x3C) = create_quest_thread(*(s32 *)((s8 *)(&THunterGuildSeqOffline__quest_result_callbacks.value) + 8));
            }
            set_field_20__12TQuestListVMFPvi(arg0, 0xC);
            break;
        case 1:
            TWindow__close(*(u8 **)((s8 *)arg0 + 0x38));
            *(u8 **)((s8 *)arg0 + 0x38) = NULL;
            ((VObj_18_97738d *)(arg0))->m7(0xA, 1);
            *(s32 *)((s8 *)arg0 + 0x34) = 0;
            set_field_20__12TQuestListVMFPvi(arg0, 0xC);
            break;
        }
    }
    temp_r3_3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x38));
    if ((temp_r3_3 != NULL) && (get_status_flag__17TWindowSubComCardFPv(temp_r3_3) != 0)) {
        TWindow__close(*(u8 **)((s8 *)arg0 + 0x38));
        *(u8 **)((s8 *)arg0 + 0x38) = NULL;
        ((VObj_18_97738d *)(arg0))->m7(0xA, 1);
        *(s32 *)((s8 *)arg0 + 0x34) = 0;
        set_field_20__12TQuestListVMFPvi(arg0, 0xC);
    }
}

}

}

namespace part8 {

struct Base_802143AC { char pad[0x18]; };
struct VObj_802143AC : Base_802143AC {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7(s32, s32);
    virtual s32 m8r();
};
struct Base_A_80214490_802143AC { char pad[0x18]; };
struct V_A_80214490_802143AC : Base_A_80214490_802143AC {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();
    virtual s32 m7(s32, s32);
    virtual s32 m8();
};
struct Base_A_80214544_802143AC { char pad[0x18]; };
struct V_A_80214544_802143AC : Base_A_80214544_802143AC {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void m7(s32, s32);
    virtual s32 m8();
};

struct VBase_18_97738d { char pad[0x18]; };

struct VObj_18_97738d : VBase_18_97738d {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual s32 m7(s32, s32);
};

struct Stack_8021488C {
    f32 sp8;
    f32 spC;
};

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual s32 m7(s32, s32);
    virtual s32 m8();
};

extern "C" {
s32 is_quest_active();
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
s32 __ct__12TMemberCheckFP7TObject(int, void *);
s32 create_message_window__13TShopSequenceFPvii(void *, int, void *);
u32 __nw__7TObjectFUl(int);
s32 get_window_layout_position(s32);
extern const f32 lbl_805DC658;
extern const f32 lbl_805DC65C;
void init_window__22THunterGuildSeqOfflineFPv(u8 *arg0);
s32 is_quest_active();
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
s32 create_quest_thread(s32);
s32 get_register__12TQuestThreadFPvi(void *, int);
s32 check_party_gathered__22THunterGuildSeqOfflineFv();
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
extern s32 THunterGuildSeqOffline__quest_result_callbacks[];
extern s32 quest_mission_manager;
void THunterGuildSeqOffline__sub_802145F8(u8 *arg0);
}

extern "C" {

void create_judgment_item_window__15TShopWindowBaseFPv(void *arg0);
void restore_shop_and_init_quest_state(void *arg0);
void update__15TShopWindowBaseFPv(void *arg0);
void update_confirm_input__15TShopWindowBaseFPv(void *arg0);
s32 set_service_counter_camera(void *, s32);
s32 create_yes_no_window(s32, u16, s32, s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 get_window_layout_position(s32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
f32 get_scale__15TShopWindowBaseFv(void *);
u16 obj_getField1c(s32);
s32 restore_player_state__13TShopSequenceFPv();
s32 set_field_20__12TQuestListVMFPvi(void *, s32);
s32 set_position_xy(s32, f32, f32);
s32 set_selected_index__17TWindowSubComCardFPvs(s32, s32);

void create_judgment_item_window__15TShopWindowBaseFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;
    VObj_802143AC *vobj = (VObj_802143AC *)arg0;

    if ((vobj->m8r() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        temp_r31 = (u16)obj_getField1c(*(s32 *)((s8 *)arg0 + 0x24));
        *(s32 *)((s8 *)arg0 + 0x38) = create_yes_no_window(get_window_layout_position(0x2B), temp_r31, 0, 0);
        set_selected_index__17TWindowSubComCardFPvs(*(s32 *)((s8 *)arg0 + 0x38), 1);
        temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
        set_position_xy(*(s32 *)((s8 *)arg0 + 0x38), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
        vobj->m7(8, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(7));
    }
}

void update__15TShopWindowBaseFPv(void *arg0) {
    u32 v = *(u32 *)((s8 *)arg0 + 0x3C);
    if (v != 0U) {
        if (all_parents_unqueued_for_destruction__7TObjectFv((void *)(v)) != 1) {
            *(u32 *)((s8 *)arg0 + 0x3C) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A_80214490_802143AC *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A_80214490_802143AC *) arg0)->m7(0xC, 1);
            *(s32 *)((s8 *)arg0 + 0x34) = 1;
            set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(0xC));
        }
    }
}

void update_confirm_input__15TShopWindowBaseFPv(void *arg0) {
    void *parent = *(void **)((s8 *)arg0 + 0x3C);
    if (parent != NULL) {
        if (all_parents_unqueued_for_destruction__7TObjectFv((void *)(parent)) == 0) {
            *(u32 *)((s8 *)arg0 + 0x3C) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A_80214544_802143AC *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A_80214544_802143AC *) arg0)->m7(0xC, 1);
            *(s32 *)((s8 *)arg0 + 0x34) = 1;
            set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(0xC));
        }
    }
}

void THunterGuildSeqOffline__sub_802145F8(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r3;
    if (((VObj_18 *)(arg0))->m8() != 0) {
        if (TShopWindowBase__sub_80223A48((void *) (arg0)) != 0) {
            *(s32 *)((s8 *)arg0 + 0x40) = 0;
        }
        if ((s32) *(s32 *)((s8 *)arg0 + 0x40) == 0) {
            temp_r0 = *(s32 *)((s8 *)arg0 + 0x30);
            switch (temp_r0) {
            case 3:
                break;
            case 0:
                if (is_quest_active() != 0) {
                    *(s32 *)((s8 *)arg0 + 0x30) = 2;
                    return;
                }
                temp_r3 = check_party_gathered__22THunterGuildSeqOfflineFv();
                switch (temp_r3) {
                case 1:
                    *(s32 *)((s8 *)arg0 + 0x30) = 2;
                    return;
                case 0:
                    ((VObj_18 *)(arg0))->m7(0x11, 1);
                    *(s32 *)((s8 *)arg0 + 0x30) = 1;
                    return;
                case 2:
                    ((VObj_18 *)(arg0))->m7(0xD, 1);
                    *(s32 *)((s8 *)arg0 + 0x30) = 1;
                    return;
                }
                break;
            case 1:
                if (check_party_gathered__22THunterGuildSeqOfflineFv() == 1) {
                    *(s32 *)((s8 *)arg0 + 0x30) = 2;
                }
                if (TShopWindowBase__sub_802239EC((void *) (arg0)) != 0) {
                    ((VObj_18 *)(arg0))->m7(0x10, 1);
                    set_field_20__12TQuestListVMFPvi((void *) (arg0), (int) (0xD));
                    return;
                }
                break;
            case 2:
                if (is_quest_active() != 0) {
                    if (get_register__12TQuestThreadFPvi((void *) (quest_mission_manager), (int) (0xFF)) != 0) {
                        ((VObj_18 *)(arg0))->m7(0xB, 1);
                        if (THunterGuildSeqOffline__quest_result_callbacks[1] != -1) {
                            *(s32 *)((s8 *)arg0 + 0x3C) = create_quest_thread(THunterGuildSeqOffline__quest_result_callbacks[1]);
                        }
                        set_field_20__12TQuestListVMFPvi((void *) (arg0), (int) (4));
                        return;
                    }
                    if (get_register__12TQuestThreadFPvi((void *) (quest_mission_manager), (int) (0xFD)) != 0) {
                        ((VObj_18 *)(arg0))->m7(0x12, 1);
                        if (THunterGuildSeqOffline__quest_result_callbacks[0] != -1) {
                            *(s32 *)((s8 *)arg0 + 0x3C) = create_quest_thread(THunterGuildSeqOffline__quest_result_callbacks[0]);
                        }
                        set_field_20__12TQuestListVMFPvi((void *) (arg0), (int) (5));
                        return;
                    }
                    ((VObj_18 *)(arg0))->m7(2, 1);
                    set_field_20__12TQuestListVMFPvi((void *) (arg0), (int) (6));
                    return;
                }
                ((VObj_18 *)(arg0))->m7(4, 1);
                *(s32 *)((s8 *)arg0 + 0x30) = 0;
                set_field_20__12TQuestListVMFPvi((void *) (arg0), (int) (8));
                break;
            }
        }
    }
}

void init_window__22THunterGuildSeqOfflineFPv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8021488C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8021488C, spC) == 0x4) ? 1 : -1];
    Stack_8021488C stack;
    u32 temp_r3;
    stack.sp8 = lbl_805DC658;
    stack.spC = lbl_805DC65C;
    create_message_window__13TShopSequenceFPvii((void *) (arg0), (int) (get_window_layout_position((s32)((int) (0x2C)))), (void *) (&stack.sp8));
    if (is_quest_active() == 0) {
        temp_r3 = __nw__7TObjectFUl((int) (0x80));
        if (temp_r3 != 0U) {
            __ct__12TMemberCheckFP7TObject((int) (temp_r3), (void *) (arg0));
        }
    }
    ((VObj_18_97738d *)(arg0))->m7(1, 1);
    *(s32 *)((s8 *)arg0 + 0x30) = 0;
    set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (s32)((int) (3)));
}

void restore_shop_and_init_quest_state(void *arg0) {
    restore_player_state__13TShopSequenceFPv();
    *(s32 *)((s8 *)arg0 + 0x2C) = set_service_counter_camera(arg0, 1);
    set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(1));
}

}

}

namespace part9 {

struct RecoveredGlobal_80214A84_lbl_804C97F0 { s32 value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_80214A84_lbl_804C97F0_size[sizeof(RecoveredGlobal_80214A84_lbl_804C97F0) == 0x38 ? 1 : -1];

struct RecoveredGlobal_80214A84_lbl_80513E60 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80214A84_lbl_80513E60_size[sizeof(RecoveredGlobal_80214A84_lbl_80513E60) == 0x10 ? 1 : -1];

struct Seq_80214B3C {
    s32 f0; u8 pad4[0x14]; void *vt; s32 f1c; s32 f20; s32 f24; u8 pad28[4]; s32 f2c; u8 pad30[4]; s32 f34; s32 f38; s32 f3c; s32 f40;
};

struct VBase_18_80214978 { char pad[0x18]; };

struct VObj_80214978 : VBase_18_80214978 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
};

struct Seq_80214978 : VObj_80214978 {
    u32 pad1c;
    u32 state;
};

extern "C" {
s32 queue_destruction__7TObjectFv(int);
s32 close_message_window__13TShopSequenceFPv(void *);
s32 __dt__13TShopSequenceFv(void *, int);
s32 TShopWindowBase__sub_8022397C(void *);
s32 __dl__7TObjectFPv(void *);
s32 TWindow__close(int);
extern RecoveredGlobal_80214A84_lbl_804C97F0 lbl_804C97F0;
extern RecoveredGlobal_80214A84_lbl_80513E60 lbl_80513E60;
extern s32 offline_quest_list_vm;
u8 *THunterGuildSeqOffline__sub_80214A84(u8 *arg0, s16 arg1);
extern RecoveredGlobal_80214A84_lbl_80513E60 lbl_80513E60;
void zero_four_slots__22THunterGuildSeqOfflineFv(void);
extern RecoveredGlobal_80214A84_lbl_80513E60 lbl_80513E60;
void clear_slot_flags__22THunterGuildSeqOfflineFv(void);
u8 *TShopSequence__ct(u8 *);
s32 TShopWindowBase__sub_8022397C(void *);
extern RecoveredGlobal_80214A84_lbl_804C97F0 lbl_804C97F0;
extern RecoveredGlobal_80214A84_lbl_80513E60 lbl_80513E60;
extern s32 lbl_805D3664;
extern s32 offline_quest_list_vm;
Seq_80214B3C *THunterGuildSeqOffline__sub_80214B3C(Seq_80214B3C *arg0, s32 arg1, s32 arg2);
int set_field_20__12TQuestListVMFPvi(void *, void *);
void confirm_and_close_if_valid__15TShopWindowBaseFPv(void *);
void fn_80214058(void *);
void fn_80214254(void *);
void create_judgment_item_window__15TShopWindowBaseFPv(void *);
void update__15TShopWindowBaseFPv(void *);
void update_confirm_input__15TShopWindowBaseFPv(void *);
void THunterGuildSeqOffline__sub_802145F8(void *);
void init_window__22THunterGuildSeqOfflineFPv(void *);
void dispatch_state__22THunterGuildSeqOfflineFPv(Seq_80214978 *arg0);
}

extern "C" {

void dispatch_state__22THunterGuildSeqOfflineFPv(Seq_80214978 *arg0) {
    switch (arg0->state) {
    case 0: arg0->m10(); break;
    case 1: init_window__22THunterGuildSeqOfflineFPv(arg0); break;
    case 3: THunterGuildSeqOffline__sub_802145F8(arg0); break;
    case 8: fn_80214058(arg0); break;
    case 4: update_confirm_input__15TShopWindowBaseFPv(arg0); break;
    case 5: update__15TShopWindowBaseFPv(arg0); break;
    case 6: create_judgment_item_window__15TShopWindowBaseFPv(arg0); break;
    case 7: fn_80214254(arg0); break;
    case 9: set_field_20__12TQuestListVMFPvi(arg0, (void *)0xC); break;
    case 10: set_field_20__12TQuestListVMFPvi(arg0, (void *)0xC); break;
    case 12: arg0->m11(); break;
    case 13: confirm_and_close_if_valid__15TShopWindowBaseFPv(arg0); break;
    case 14: return;
    }
}

void clear_slot_flags__22THunterGuildSeqOfflineFv(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&lbl_80513E60)[i] = 0;
    }
}

void zero_four_slots__22THunterGuildSeqOfflineFv(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&lbl_80513E60)[i] = 0;
    }
}

u8 *THunterGuildSeqOffline__sub_80214A84(u8 *arg0, s16 arg1) {
    u32 temp_r3;
    u32 temp_r3_2;
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &lbl_804C97F0.value;
        temp_r3 = *(u32 *)((s8 *)arg0 + 0x2C);
        if (temp_r3 != 0U) {
            queue_destruction__7TObjectFv((int) (temp_r3));
            *(u32 *)((s8 *)arg0 + 0x2C) = 0U;
        }
        close_message_window__13TShopSequenceFPv((void *) (arg0));
        temp_r3_2 = *(u32 *)((s8 *)arg0 + 0x38);
        if (temp_r3_2 != 0U) {
            TWindow__close((int) (temp_r3_2));
            *(u32 *)((s8 *)arg0 + 0x38) = 0U;
        }
        *(s32 *)((s8 *)(&lbl_80513E60.value) + (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 0;
        offline_quest_list_vm = 0;
        __dt__13TShopSequenceFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}
#pragma push
#pragma opt_propagation off
Seq_80214B3C *THunterGuildSeqOffline__sub_80214B3C(Seq_80214B3C *arg0, s32 arg1, s32 arg2) {
    s32 one;
    TShopSequence__ct((u8 *)arg0);
    one = 1;
    arg0->vt = ((u8 *)&lbl_804C97F0);
    arg0->f0 = lbl_805D3664;
    arg0->f20 = 0;
    arg0->f24 = arg2;
    arg0->f2c = 0;
    arg0->f34 = 0;
    arg0->f38 = 0;
    arg0->f3c = 0;
    arg0->f40 = one;
    {
        s32 idx = TShopWindowBase__sub_8022397C(arg0);
        (*(void * *)&offline_quest_list_vm) = arg0;
        ((s32 *)&lbl_80513E60)[idx] = one;
    }
    return arg0;
}
#pragma pop

}

}
