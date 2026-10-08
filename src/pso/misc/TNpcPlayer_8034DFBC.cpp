#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Base_8034E440 { char pad[0x18]; };

struct VObj_8034E440 : Base_8034E440 {
    virtual void m0(int);
};

struct VBase_18_dac7f3 { char pad[0x18]; };

struct VObj_18_dac7f3 : VBase_18_dac7f3 {
    virtual M2C_UNK m0(M2C_UNK);
};

struct Stack_8034EA80 {
    M2C_UNK sp8;
    s16 spC;
    u8 pad_E[0x2];
    s16 sp10;
};

struct Stack_8034EAC4 {
    M2C_UNK sp8;
    s16 spC;
    u8 pad_E[0x2];
    s16 sp10;
};

struct Stack_8034EC40 {
    M2C_UNK sp8;
    s16 spC;
    u16 spE;
    s16 sp10;
    s16 sp12;
};

struct Stack_8034EB08 {
    M2C_UNK sp8;
    s16 spC;
    u16 spE;
    s16 sp10;
    s16 sp12;
};

struct E_8034E02C { u8 flag; u8 pad[0x35]; };

struct Global_8034E5A8 { u8 pad[0x46E]; s8 f46e; u8 rest[0x600 - 0x46F]; };

typedef struct NpcCreatePacket_8034EBB0 {
    u8 header[4];
    u16 leader;
    u16 slot;
    s16 zero;
    s16 appearance;
} NpcCreatePacket_8034EBB0;

struct Slot_8034EDC4 {
    s32 a[6];
    s32 b[6];
};

struct Pkt_8034E3A0 { u16 hdr; u16 id; s16 flag; s16 arg; u32 pad; f32 x, y, z; };

struct Player_8034E24C {
    u8 pad0[0x38];
    f32 x;
    f32 y;
    f32 z;
};

typedef s32 M2C_UNK;

struct Base_8034E814 { u8 pad[0x18]; };

class Obj_8034E814 : public Base_8034E814 {
public:
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

struct Pkt_8034E814 { u8 pad0[4]; u16 client; u16 target; s16 cmd; s16 state; };

struct P_8034E054 { u8 pad[0x38]; f32 x; f32 y; f32 z; };

struct Pkt_8034E64C { u16 hdr; u16 id; s16 flag; s16 arg; u32 pad; f32 x, y, z; };

struct Stack_8034ECD0 {
    M2C_UNK sp8;
    s16 spC;
    u16 spE;
    s16 sp10;
    s16 sp12;
};

struct Stack_8034ED58 {
    M2C_UNK sp8;
    s16 spC;
    u16 spE;
    s16 sp10;
    s16 sp12;
};

extern "C" {
    extern int lbl_805D6EA0;
void enable_partner_chatter__10TNpcPlayerFv(void);
extern int lbl_805D6EA0;
void disable_partner_chatter__10TNpcPlayerFv(void);
s32 get_player_by_client_id(s32);
s32 obj_isState3_324();
void enable_all_battle_ctrl__10TNpcPlayerFv(void);
void send_item_pickup_request__10TObjPlayerFi(s32);
s32 get_player_by_client_id(s32);
void quest_remove_npc_player(u16 arg0);
M2C_UNK set_arrival_override_coords(s32, s32, f32, f32, f32);
s32 get_player_by_client_id(s32);
M2C_UNK send_6x21_inter_level_warp(s32, s32);
u16 get_action_flags__10TNpcPlayerFPv(s32);
s32 obj_getField1c(s32);
s32 obj_isState3_324();
void apply_to_players__10TNpcPlayerFiPvi(s32 arg0, void *arg1, s32 arg2);
void TNpcPlayer__sub_8034EA80(s16 arg0);
void TNpcPlayer__sub_8034EAC4(s16 arg0);
M2C_UNK set_arrival_override_coords(s32, s32, f32, f32, f32);
M2C_UNK notify_field1c__10TObjPlayerFi();
s32 get_player_by_client_id(s32);
void send_npc_control_create__10TNpcPlayerFsUssPvi(s16 arg0, u16 arg1, s16 arg2, u8 *arg3, s32 arg4);
void send_6x24_teleport_player(u16, s32, s32);
M2C_UNK set_arrival_override_coords(s32, s32, f32, f32, f32);
void create_default_companion__10TNpcPlayerFssPvi(s16 arg0, s16 arg1, u8 *arg2, s32 arg3);
extern int lbl_805D6EA0;
void TNpcPlayer__sub_8034EDB8(void);
M2C_UNK reset_lobby_model__10TObjPlayerFPv(void *);
s32 get_player_by_client_id(s32);
void TNpcPlayer__sub_8034EE3C(u16 arg0);
s32 get_player_by_client_id(s32);
s32 set_type__10TObjPlayerFPvi(s32, s32);
void update_player_field__10TNpcPlayerFUsi(u16 arg0, s32 arg1);
s32 get_player_by_client_id(s32);
M2C_UNK end_camera_pan__10TObjPlayerFPv();
void TNpcPlayer__sub_8034EEB4(u16 arg0);
s32 get_player_by_client_id(s32);
s32 init_photon_blast__10TObjPlayerFPvi(u32, s16);
void apply_to_battle_player_slot__10TNpcPlayerFUss(u16 arg0, s16 arg1);
s32 get_field_67c__10TNpcPlayerFPv(void* p);
void set_npc_ctrl_state__10TNpcPlayerFPvi(void* p, s32 v);
void set_npc_control_flag__10TNpcPlayerFPvs(void* p, s16 v);
int bswap_16__FPUs(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
void byteswap_header__10TNpcPlayerFPv(void* p);
void byteswap_header__10TNpcPlayerFPv(void* p);
int TLobby__send_and_handle_60(void*);
void send_state_60__10TNpcPlayerFPv(void* p);
void build_6x69_npc_control(void* p);
extern E_8034E02C lbl_804F0280[];
void clear_partner_dialogue_flags(void);
s32 obj_isState3_324();
s32 obj_getField1c(s32);
s16 get_stat_by_key_state__10TObjPlayerFPv(s32);
s32 get_player_by_client_id(s32);
void open__11TWindowCtrlFiii(s32, void *, s32);
extern E_8034E02C lbl_804F0280[];
extern int lbl_805D6EA0;
void show_partner_chatter_for_key(s16 key);
void send_6x24_teleport_player(u16, s32, s32);
M2C_UNK set_arrival_override_coords(s32, s32, f32, f32, f32);
void send_state_60__10TNpcPlayerFPv(void* p);
void build_6x69_npc_control(void* p);
void create_companion__10TNpcPlayerFUsUsiPvi(u16 leader, u16 slot, s32 appearance, f32 *p, s32 heading);
void clear_partner_dialogue_flags(void);
extern struct Slot_8034EDC4 lbl_805436B8[];
extern s32 TNpcPlayer__data_805D5864;
extern int lbl_805D6EA0;
void init_partner_dialogue(void);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_testFlags30(void *, int);
void send_6x3E__10TNpcPlayerFi(void *);
void init_6x3E_packet__10TNpcPlayerFPv(void *);
s32 get_player_by_client_id(s32);
void send_stop_at_position__10TNpcPlayerFUsPvs(u16 id, void *pos, s16 arg);
int sprintf(char *, const char *, ...);
char *strcpy(char *, const char *);
u32 strlen(const char *);
extern const char lbl_805DFDF0[4];
void set_partner_common_remark(s32 kind, const char *text);
void send_inter_level_warp_all__10TNpcPlayerFi(s32 arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_isState3_324();
s32 obj_testFlags30(void *, int);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void send_6x3E__10TNpcPlayerFi(void *);
void init_6x3E_packet__10TNpcPlayerFPv(void *);
s32 get_player_by_client_id(s32);
extern const f64 lbl_80478CB0[];
void quest_player_look_at_partner(u16 src);
s32 obj_isState3_324();
s32 obj_getField1c(s32);
s16 get_stat_by_key_state__10TObjPlayerFPv(s32);
s32 get_player_by_client_id(s32);
void open__11TWindowCtrlFiii(s32, void *, s32);
extern E_8034E02C lbl_804F0280[];
extern int lbl_805D6EA0;
void notify_partner_room_cleared(s32 arg0);
s32 obj_isState3_324();
void TNpcPlayer__ct(void *, u16, u16, s16, s32, s32);
void construct_partner__10TNpcPlayerFPviisPv(void *, u16, u16, s16, s32);
s32 load_npc_player_template(s16);
M2C_UNK notify_field1c__10TObjPlayerFi();
s32 get_player_by_client_id(s32);
Obj_8034E814 *create_player_object(u16, s32, s32);
void *__nw__7TObjectFUl(u32);
void set_npc_ctrl_state__10TNpcPlayerFPvi(void* p, s32 v);
void set_npc_control_flag__10TNpcPlayerFPvs(void* p, s16 v);
void byteswap_header__10TNpcPlayerFPv(void* p);
extern s32 lbl_805D53A0;
extern s32 tl_00;
void handle_6x69_npc_control(Pkt_8034E814 *pkt);
s32 get_player_by_client_id(s32);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_testFlags30(void *, int);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void send_6x3E__10TNpcPlayerFi(void *);
void init_6x3E_packet__10TNpcPlayerFPv(void *);
extern const f64 lbl_80478CB0[];
void quest_player_face_actor(u16 src, u16 dst);
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
u16 get_action_flags__10TNpcPlayerFPv(s32);
s32 get_player_by_client_id(s32);
void send_6x55_intra_map_warp(u16, f32 *, s32);
extern const f64 lbl_80478CB0[];
extern s32 lbl_805D53A0;
void TNpcPlayer__sub_8034E054(u16 arg0, f32 *arg1);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 obj_isState3_324();
s32 obj_testFlags30(void *, int);
s32 obj_getField1c(s32);
void send_6x3E__10TNpcPlayerFi(void *);
void init_6x3E_packet__10TNpcPlayerFPv(void *);
u16 get_action_flags__10TNpcPlayerFPv(s32);
s32 get_player_by_client_id(s32);
void TNpcPlayer__sub_8034E64C(void *pos, s16 arg);
M2C_UNK notify_field1c__10TObjPlayerFi();
s32 get_player_by_client_id(s32);
void send_state_60__10TNpcPlayerFPv(void* p);
void build_6x69_npc_control(void* p);
void TNpcPlayer__sub_8034ECD0(s16 arg0, u16 arg1, s16 arg2);
void send_state_60__10TNpcPlayerFPv(void* p);
void build_6x69_npc_control(void* p);
void TNpcPlayer__sub_8034ED58(s16 arg0, s16 arg1);
}

extern "C" {

void send_code_45_to_player__10TNpcPlayerFi(int arg0);
void play_effect__10TNpcPlayerFi(int arg0);
M2C_UNK play_effect_default__10TObjPlayerFii(s32, M2C_UNK);
M2C_UNK send_code_45_1__10TObjPlayerFi(s32);

s32 obj_isState2_324();

void set_partner_common_remark(s32 kind, const char *text) {
    char buf[0x40];

    if (kind < 25 && strlen(text) < 53) {
        sprintf(buf, lbl_805DFDF0, text);
        strcpy((char *)&lbl_804F0280[kind], buf);
    }
}

void clear_partner_dialogue_flags(void) {
    s32 i;
    for (i = 0; i < 25; i++) {
        lbl_804F0280[i].flag = 0;
    }
}

void TNpcPlayer__sub_8034E054(u16 arg0, f32 *arg1) {
    s32 npc = get_player_by_client_id(arg0);
    P_8034E054 *me = (P_8034E054 *)get_player_by_client_id(lbl_805D53A0);
    if (me == NULL || arg0 == 0) return;
    if (get_action_flags__10TNpcPlayerFPv(npc) != 0xFFFF) {
        send_6x55_intra_map_warp(arg0, arg1,
            (s32)(lbl_80478CB0[0] * get_ad_end_text_start__10TObjPlayerFv(arg1[0] - me->x, arg1[2] - me->z)));
    }
}

void send_code_45_to_player__10TNpcPlayerFi(int arg0) {
    s32 temp_r3;

    temp_r3 = get_player_by_client_id((u16) arg0);
    if ((temp_r3 != 0) && (obj_isState2_324() == 0)) {
        send_code_45_1__10TObjPlayerFi(temp_r3);
    }
}

s32 obj_isState2_324();

void play_effect__10TNpcPlayerFi(int arg0) {
    s32 temp_r3;

    temp_r3 = get_player_by_client_id((u16) arg0);
    if ((temp_r3 != 0) && (obj_isState2_324() == 0)) {
        play_effect_default__10TObjPlayerFii(temp_r3, -1);
    }
}

void quest_player_face_actor(u16 src, u16 dst) {
    struct Pkt_8034E3A0 pkt;
    Player_8034E24C *a;
    Player_8034E24C *c;
    s32 heading;
    a = (Player_8034E24C *) get_player_by_client_id(src);
    if (a == NULL) {
        return;
    }
    c = (Player_8034E24C *) get_player_by_client_id(dst);
    if (c == NULL) {
        return;
    }
    init_6x3E_packet__10TNpcPlayerFPv(&pkt);
    obj_testFlags30(a, 0x100000);
    heading = (s32) (lbl_80478CB0[0] * get_ad_end_text_start__10TObjPlayerFv(c->x - a->x, c->z - a->z));
    pkt.id = src;
    VecCopy__FP3VecPC3Vec(&pkt.x, &a->x);
    pkt.arg = heading;
    send_6x3E__10TNpcPlayerFi(&pkt);
}

void quest_player_look_at_partner(u16 src) {
    struct Pkt_8034E3A0 pkt;
    Player_8034E24C *a;
    Player_8034E24C *c;
    s32 i;
    s16 flag;
    s32 heading;
    a = (Player_8034E24C *) get_player_by_client_id(src);
    if (a == NULL) {
        return;
    }
    if (obj_isState3_324() != 0) {
        for (i = 0; i < 4; i++) {
            if (i != src) {
                c = (Player_8034E24C *) get_player_by_client_id(i);
                if (c != NULL && obj_isState3_324() == 0) {
                    break;
                }
            }
        }
    } else {
        for (i = 0; i < 4; i++) {
            if (i != src) {
                c = (Player_8034E24C *) get_player_by_client_id(i);
                if (c != NULL && obj_isState3_324() != 0) {
                    break;
                }
            }
        }
    }
    if (c == NULL) {
        return;
    }
    init_6x3E_packet__10TNpcPlayerFPv(&pkt);
    flag = 0;
    if (obj_testFlags30(a, 0x100000) != 0) {
        flag = 1;
    }
    heading = (s32) (lbl_80478CB0[0] * get_ad_end_text_start__10TObjPlayerFv(c->x - a->x, c->z - a->z));
    pkt.id = src;
    VecCopy__FP3VecPC3Vec(&pkt.x, &a->x);
    pkt.arg = heading;
    pkt.flag = flag;
    if (flag == 1) {
        send_6x3E__10TNpcPlayerFi(&pkt);
    } else {
        send_6x3E__10TNpcPlayerFi(&pkt);
    }
}

void send_stop_at_position__10TNpcPlayerFUsPvs(u16 id, void *pos, s16 arg) {
    struct Pkt_8034E3A0 pkt;
    s16 flag;
    u8 *p;
    init_6x3E_packet__10TNpcPlayerFPv(&pkt);
    p = (u8 *) get_player_by_client_id(id);
    flag = 0;
    if (p != NULL) {
        if (obj_testFlags30(p, 0x100000) != 0) {
            flag = 1;
        }
        pkt.id = id;
        VecCopy__FP3VecPC3Vec(&pkt.x, pos);
        pkt.arg = arg;
        pkt.flag = flag;
        send_6x3E__10TNpcPlayerFi(&pkt);
    }
}

void enable_partner_chatter__10TNpcPlayerFv(void) { lbl_805D6EA0 = (lbl_805D6EA0 & 0xfffffffd); }
void disable_partner_chatter__10TNpcPlayerFv(void) { lbl_805D6EA0 = (lbl_805D6EA0 | 0x2); }
void enable_all_battle_ctrl__10TNpcPlayerFv(void) {
    s32 var_r31;
    void *temp_r3;
    var_r31 = 0;
    do {
        temp_r3 = ((void *)get_player_by_client_id(var_r31));
        if ((temp_r3 != NULL) && (obj_isState3_324() != 0) && (temp_r3 != NULL)) {
            ((VObj_8034E440*)temp_r3)->m0(1);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}
void quest_remove_npc_player(u16 arg0) {
    s32 temp_r3;
    temp_r3 = ((s32)((void *)get_player_by_client_id((s32)((void *) (arg0)))));
    if (temp_r3 != 0) {
        send_item_pickup_request__10TObjPlayerFi(temp_r3);
        if ((u32) temp_r3 != 0U) {
            ((VObj_18_dac7f3 *)(temp_r3))->m0(1);
        }
    }
}

void notify_partner_room_cleared(s32 arg0) {
    s8 *win = (s8 *)((M2C_UNK *)&lbl_804F0280) + 0x3CC;
    s32 i;
    s32 p;
    i = 0;
    do {
        p = get_player_by_client_id(i);
        if (p != 0 && obj_isState3_324() != 0 && arg0 == get_stat_by_key_state__10TObjPlayerFPv(p) && !(lbl_805D6EA0 & 2) && *win != 0) {
            open__11TWindowCtrlFiii((s32)(obj_getField1c(p)), (void *)((s32)win), (s32)(0x1B));
        }
        i += 1;
    } while (i < 4);
}

void show_partner_chatter_for_key(s16 key) {
    s32 i;
    s32 player;
    for (i = 0; i < 4; i++) {
        player = get_player_by_client_id(i);
        if (player && obj_isState3_324() && key == get_stat_by_key_state__10TObjPlayerFPv(player)
            && !(lbl_805D6EA0 & 2) && (*(Global_8034E5A8 *)&lbl_804F0280).f46e) {
            open__11TWindowCtrlFiii(obj_getField1c(player), &(*(Global_8034E5A8 *)&lbl_804F0280).f46e, 0x1B);
        }
    }
}

void TNpcPlayer__sub_8034E64C(void *pos, s16 arg) {
    Pkt_8034E64C pkt;
    s32 i;
    s32 p;
    s16 flag;
    for (i = 0; i < 4; i++) {
        p = get_player_by_client_id(i);
        if (p != 0 && obj_isState3_324() != 0 && get_action_flags__10TNpcPlayerFPv(p) != 0xFFFF) {
            flag = 0;
            if (obj_testFlags30((void *)p, 0x100000) != 0) {
                flag = 1;
            }
            init_6x3E_packet__10TNpcPlayerFPv(&pkt);
            pkt.id = obj_getField1c(p);
            VecCopy__FP3VecPC3Vec(&pkt.x, pos);
            pkt.arg = arg;
            pkt.flag = flag;
            send_6x3E__10TNpcPlayerFi(&pkt);
        }
    }
}

void apply_to_players__10TNpcPlayerFiPvi(s32 arg0, void *arg1, s32 arg2) {
    s32 var_r31;
    s32 temp_r3;
    var_r31 = 0;
    do {
        temp_r3 = get_player_by_client_id(var_r31);
        if ((temp_r3 != 0) && (obj_isState3_324() != 0) && ((u16) get_action_flags__10TNpcPlayerFPv(temp_r3) != 0xFFFF)) {
            set_arrival_override_coords(obj_getField1c(temp_r3), arg2, M2C_FIELD(arg1, f32 *, 0), M2C_FIELD(arg1, f32 *, 4), M2C_FIELD(arg1, f32 *, 8));
            send_6x21_inter_level_warp(temp_r3, arg0);
        }
        var_r31 += 1;
    } while (var_r31 < 4);
}
void send_inter_level_warp_all__10TNpcPlayerFi(s32 arg0) {
    s32 i;
    s32 player;

    for (i = 0; i < 4; i++) {
        player = get_player_by_client_id(i);
        if (player != 0 && obj_isState3_324() != 0 && get_action_flags__10TNpcPlayerFPv(player) != 0xFFFF) {
            send_6x21_inter_level_warp(player, arg0);
        }
    }
}

#define SETFLAG_8034E814 ((void (*)(void *, u16))set_npc_control_flag__10TNpcPlayerFPvs)
#define ISSTATE3_8034E814 ((s32 (*)(void *))obj_isState3_324)
#define NOTIFY_8034E814 ((void (*)(void *))notify_field1c__10TObjPlayerFi)
void handle_6x69_npc_control(Pkt_8034E814 *pkt) {
    u16 client;
    Obj_8034E814 *p;
    void *o;
    s32 i;
    byteswap_header__10TNpcPlayerFPv((void*)(pkt));
    client = pkt->client;
    if (client == 0xFFFF) {
        return;
    }
    switch (pkt->cmd) {
    case 0:
        if (pkt->target == lbl_805D53A0) {
            return;
        }
        if (pkt->target == 0xFFFF) {
            return;
        }
        if (client == lbl_805D53A0) {
            p = create_player_object(pkt->target, 5, load_npc_player_template(pkt->state));
            if (p == NULL) {
                return;
            }
            p->m6();
            SETFLAG_8034E814(p, (u16)lbl_805D53A0);
            set_npc_ctrl_state__10TNpcPlayerFPvi((void*)(p), (s32)(pkt->state));
            o = __nw__7TObjectFUl(0xE8);
            if (o != NULL) {
                construct_partner__10TNpcPlayerFPviisPv(o, (u16)lbl_805D53A0, pkt->target, pkt->state, tl_00);
            }
        } else {
            p = create_player_object(pkt->target, 4, load_npc_player_template(pkt->state));
            if (p != NULL) {
                p->m6();
            }
        }
        break;
    case 1:
        p = (Obj_8034E814 *)get_player_by_client_id(client);
        if (p != NULL && ISSTATE3_8034E814(p) != 0) {
            SETFLAG_8034E814(p, 0xFFFF);
        }
        break;
    case 2:
        for (i = 0; i < 4; i++) {
            p = (Obj_8034E814 *)get_player_by_client_id(i);
            if (p != NULL && ISSTATE3_8034E814(p) != 0) {
                SETFLAG_8034E814(p, pkt->client);
            }
        }
        break;
    case 3:
        if (pkt->target == 0xFFFF) {
            return;
        }
        if (client == lbl_805D53A0) {
            p = create_player_object(pkt->target, 5, load_npc_player_template(pkt->state));
            if (p == NULL) {
                return;
            }
            NOTIFY_8034E814(p);
            p->m6();
            SETFLAG_8034E814(p, (u16)lbl_805D53A0);
            set_npc_ctrl_state__10TNpcPlayerFPvi((void*)(p), (s32)(pkt->state));
            o = __nw__7TObjectFUl(0xE8);
            if (o != NULL) {
                TNpcPlayer__ct(o, (u16)lbl_805D53A0, pkt->target, pkt->state, 1, tl_00);
            }
        } else {
            p = create_player_object(pkt->target, 4, load_npc_player_template(pkt->state));
            if (p != NULL) {
                p->m6();
                NOTIFY_8034E814(p);
            }
        }
        break;
    }
}

void TNpcPlayer__sub_8034EA80(s16 arg0) {
    Stack_8034EA80 stack;
    build_6x69_npc_control((void*)(&stack.sp8));
    stack.spC = arg0;
    stack.sp10 = 2;
    send_state_60__10TNpcPlayerFPv((void*)(&stack.sp8));
}
void TNpcPlayer__sub_8034EAC4(s16 arg0) {
    Stack_8034EAC4 stack;
    build_6x69_npc_control((void*)(&stack.sp8));
    stack.spC = arg0;
    stack.sp10 = 1;
    send_state_60__10TNpcPlayerFPv((void*)(&stack.sp8));
}
void send_npc_control_create__10TNpcPlayerFsUssPvi(s16 arg0, u16 arg1, s16 arg2, u8 *arg3, s32 arg4) {
    Stack_8034EB08 stack;
    s32 var_r31;
    build_6x69_npc_control((void*)((void *) (&stack.sp8)));
    stack.spC = arg0;
    var_r31 = 0;
    stack.spE = 0xFFFF;
    stack.sp10 = 3;
    stack.sp12 = arg2;
loop_1:
    if (((u32)get_player_by_client_id((s32)((int) (var_r31)))) != 0U) {
        notify_field1c__10TObjPlayerFi();
    } else {
        var_r31 += 1;
        if (var_r31 < 4) {
            goto loop_1;
        }
    }
    stack.spE = arg1;
    set_arrival_override_coords((s32)((void *) (arg1)), (s32)((void *) (arg4)), (f32) (M2C_FIELD(arg3, f32 *, 0)), (f32) (M2C_FIELD(arg3, f32 *, 4)), (f32) (M2C_FIELD(arg3, f32 *, 8)));
    send_state_60__10TNpcPlayerFPv((void*)((void *) (&stack.sp8)));
}

void create_companion__10TNpcPlayerFUsUsiPvi(u16 leader, u16 slot, s32 appearance, f32 *p, s32 heading) {
    NpcCreatePacket_8034EBB0 pkt;
    build_6x69_npc_control((void*)(&pkt));
    pkt.leader = leader;
    pkt.slot = 0xFFFF;
    pkt.zero = 0;
    pkt.appearance = appearance;
    pkt.slot = slot;
    set_arrival_override_coords(slot, heading, p[0], p[1], p[2]);
    send_state_60__10TNpcPlayerFPv((void*)(&pkt));
    send_6x24_teleport_player(pkt.slot, (s32)p, heading);
}

void create_default_companion__10TNpcPlayerFssPvi(s16 arg0, s16 arg1, u8 *arg2, s32 arg3) {
    Stack_8034EC40 stack;
    build_6x69_npc_control((void*)(&stack.sp8));
    stack.spE = 0xFFFF;
    stack.spC = arg0;
    stack.sp10 = 0;
    stack.sp12 = arg1;
    stack.spE = 1;
    set_arrival_override_coords((s32)(1U), (s32)(arg3), M2C_FIELD(arg2, f32 *, 0), M2C_FIELD(arg2, f32 *, 4), M2C_FIELD(arg2, f32 *, 8));
    send_state_60__10TNpcPlayerFPv((void*)(&stack.sp8));
    send_6x24_teleport_player(stack.spE, (s32) arg2, arg3);
}

void TNpcPlayer__sub_8034ECD0(s16 arg0, u16 arg1, s16 arg2) {
    Stack_8034ECD0 stack;
    s32 var_r31;
    build_6x69_npc_control((void*)(&stack.sp8));
    stack.spC = arg0;
    var_r31 = 0;
    stack.spE = 0xFFFF;
    stack.sp10 = 3;
    stack.sp12 = arg2;
    stack.spE = arg1;
loop_1:
    if (((u32)get_player_by_client_id(var_r31)) != 0U) {
        notify_field1c__10TObjPlayerFi();
    } else {
        var_r31 += 1;
        if (var_r31 < 4) {
            goto loop_1;
        }
    }
    send_state_60__10TNpcPlayerFPv((void*)(&stack.sp8));
}

void TNpcPlayer__sub_8034ED58(s16 arg0, s16 arg1) {
    Stack_8034ED58 stack;
    build_6x69_npc_control((void*)(&stack.sp8));
    stack.spE = 0xFFFF;
    stack.spC = arg0;
    stack.sp10 = 0;
    stack.sp12 = arg1;
    stack.spE = 1;
    send_state_60__10TNpcPlayerFPv((void*)(&stack.sp8));
}

void TNpcPlayer__sub_8034EDB8(void) { lbl_805D6EA0 = 0; }

void init_partner_dialogue(void) {
    s32 i;
    s32 j;
    (*(s32 *)&lbl_805D6EA0) = 0;
    clear_partner_dialogue_flags();
    TNpcPlayer__data_805D5864 = 0;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            lbl_805436B8[i].a[j] = 0;
            lbl_805436B8[i].b[j] = 0x19;
        }
    }
}

void TNpcPlayer__sub_8034EE3C(u16 arg0) {
    u32 temp_r3;
    temp_r3 = ((u32)get_player_by_client_id((s32)((u32)((void *) (arg0)))));
    if (temp_r3 != 0U) {
        reset_lobby_model__10TObjPlayerFPv((void *) (temp_r3 + 0x644));
    }
}
void update_player_field__10TNpcPlayerFUsi(u16 arg0, s32 arg1) {
    u32 temp_r3;
    temp_r3 = ((u32)get_player_by_client_id((s32)(arg0)));
    if (temp_r3 != 0U) {
        set_type__10TObjPlayerFPvi(temp_r3 + 0x644, arg1);
    }
}
void TNpcPlayer__sub_8034EEB4(u16 arg0) {
    if (((u32)get_player_by_client_id((s32)((u32)((void *) (arg0))))) != 0U) {
        end_camera_pan__10TObjPlayerFPv();
    }
}
void apply_to_battle_player_slot__10TNpcPlayerFUss(u16 arg0, s16 arg1) {
    u32 temp_r3;
    if ((arg1 < 0x10) && ((temp_r3 = ((u32)get_player_by_client_id((s32)(arg0)))) != 0U)) {
        init_photon_blast__10TObjPlayerFPvi(temp_r3, arg1);
    }
}
s32 get_field_67c__10TNpcPlayerFPv(void* p) { return *(s32*)((char*)p + 0x67c); }
void set_npc_ctrl_state__10TNpcPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x67c) = v; }
void set_npc_control_flag__10TNpcPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x678) = v; }
void byteswap_header__10TNpcPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_16__FPUs((char*)p + 0x8); bswap_16__FPUs((char*)p + 0xa); }
void send_state_60__10TNpcPlayerFPv(void* p) { byteswap_header__10TNpcPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void build_6x69_npc_control(void* p) { *(u8*)((char*)p + 0x0) = 105; *(u8*)((char*)p + 0x1) = 3; }

}
