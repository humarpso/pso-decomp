#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Lobby_801D6498 {
    u8 pad[0x14];
    u32 arr[10];
    u8 pad2[0x4C - 0x3C];
    u8 fields[1];
};

typedef struct Obj_801D650C {
    u16 a;
    s16 b;
    s16 c;
    u8 pad6[2];
    s32 d;
    f32 e;
    f32 f;
    u8 arr[10][4];
    f32 g;
    u8 sub[4];
    u8 flags[6];
} Obj_801D650C;

extern "C" {
M2C_UNK send_6x39_photon_blast_ready();
extern const f32 lbl_805DC3DC;
void add_photon_blast_charge(u8 *arg0, f32 farg0);
M2C_UNK send_6x39_photon_blast_ready();
int update_ready__15TFontSmallLobbyFPv(void*);
int TFontSmallLobby__sub_801D677C(void *);
extern const f32 lbl_805DC3DC;
extern const f32 lbl_805DC3E4;
void add_photon_blast_chain_charge(u8 *arg0, f32 farg0);
int update_field_40__15TFontSmallLobbyFPv(void *);
M2C_UNK send_6x3A_clear_photon_blast_ready_flag();
extern const f32 lbl_805DC3DC;
extern const f32 lbl_805DC3E0;
extern const f32 lbl_805DC3E4;
s32 subtract_photon_blast_charge(u8 *arg0, f32 farg0);
void init_feed_timer__8TItemMagFPv(void *);
void TFontSmallLobby__sub_80152F28(void *);
void clear_photon_blast_state__10TObjPlayerFPv(void *);
void set_section_index__15TFontSmallLobbyFPvs(void *, s16);
void reset_fields__15TFontSmallLobbyFPv(void *);
void TFontSmallLobby__sub_801D67C8(void* p);
void reset_photon_blast_gauge(struct Lobby_801D6498 *s);
void clear_id__10TObjPlayerFPv(void *);
void TFontSmallLobby__sub_80152F28(void *);
void reset_fields__15TFontSmallLobbyFPv(void *);
extern const f32 lbl_805DC3E0;
extern const f32 lbl_805DC3E8;
void reset_state__15TFontSmallLobbyFPv(Obj_801D650C *arg0);
}

extern "C" {

void send_photon_blast_ready__15TFontSmallLobbyFv(void);
void update_if_ready__15TFontSmallLobbyFPv(void* p);
s32 TFontSmallLobby__sub_801D67AC(u8 *arg0);
u32 get_player_by_client_id(int);
u16 get_type__15TFontSmallLobbyFPv(void* p);
M2C_UNK send_field_state__10TObjPlayerFPv();

s32 subtract_photon_blast_charge(u8 *arg0, f32 farg0) {
  const f32 *new_var;
  f32 temp_f0;
  f32 temp_f1;
  temp_f0 = *((f32 *) (((s8 *) arg0) + 0x3C));
  if (temp_f0 < lbl_805DC3DC)
  {
    *((f32 *) (((s8 *) arg0) + 0x3C)) = (f32) (temp_f0 - farg0);
    if ((*((f32 *) (((s8 *) arg0) + 0x3C))) < (*(new_var = &lbl_805DC3E0)))
    {
      *((f32 *) (((s8 *) arg0) + 0x3C)) = (f32) (*new_var);
      return 0;
    }
    goto block_7;
  }
  *((f32 *) (((s8 *) arg0) + 0x3C)) = (f32) (temp_f0 - farg0);
  temp_f1 = *((f32 *) (((s8 *) arg0) + 0x3C));
  if (temp_f1 < lbl_805DC3DC)
  {
    send_6x3A_clear_photon_blast_ready_flag();
  }
  else
    if (temp_f1 < lbl_805DC3E4)
  {
    update_field_40__15TFontSmallLobbyFPv(arg0);
  }
  block_7:
  return 1;
}

void add_photon_blast_chain_charge(u8 *arg0, f32 farg0) {
    f32 temp_f0;
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x3C);
    if (temp_f0 < lbl_805DC3DC) {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (temp_f0 + farg0);
        if (M2C_FIELD(arg0, f32 *, 0x3C) >= lbl_805DC3DC) {
            send_6x39_photon_blast_ready();
        }
    } else if (temp_f0 < lbl_805DC3E4) {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (temp_f0 + farg0);
        if (M2C_FIELD(arg0, f32 *, 0x3C) >= lbl_805DC3E4) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DC3E4;
            update_ready__15TFontSmallLobbyFPv((void*)(arg0));
            TFontSmallLobby__sub_801D677C((void *) (arg0));
        }
    }
}

void add_photon_blast_charge(u8 *arg0, f32 farg0) {
    f32 temp_f0;
    temp_f0 = M2C_FIELD(arg0, f32 *, 0x3C);
    if (temp_f0 < lbl_805DC3DC) {
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (temp_f0 + farg0);
        if (M2C_FIELD(arg0, f32 *, 0x3C) >= lbl_805DC3DC) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DC3DC;
            send_6x39_photon_blast_ready();
        }
    }
}

void send_photon_blast_ready__15TFontSmallLobbyFv(void) {
    if (get_player_by_client_id(((u16 (*)())get_type__15TFontSmallLobbyFPv)()) != 0U) {
        send_field_state__10TObjPlayerFPv();
    }
}

void update_if_ready__15TFontSmallLobbyFPv(void* p) { if (TFontSmallLobby__sub_801D67AC((u8 *)p) != 0) { update_ready__15TFontSmallLobbyFPv((void*)(p)); } }
void reset_photon_blast_gauge(struct Lobby_801D6498 *s) {
    s32 i;
    ((void (*)(void))TFontSmallLobby__sub_801D67C8)();
    set_section_index__15TFontSmallLobbyFPvs(s, 0);
    for (i = 0; i < 10; i++) {
        TFontSmallLobby__sub_80152F28(&s->arr[i]);
    }
    init_feed_timer__8TItemMagFPv(s);
    clear_photon_blast_state__10TObjPlayerFPv(s);
    reset_fields__15TFontSmallLobbyFPv(s->fields);
}
void reset_state__15TFontSmallLobbyFPv(Obj_801D650C *arg0) {
    s32 i;
    s32 k;
    u8 *fp;
    i = 0;
    arg0->a = 0xFFFF;
    arg0->b = 0;
    arg0->c = 0;
    arg0->d = 0;
    arg0->e = lbl_805DC3E8;
    arg0->f = lbl_805DC3E0;
    do {
        TFontSmallLobby__sub_80152F28(arg0->arr[i]);
        i++;
    } while (i < 10);
    arg0->g = lbl_805DC3E0;
    clear_id__10TObjPlayerFPv(arg0->sub);
    for (k = 0, fp = arg0->flags; k < 6; k++, fp++) {
        *fp = 0;
    }
    reset_fields__15TFontSmallLobbyFPv((u8 *)arg0 + 0x4C);
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Pkt_801D698C { u8 cmd; u8 size; u8 pad[2]; u16 a; u16 b; };

struct Obj_801D6A18 { s32 a[4]; s32 x10; s32 x14; };

typedef struct Rec_801D6AB4 {
    u8 pad0[8];
    f32 a;
    f32 b;
} Rec_801D6AB4;

extern "C" {
extern const f32 lbl_805DC3DC;
s32 obj_testFlags30(void *, s32);
s32 TFontSmallLobby__sub_801D67AC(u8 *arg0);
f32 fn_801D6AB4(void *, s32, s32);
s32 accumulate_damage_stats(u8 *arg0, s32 arg1, s32 arg2);
int is_valid_index__15TFontSmallLobbyFs(s16 arg0);
void TFontSmallLobby__sub_801D698C(Pkt_801D698C *p);
void clear_player_sub_object_slots(Obj_801D6A18 *p);
M2C_UNK init_forward__10TObjPlayerFPv(void *);
void* init_reset_fields__15TFontSmallLobbyFPv(void* p);
M2C_UNK __construct_array(void *, void *, int, int, int);
extern M2C_UNK fn_80152EF8[];
s32 construct_pb_controller__15TFontSmallLobbyFi(s32 arg0);
}

extern "C" {

void TFontSmallLobby__sub_801D671C(void* a0, int a1);
int TFontSmallLobby__sub_801D677C(void* p);
void TFontSmallLobby__sub_801D67C8(void* p);
void* TFontSmallLobby__sub_801D6804(void* p);
void* copy_packet_header_6x38__15TFontSmallLobbyFPvPv(void* p, void* a1);
void bswap_fields__15TFontSmallLobbyFPv(void* p);
int check_flag_at_40__15TFontSmallLobbyFPv(void* p);
void* clear_photon_blast_ready_flag__15TFontSmallLobbyFPv(void* p);
void draw_and_send__15TFontSmallLobbyFPv(void* p);
s32 get_field_04__15TFontSmallLobbyFPv(void* p);
s32 get_state__15TFontSmallLobbyFPv(void* p);
u16 get_type__15TFontSmallLobbyFPv(void* p);
void* handle_photon_blast_ready__15TFontSmallLobbyFPv(void* p);
void init_6x39_packet__15TFontSmallLobbyFPv(void* p);
void init_6x3A_packet__15TFontSmallLobbyFPv(void* p);
void init_pkt_cmd_3B__15TFontSmallLobbyFPv(void* p);
void* init_reset_fields__15TFontSmallLobbyFPv(void* p);
void reset_fields__15TFontSmallLobbyFPv(void* p);
void send_state__15TFontSmallLobbyFPv(void* p);
int set_bit1_at_40__15TFontSmallLobbyFPv(void* p);
int set_flag_40_bit5__15TFontSmallLobbyFPv(void* p);
void set_target_count__15TFontSmallLobbyFPvi(void* p, s32 v);
void set_target_index__15TFontSmallLobbyFPvi(void* p, s32 v);
void update_and_send_60__15TFontSmallLobbyFPv(void* p);
void update_and_send__15TFontSmallLobbyFPv(void* p);
int update_field_40__15TFontSmallLobbyFPv(void* p);
int update_ready__15TFontSmallLobbyFPv(void* p);
int TFontSmallLobby__sub_801C01BC(void*);
int TFontSmallLobby__sub_801C0228(void*);
int TLobby__send_and_handle_60(void*);
void TMainCursor__sub_8013E17C(void* p, f32 v);
f32 TMainCursor__sub_8013E184(void* p);
void TMainCursor__sub_8013E18C(void* p, s16 v);
u16 TMainCursor__sub_8013E194(void* p);
void TMainCursor__sub_8013E1C0(void* p, s32 v);
int bswap_16__FPUs(void*);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int read_be16_field2__10TObjPlayerFPv(void*);
int set_flags__10TObjPlayerFPvUi(void*, int);
void set_target__11TMainCursorFPvi(void* p, s32 a1);
void set_target_index__11TMainCursorFPvs(void* p, s16 v);
void update_cursor_pos__11TMainCursorFPv(void* p);

s32 construct_pb_controller__15TFontSmallLobbyFi(s32 arg0) {
    __construct_array((void *) (arg0 + 0x14), (void *) (fn_80152EF8), (int) (0), (int) (4), (int) (0xA));
    init_forward__10TObjPlayerFPv((void *) (arg0 + 0x40));
    init_reset_fields__15TFontSmallLobbyFPv((void*)((void *) (arg0 + 0x4C)));
    ((M2C_UNK (*)(void *))reset_state__15TFontSmallLobbyFPv)((void *) (arg0));
    return arg0;
}

int is_valid_index__15TFontSmallLobbyFs(s16 arg0) {
    u8 var_r4;
    var_r4 = 0;
    if (((arg0 >= 0) && (arg0 < 6)) || (arg0 == -1)) {
        var_r4 = 1;
    }
    return var_r4;
}

void reset_fields__15TFontSmallLobbyFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
int set_bit1_at_40__15TFontSmallLobbyFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x40, 2); }
void* clear_photon_blast_ready_flag__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
int update_ready__15TFontSmallLobbyFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x40, 2); }

s32 get_state__15TFontSmallLobbyFPv(void* p) { return *(s32*)((char*)p + 0x0); }
s32 get_field_04__15TFontSmallLobbyFPv(void* p) { return *(s32*)((char*)p + 0x4); }
int check_flag_at_40__15TFontSmallLobbyFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x40, 32); }
void set_target_count__15TFontSmallLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
void set_target_index__15TFontSmallLobbyFPvi(void* p, s32 v) { *(s32*)((char*)p + 0x0) = v; }
void TFontSmallLobby__sub_801D671C(void* a0, int a1) { *(int*)((char*)a0 + 0x4) = (*(int*)((char*)a0 + 0x4) + a1); }
int set_flag_40_bit5__15TFontSmallLobbyFPv(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x40, 32); }
int update_field_40__15TFontSmallLobbyFPv(void* p) { return clear_flags__11TAdRicoRingFPvUi((char*)p + 0x40, 16); }
int TFontSmallLobby__sub_801D677C(void* p) { return set_flags__10TObjPlayerFPvUi((char*)p + 0x40, 16); }
u16 get_type__15TFontSmallLobbyFPv(void* p) { return *(u16*)((char*)p + 0x0); }

s32 TFontSmallLobby__sub_801D67AC(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x3C) >= lbl_805DC3DC;
}

void TFontSmallLobby__sub_801D67C8(void* p) { *(s16*)((char*)p + 0x2) = 6; }
void* init_reset_fields__15TFontSmallLobbyFPv(void* p) { reset_fields__15TFontSmallLobbyFPv((void*)(p)); return p; }
void* TFontSmallLobby__sub_801D6804(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }
void init_pkt_cmd_3B__15TFontSmallLobbyFPv(void* p) { *(u8*)((char*)p + 0x0) = 59; *(u8*)((char*)p + 0x1) = 1; }
void update_and_send__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void init_6x3A_packet__15TFontSmallLobbyFPv(void* p) { *(u8*)((char*)p + 0x0) = 58; *(u8*)((char*)p + 0x1) = 1; }
void draw_and_send__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void init_6x39_packet__15TFontSmallLobbyFPv(void* p) { *(u8*)((char*)p + 0x0) = 57; *(u8*)((char*)p + 0x1) = 1; }
void update_and_send_60__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C01BC(p); TLobby__send_and_handle_60(p); }
void bswap_fields__15TFontSmallLobbyFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); }

void* copy_packet_header_6x38__15TFontSmallLobbyFPvPv(void* p, void* a1) { TFontSmallLobby__sub_801C0228(p); *(short*)((char*)p + 0x4) = *(unsigned short*)((char*)a1 + 0x4); *(short*)((char*)p + 0x6) = *(short*)((char*)a1 + 0x6); return p; }

void TFontSmallLobby__sub_801D698C(Pkt_801D698C *p) {
    p->a = 0xFFFF;
    p->b = 0;
    p->cmd = 0x38;
    p->size = 2;
}

void send_state__15TFontSmallLobbyFPv(void* p) { bswap_fields__15TFontSmallLobbyFPv((void*)((void*)(p))); TLobby__send_and_handle_60(p); }
void* handle_photon_blast_ready__15TFontSmallLobbyFPv(void* p) { TFontSmallLobby__sub_801C0228(p); return p; }

void clear_player_sub_object_slots(Obj_801D6A18 *p) {
    s32 i;
    for (i = 0; i < 4; i++) {
        p->a[i] = 0;
    }
    p->x10 = 0;
    p->x14 = 0;
}

s32 accumulate_damage_stats(u8 *arg0, s32 arg1, s32 arg2) {
  f32 new_var;
  f32 temp_f1;
  new_var = (f32) arg2;
  *((f32 *) (((s8 *) arg0) + 4)) = (f32) ((*((f32 *) (((s8 *) arg0) + 4))) + new_var);
  new_var = fn_801D6AB4(arg0, arg1, arg2);
  temp_f1 = new_var;
  *((f32 *) (((s8 *) arg0) + 0)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0))) + temp_f1);
  return (s32) temp_f1;
}

#define arg0 ((Rec_801D6AB4 *)arg0v)
f32 fn_801D6AB4(void *arg0v, s32 arg1, s32 arg2) {
    f32 v;
    f32 k = (f32)arg2;

    v = arg0->a;
    if (obj_testFlags30((void *)arg1, 0x10000000) != 0) {
        v = arg0->b;
    }
    return k * v;
}
#undef arg0

}
