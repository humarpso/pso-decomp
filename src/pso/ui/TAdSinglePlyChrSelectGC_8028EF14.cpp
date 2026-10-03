#include "types.h"
#include "pso/misc/CharacterShape.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8029057C_lbl_804D3F74 {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct Slot_8028F150 { s32 f0; u8 pad[0x468]; };

struct Slot_8028F198 { s32 f0; u8 pad[0x468]; };

struct W_80290250 { u8 pad[0xfc]; s32 bufp; s32 rc; u8 data[4]; };

struct E_8028F210 { s32 f0; u8 pad4[0xC]; s32 f10; s32 f14; u8 pad18[0x16C]; s32 f184; s32 f188; u8 pad18c[0x16C]; s32 f2f8; u8 pad2fc[0x170]; };

struct Pair_802907E4 { u32 a; u32 b; };

extern "C" {
extern const f32 lbl_805DD944;
extern const f32 lbl_805DD948;
extern const f32 lbl_805DD94C;
extern const f32 lbl_805DD950;
extern const f32 lbl_805DD954;
s32 TAdSinglePlyChrSelectGC__sub_8028FBCC(u8 *arg0);
void TAdSinglePlyChrSelectGC__sub_802905A4(void* p, void* q);
extern RecoveredGlobal_8029057C_lbl_804D3F74 lbl_804D3F74;
void TAdSinglePlyChrSelectGC__sub_8029057C(s32 arg0);
extern CreationHeadModelStates lbl_8051C0E8;
extern CreationHeadModelStates lbl_8051C110[7];
extern void ***lbl_805D6550;
void clear_next_entry__10TObjPlayerFiPv(void *,void *);
extern CreationBodyModelStates lbl_8051C228;
extern CreationBodyModelStates lbl_8051C430[7];
void reset_creation_body_shapes();
void reset_creation_head_shapes();
extern Slot_8028F150 lbl_8051D288[];
Slot_8028F150 *TAdSinglePlyChrSelectGC__sub_8028F150(void);
extern Slot_8028F150 lbl_8051D288[];
s32 TAdSinglePlyChrSelectGC__sub_8028EC70(void *, void *);
s32 TAdSinglePlyChrSelectGC__sub_8028F198(void *arg0);
void set_field_b8__14TObjEnePanarmsFPvs(void *, s16);
s32 creation_motion_group(u32);
extern u32 lbl_805D6520;
extern u32 lbl_805D653C;
void TAdSinglePlyChrSelectGC__sub_8028FF64(s32 arg0);
s32 alloc__22TQuestVmDownLoadServerFPv(int);
s32 request_file_read__6TLobbyFiiPvPv(int, int, void *, int);
s32 get_display_index__12TCharaMakingFPv(void *);
extern s32 lbl_804D886C[];
extern u32 lbl_805D6520;
void load_creation_shape_rel(W_80290250 *arg0);
extern Slot_8028F150 lbl_8051D288[];
s32 TAdSinglePlyChrSelectGC__sub_8028F210();
void TCharaMaking__sub_8028E3A0();
void *TAdSinglePlyChrSelectGC__sub_8028FB74(void *, s32 *);
s32 TAdSinglePlyChrSelectGC__sub_8028FBCC(u8 *arg0);
void TAdSinglePlyChrSelectGC__sub_8028FAEC(void *arg0, s32 *arg1);
void TAdSinglePlyChrSelectGC__sub_80290884(void* p, void* q);
extern u8 lbl_80451CD0[];
extern Pair_802907E4 lbl_80540888[];
extern Pair_802907E4 lbl_805408D8[];
extern Pair_802907E4 lbl_80540928[];
void TAdSinglePlyChrSelectGC__sub_802907E4(void* _w0);
s32 TAdSinglePlyChrSelectGC__sub_8028ECCC(void *, u32);
void update_char_panels__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
extern Slot_8028F150 lbl_8051D288[];
extern u32 lbl_805D6520;
extern E_8028F210 *lbl_805D6540;
s32 TAdSinglePlyChrSelectGC__sub_8028EF90(s32 arg0);
void advance_animation_playback(s32);
s32 query_state__12TCharaMakingFv(void);
void TAdSinglePlyChrSelectGC__sub_8028ED54(void);
void TAdSinglePlyChrSelectGC__sub_8028F2A0(void *);
extern Pair_802907E4 lbl_80540888[];
extern Pair_802907E4 lbl_805408D8[];
extern Pair_802907E4 lbl_80540928[];
extern u32 lbl_805D6520;
extern u32 lbl_805D6544;
extern u32 lbl_805D6548;
extern u32 lbl_805D654C;
void TAdSinglePlyChrSelectGC__sub_8028FFC0(s32 arg0);
M2C_UNK TLobby__sub_8001FE7C(void *, int);
M2C_UNK __dt__10TObjMotionFv(void *, int);
M2C_UNK free__11TOBoss4RockFUi(int);
M2C_UNK __dl__7TObjectFPv(void *);
void update_char_panels__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
void free_field_FC__23TAdSinglePlyChrSelectGCFPv(void *arg0);
M2C_UNK TAdSinglePlyChrSelectGC__sub_802905D4(void *);
extern M2C_UNK lbl_804D4054[];
extern Slot_8028F150 lbl_8051D288[];
extern s32 lbl_805D49B4;
extern int lbl_805D6534;
extern u32 lbl_805D653C;
extern u32 lbl_805D6544;
extern u32 lbl_805D6548;
extern u32 lbl_805D654C;
extern s32 lbl_805D6554;
extern s32 lbl_805D6558;
u8 *TAdSinglePlyChrSelectGC__sub_802908CC(u8 *arg0, s16 arg1);
void get_item_ptr__10TObjPlayerFPvi(void *, int);
void play_phase_transition_sound__10TObjPlayerFi(u32);
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void setup_from_data__12TCharaMakingFii(u32, u32);
void clear_flag_bit0__12TCharaMakingFv();
void enable_making__12TCharaMakingFv();
s32 TAdSinglePlyChrSelectGC__sub_8028FCA8(void *);
void draw_player_model__23TAdSinglePlyChrSelectGCFPv(void* p);
void set_position_vec3__10TObjPlayerFPvPv(int, void *);
void rotate_matrix_y(int, u32);
void push_matrix_from();
void TObjPlayer__sub_803D9B2C();
void pop_matrix();
void set_global_param__8TObjFishFi(void *);
extern Pair_802907E4 lbl_80540888[];
extern Pair_802907E4 lbl_805408D8[];
extern Pair_802907E4 lbl_80540928[];
extern u32 lbl_805D6520;
extern int lbl_805D6534;
extern u32 lbl_805D6538;
extern E_8028F210 *lbl_805D6540;
void TAdSinglePlyChrSelectGC__sub_8028FD90(u8 *arg0);
}

extern "C" {

void TAdSinglePlyChrSelectGC__sub_802905A4(void* p, void* q);
int TAdSinglePlyChrSelectGC__sub_802905B8(void);
void TAdSinglePlyChrSelectGC__sub_80290884(void* p, void* q);
void close_if_active__23TAdSinglePlyChrSelectGCFv(u8 * _w0);
void draw_player_model__23TAdSinglePlyChrSelectGCFPv(void* p);
void free_field_FC__23TAdSinglePlyChrSelectGCFPv(void *arg0);
u8 is_active__23TAdSinglePlyChrSelectGCFv(void);
s32 map_button_code__23TAdSinglePlyChrSelectGCFi(s32 arg0);
void update_char_panels__23TAdSinglePlyChrSelectGCFPv(u8 *arg0);
void update_pair__23TAdSinglePlyChrSelectGCFPv(void* p);
int TAdSinglePlyChrSelectGC__sub_8029071C(void*);
M2C_UNK TLobby__sub_803DA16C(void *);
int set_motion_interpolation_flag(void*);
int draw_model_with_callback__10TObjPlayerFPv(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);

void update_char_panels__23TAdSinglePlyChrSelectGCFPv(u8 *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x14) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x10) != 0)) {
        TLobby__sub_803DA16C(arg0 + 0x178);
    }
    if (((s32) M2C_FIELD(arg0, s32 *, 0x188) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x184) != 0)) {
        TLobby__sub_803DA16C(arg0 + 0x2EC);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x2F8) != 0) {
        TLobby__sub_803DA16C(arg0 + 0x460);
    }
}

s32 TAdSinglePlyChrSelectGC__sub_8028EF90(s32 arg0) {
    s32 n;
    s32 k;
    E_8028F210 *p;
    query_state__12TCharaMakingFv();
    n = 0;
    for (k = 4; k >= 1; k--) {
        for (p = (E_8028F210 *)&lbl_8051D288[127]; p >= (E_8028F210 *)lbl_8051D288; p--) {
            if (p != lbl_805D6540 && p->f0 != 0 && (p->f14 == 0 || p->f10 != 0) && (p->f188 == 0 || p->f184 != 0) && p->f2f8 != 0 &&
                TAdSinglePlyChrSelectGC__sub_8028ECCC(p, lbl_805D6520) >= k) {
                p->f0 = 0;
                update_char_panels__23TAdSinglePlyChrSelectGCFPv((u8 *)p);
                if (++n == arg0) {
                    return n;
                }
            }
        }
    }
    return n;
}

Slot_8028F150 *TAdSinglePlyChrSelectGC__sub_8028F150(void) {
    Slot_8028F150 *p;
    for (p = lbl_8051D288; p < (Slot_8028F150 *)((u8 *)lbl_8051D288 + 0x23600); p++) {
        if (p->f0 == 0) return p;
    }
    return 0;
}

s32 TAdSinglePlyChrSelectGC__sub_8028F198(void *arg0) {
    Slot_8028F198 *p;
    Slot_8028F198 *end;
    end = (Slot_8028F198 *)((u8 *)((Slot_8028F198 *)&lbl_8051D288) + 0x23600);
    for (p = ((Slot_8028F198 *)&lbl_8051D288); p < end; p++) {
        if (p->f0 != 0 && TAdSinglePlyChrSelectGC__sub_8028EC70(p, arg0) != 0) return 1;
    }
    return 0;
}

s32 TAdSinglePlyChrSelectGC__sub_8028F210() {
    E_8028F210 *p;
    s32 n;
    n = 2;
    for (p = ((E_8028F210 *)&lbl_8051D288); p < &((E_8028F210 *)&lbl_8051D288)[0x80]; p++) {
        if (p->f0 != 0) {
            if (p->f14 != 0 && p->f10 == 0) {
                n--;
            }
            if (p->f188 != 0 && p->f184 == 0) {
                n--;
            }
            if (p->f2f8 == 0) {
                n--;
            }
        }
    }
    return n;
}

s32 map_button_code__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    switch (arg0) {
    case 0x29:
        return 3;
    case 0x2C:
        return 4;
    case 0xFF:
        return -1;
    default:
        return -2;
    }
}

extern s32 lbl_805D6530;

void TAdSinglePlyChrSelectGC__sub_8028FAEC(void *arg0, s32 *arg1) {
    s32 j;
    s32 y;
    s32 x;
    s32 i;
    TCharaMaking__sub_8028E3A0();
    TAdSinglePlyChrSelectGC__sub_8028FB74(((void *)TAdSinglePlyChrSelectGC__sub_8028FBCC((u8 *)(arg0))), arg1);
    for (i = 0; i < 2; i++) {
        for (j = 2; j > i; j--) {
            x = arg1[j];
            y = arg1[j - 1];
            if (x < y) {
                arg1[j - 1] = x;
                arg1[j] = y;
            }
        }
    }
}

s32 TAdSinglePlyChrSelectGC__sub_8028FBCC(u8 *arg0) {
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f4_2;
    temp_f3 = M2C_FIELD(arg0, f32 *, 0);
    if (temp_f3 > lbl_805DD948) {
        if ((lbl_805DD94C * (temp_f3 - lbl_805DD948)) <= M2C_FIELD(arg0, f32 *, 4)) {
            return 6;
        }
        return 7;
    }
    if (temp_f3 <= lbl_805DD950) {
        temp_f4 = M2C_FIELD(arg0, f32 *, 4);
        if (temp_f3 >= (lbl_805DD948 * temp_f4)) {
            return 0;
        }
        if (temp_f3 <= (lbl_805DD954 * (temp_f4 - lbl_805DD944))) {
            return 1;
        }
        return 2;
    }
    temp_f4_2 = M2C_FIELD(arg0, f32 *, 4);
    if (temp_f3 <= (lbl_805DD954 * (temp_f4_2 - lbl_805DD944))) {
        return 3;
    }
    if (temp_f3 >= (lbl_805DD948 * temp_f4_2)) {
        return 4;
    }
    return 5;
}

void TAdSinglePlyChrSelectGC__sub_8028FD90(u8 *arg0) {
    u32 v;
    begin_effect_render__13TParticleCtrlFv();
    if (TAdSinglePlyChrSelectGC__sub_8028FCA8(arg0) == 0) {
        lbl_805D6534 = 0;
        return;
    }
    {
        lbl_805D6534 = 1;
        TObjPlayer__sub_803D9B2C();
        set_position_vec3__10TObjPlayerFPvPv(0, arg0 + 0x38);
        rotate_matrix_y(0, lbl_805D6538);
        set_global_param__8TObjFishFi((u8 *)lbl_805D6540 + 0x460);
        draw_player_model__23TAdSinglePlyChrSelectGCFPv((void*)(arg0));
        get_item_ptr__10TObjPlayerFPvi(arg0, 0x3A);
        push_matrix_from();
        set_global_param__8TObjFishFi((u8 *)lbl_805D6540 + 0x2EC);
        play_phase_transition_sound__10TObjPlayerFi(lbl_80540928[M2C_FIELD(lbl_805D6540, s16 *, 0xA)].b);
        pop_matrix();
        v = lbl_805408D8[M2C_FIELD(lbl_805D6540, s16 *, 0xC)].b;
        if (v != 0) {
            enable_making__12TCharaMakingFv();
            get_item_ptr__10TObjPlayerFPvi(arg0, 0x3B);
            push_matrix_from();
            set_global_param__8TObjFishFi((u8 *)lbl_805D6540 + 0x178);
            play_phase_transition_sound__10TObjPlayerFi(v);
            pop_matrix();
            clear_flag_bit0__12TCharaMakingFv();
        }
        v = lbl_80540888[M2C_FIELD(lbl_805D6540, s16 *, 0xC)].b;
        if (v != 0) {
            enable_making__12TCharaMakingFv();
            get_item_ptr__10TObjPlayerFPvi(arg0, 0x3B);
            push_matrix_from();
            set_global_param__8TObjFishFi((u8 *)lbl_805D6540 + 0x178);
            setup_from_data__12TCharaMakingFii(v, lbl_805D6520);
            pop_matrix();
            clear_flag_bit0__12TCharaMakingFv();
        }
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

void close_if_active__23TAdSinglePlyChrSelectGCFv(u8 * _w0) {
    if ((s32) lbl_805D6530 != 0) {
        TAdSinglePlyChrSelectGC__sub_8028FD90((u8 *)(_w0));
    }
}

void draw_player_model__23TAdSinglePlyChrSelectGCFPv(void* p) { set_motion_interpolation_flag(p); draw_model_with_callback__10TObjPlayerFPv(p); }

void TAdSinglePlyChrSelectGC__sub_8028FF64(s32 arg0) {
    if (lbl_805D653C == 0 || lbl_805D6520 == 0) {
        return;
    }
    set_field_b8__14TObjEnePanarmsFPvs((void *)lbl_805D653C, arg0 * 3 + creation_motion_group(lbl_805D6520));
}

void TAdSinglePlyChrSelectGC__sub_8028FFC0(s32 arg0) {
    s32 state;
    state = query_state__12TCharaMakingFv();
    TAdSinglePlyChrSelectGC__sub_8028ED54();
    switch (state) {
    case 3:
        if (lbl_805D654C != 0) {
            TCharaMaking__bind_head_shape_nodes((CharacterAppearanceFields *)((CharacterAppearanceFields *)lbl_805D6520), (void *)((void *)(lbl_805D654C = lbl_80540928[((CharacterAppearanceFields *)lbl_805D6520)->head].b)));
        }
        break;
    case 4: {
        s32 hair = ((CharacterAppearanceFields *)lbl_805D6520)->hair;
        u32 a = lbl_80540888[hair].b;
        u32 b = lbl_805408D8[hair].b;
        lbl_805D6544 = a;
        lbl_805D6548 = b;
        break;
    }
    }
    TAdSinglePlyChrSelectGC__sub_8028F2A0(&((CharacterAppearanceFields *)lbl_805D6520)->width);
    advance_animation_playback(arg0);
}

void free_field_FC__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    safe_free__23TAdSinglePlyChrSelectGCFUi(M2C_FIELD(arg0, s32 *, 0xFC));
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
}

typedef char RecoveredGlobal_8029057C_lbl_804D3F74_size[sizeof(RecoveredGlobal_8029057C_lbl_804D3F74) == 0x38 ? 1 : -1];

void load_creation_shape_rel(W_80290250 *arg0) {
    s32 rc;
    arg0->bufp = alloc__22TQuestVmDownLoadServerFPv(0x44000);
    rc = request_file_read__6TLobbyFiiPvPv(lbl_804D886C[get_display_index__12TCharaMakingFPv((*(void * *)&lbl_805D6520))], arg0->bufp, arg0->data, 0);
    arg0->rc = rc;
    if (rc >= 0) {
        if (arg0->rc > 0x44000) {
            return;
        }
    }
}

void TCharaMaking__bind_head_shape_nodes(CharacterAppearanceFields *appearance, void *model) {
    reset_creation_head_shapes();
    clear_next_entry__10TObjPlayerFiPv(model, &lbl_8051C0E8);
    s32 head = appearance->head + 1;
    for (s32 i = 0; i < 7; ++i) {
        clear_next_entry__10TObjPlayerFiPv(lbl_805D6550[head][i], &lbl_8051C110[i]);
    }
}

void TCharaMaking__bind_body_shape_nodes(CharacterAppearanceFields *appearance, void *model) {
    reset_creation_body_shapes();
    clear_next_entry__10TObjPlayerFiPv(model, &lbl_8051C228);
    for (s32 i = 0; i < 7; ++i) {
        clear_next_entry__10TObjPlayerFiPv(lbl_805D6550[0][i], &lbl_8051C430[i]);
    }
}

#pragma push
#pragma fp_contract on
#pragma opt_common_subs on
#pragma scheduling on
void reset_creation_body_shapes() {
  CreationModelNodeState *p = lbl_8051C228.nodes;
  s32 i = 0;
  do
  {
    TAdSinglePlyChrSelectGC__sub_8029057C((s32)(p));
    ++i;
    ++p;
  }
  while (i < 65);
  s32 group = 0;
  do
  {
    CreationModelNodeState *q = lbl_8051C430[group].nodes;
    s32 j = 0;
    do
    {
      TAdSinglePlyChrSelectGC__sub_8029057C((s32)(q));
      ++j;
      ++q;
    }
    while (j < 65);
    ++group;
  }
  while (group < 7);
}
#pragma pop

#pragma push
#pragma fp_contract on
#pragma opt_common_subs on
#pragma scheduling on
void reset_creation_head_shapes() {
  CreationModelNodeState *p = lbl_8051C0E8.nodes;
  s32 i = 0;
  do
  {
    TAdSinglePlyChrSelectGC__sub_8029057C((s32)(p));
    ++i;
    ++p;
  }
  while (i < 5);
  s32 group = 0;
  do
  {
    CreationModelNodeState *q = lbl_8051C110[group].nodes;
    s32 j = 0;
    do
    {
      TAdSinglePlyChrSelectGC__sub_8029057C((s32)(q));
      ++j;
      ++q;
    }
    while (j < 5);
    ++group;
  }
  while (group < 7);
}
#pragma pop

void TAdSinglePlyChrSelectGC__sub_8029057C(s32 arg0) {
    TAdSinglePlyChrSelectGC__sub_802905A4((void*)((void *) (arg0)), (void*)((void *) (&lbl_804D3F74.value)));
}

void TAdSinglePlyChrSelectGC__sub_802905A4(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }

    extern int lbl_805D6534;
int TAdSinglePlyChrSelectGC__sub_802905B8(void) {  return lbl_805D6534; }

extern s32 lbl_805D6530;

u8 is_active__23TAdSinglePlyChrSelectGCFv(void) {
    return (u8) (lbl_805D6530 == 1);
}

void TAdSinglePlyChrSelectGC__sub_802907E4(void* _w0) {
    for (s32 i = 0; i < 10; i++) {
        TAdSinglePlyChrSelectGC__sub_80290884((void*)(&lbl_80540888[i]), (void*)(lbl_80451CD0));
        TAdSinglePlyChrSelectGC__sub_80290884((void*)(&lbl_805408D8[i]), (void*)(lbl_80451CD0));
    }
    for (s32 i = 0; i < 5; i++) {
        TAdSinglePlyChrSelectGC__sub_80290884((void*)(&lbl_80540928[i]), (void*)(lbl_80451CD0));
    }
}

void TAdSinglePlyChrSelectGC__sub_80290884(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
void update_pair__23TAdSinglePlyChrSelectGCFPv(void* p) { TAdSinglePlyChrSelectGC__sub_802907E4((void*)(p)); TAdSinglePlyChrSelectGC__sub_8029071C(p); }
u8 *TAdSinglePlyChrSelectGC__sub_802908CC(u8 *arg0, s16 arg1) {
    Slot_8028F150 *p;
    Slot_8028F150 *end;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804D4054;
        for (p = lbl_8051D288, end = lbl_8051D288 + 128; p < end; p++) {
            if (p->f0 != 0) {
                update_char_panels__23TAdSinglePlyChrSelectGCFPv((u8 *) p);
            }
        }
        free_field_FC__23TAdSinglePlyChrSelectGCFPv((void *) (arg0));
        TLobby__sub_8001FE7C((void *) (lbl_805D6554), (int) (1));
        lbl_805D6554 = 0;
        TAdSinglePlyChrSelectGC__sub_802905D4((void *) (arg0));
        (*(s32 *)&lbl_805D654C) = 0;
        (*(s32 *)&lbl_805D6548) = 0;
        (*(s32 *)&lbl_805D6544) = 0;
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        free__11TOBoss4RockFUi((int) (M2C_FIELD(arg0, s32 *, 0xE0)));
        lbl_805D6558 = 0;
        lbl_805D653C = 0;
        lbl_805D49B4 = 0;
        lbl_805D6534 = 0;
        __dt__10TObjMotionFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

}
