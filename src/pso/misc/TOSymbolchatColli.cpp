#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80178830 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
};

struct VBase_80178AD4 { u8 pad[0x18]; };

struct Obj_80178AD4 : VBase_80178AD4 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(s32);
    u8 pad1[0x338 - 0x1C];
    s32 arr[4];
};

struct Obj_80178890 { u8 pad[0x38]; f32 pos[3]; u8 pad44[0x334 - 0x44]; f32 radiusSq; s32 inside[4]; };

struct Player_80178890 { u8 pad[0x38]; f32 pos[3]; };

struct Obj_8017873C
{
  u8 pad[0x3C];
  f32 y3c;
  u8 pad40[0x68 - 0x40];
  f32 radius;
  u8 pad6c[0x84 - 0x6C];
  u32 ids[3];
  u8 pad90[0x334 - 0x90];
  f32 radiusSq;
  u8 pad338[0x348 - 0x338];
  u8 coll[0x10];
  f32 y358;
  u8 pad35c[0x36C - 0x35C];
  u32 ptrs[3];
  u16 hi[3];
  u16 lo[3];
};

struct HL_8017873C
{
  u8 pad[0x378];
  u16 hi;
  u16 pad37a[2];
  u16 lo;
};

struct Ent_8017873C
{
  u8 pad[0x1C];
  u8 f1c[0x3C];
};

extern "C" {
M2C_UNK newton_sqrtf(f32);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjRoomId__sub_80141CF4(void *, void *);
extern const f32 lbl_805DBA2C;
extern const f32 lbl_805DBA30;
void render__17TOSymbolchatColliFv(u8 *arg0);
void construct_actor_base__10TObjPlayerFPvPv(void *);
void reset_photon_effect__10TObjPlayerFPv(void *);
void init_collision_body_parts(void *, void *, int);
extern u8 lbl_804B4550[];
extern M2C_UNK __vt__17TOSymbolchatColli[];
extern s32 lbl_805D3194;
Obj_80178AD4 *TOSymbolchatColli__ct(Obj_80178AD4 *arg0, void *arg1, s32 arg2);
s32 is_locally_controlled__10TObjPlayerFPv();
f32 horizontal_distance_squared(void *, void *);
Player_80178890 *find_entity_by_id(u16);
void fn_8017866C(void *, s32, u16);
s32 get_state__17TOSymbolchatColliFPv(void *arg0);
void run_task__17TOSymbolchatColliFv(Obj_80178890 *self);
void bswap_entry__20TWindowSubSymbolChatFPv(void *);
void safe_free__23TAdSinglePlyChrSelectGCFUi(s32);
void prs_decompress_buffer(s32, s32);
s32 set_stream_and_load_file__6TLobbyFi(s32);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
extern u32 symbolchat_colli_param_table[];
extern s32 lbl_805D3190;
extern int symbol_chat_colli_entries;
void load_symbol_chat_data__17TOSymbolchatColliFv(void);
void set_motion_params__10TObjPlayerFPvPv(void *, void *);
void *memset(void *, int, u32);
extern u32 symbolchat_colli_param_table[];
extern int symbol_chat_colli_entries;
extern const f32 lbl_805DBA28;
void init_collision_params__17TOSymbolchatColliFPv(void *arg0);
}

extern "C" {

void *__dt__17TOSymbolchatColliFv(void *arg0, s16 arg1);
void *create__17TOSymbolchatColliFPv(void *arg0);
void free_rock__17TOSymbolchatColliFv(void);
s32 get_state__17TOSymbolchatColliFPv(void *arg0);
u8 is_current_floor_switch_set(u16);
M2C_UNK free_collision_body_parts(void *);
M2C_UNK unregister_object_by_id(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
M2C_UNK destroy_motion_object__10TObjPlayerFPvs(void *, M2C_UNK);
int free__11TOBoss4RockFUi(void*);

s32 get_state__17TOSymbolchatColliFPv(void *arg0) {
    if (is_current_floor_switch_set(M2C_FIELD(arg0, u16 *, 0x37C)) == 1) {
        return 3;
    }
    if (is_current_floor_switch_set(M2C_FIELD(arg0, u16 *, 0x37A)) == 1) {
        return 2;
    }
    return (u32) __cntlzw(1 - is_current_floor_switch_set(M2C_FIELD(arg0, u16 *, 0x378))) >> 5;
}

extern void *tl_05;

typedef struct Ent_8017873C Ent_8017873C;
typedef struct HL_8017873C HL_8017873C;
typedef struct Obj_8017873C Obj_8017873C;
void init_collision_params__17TOSymbolchatColliFPv(void *arg0) {
  Obj_8017873C *self = (Obj_8017873C *) arg0;
  s32 i;
  self->radiusSq = self->radius * self->radius;
  memset(self->coll, 0, 0x24);
  self->y358 = self->y3c / lbl_805DBA28;
  set_motion_params__10TObjPlayerFPvPv(self, self->coll);
  for (i = 0; i < 3; i++)
  {
    u32 v = self->ids[i];
    u32 hi;
    u32 lo;
    hi = v >> 16;
    lo = (u16) v;
    if (symbolchat_colli_param_table[i] == 0)
    {
      hi = v >> 16;
      if (lo < 0x18)
      {
        self->ptrs[i] = (u32) (&((Ent_8017873C *) symbol_chat_colli_entries)[lo].f1c);
      }
      else
      {
        self->ptrs[i] = 0;
      }
    }
    else
    {
      self->ptrs[i] = symbolchat_colli_param_table[i];
    }
    {
      HL_8017873C *h = (HL_8017873C *) (((u8 *) self) + (i * 2));
      if (hi < 0x100)
      {
        h->hi = hi;
      }
      else
      {
        h->hi = 0xFFFF;
      }
      h->lo = lo;
    }
  }
}

void render__17TOSymbolchatColliFv(u8 *arg0) {
    Stack_80178830 stack;
    if (check_demo_mode__10TObjPlayerFv() == 1) {
        stack.sp8 = lbl_805DBA2C;
        stack.spC = lbl_805DBA30;
        stack.sp10 = lbl_805DBA2C;
        stack.sp14 = lbl_805DBA2C;
        newton_sqrtf((f32) (M2C_FIELD(arg0, f32 *, 0x334)));
        TObjRoomId__sub_80141CF4((void *) (arg0 + 0x38), (void *) (&stack.sp8));
    }
}

void run_task__17TOSymbolchatColliFv(Obj_80178890 *self) {
    u16 i;
    Player_80178890 *pl;
    for (i = 0; i != 4; i++) {
        pl = find_entity_by_id(i);
        if (pl != NULL && is_locally_controlled__10TObjPlayerFPv() != 0) {
            if (horizontal_distance_squared(pl->pos, self->pos) < self->radiusSq) {
                if (self->inside[i] == 0) {
                    self->inside[i] = 1;
                    s32 st = get_state__17TOSymbolchatColliFPv(self);
                    fn_8017866C(self, st, i);
                }
            } else {
                if (self->inside[i] != 0) {
                    self->inside[i] = 0;
                }
            }
        }
    }
}

void *create__17TOSymbolchatColliFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x384);
    if (o != NULL) {
        o = TOSymbolchatColli__ct((Obj_80178AD4 *)(o), (void *)(tl_05), (s32)(arg0));
    }
    return o;
}

    extern int symbol_chat_colli_entries;
void free_rock__17TOSymbolchatColliFv(void) { free__11TOBoss4RockFUi((void*)(symbol_chat_colli_entries)); symbol_chat_colli_entries = 0; }

extern M2C_UNK __vt__17TOSymbolchatColli[];

void load_symbol_chat_data__17TOSymbolchatColliFv(void) {
    s32 h;
    s32 i;
    symbol_chat_colli_entries = alloc_buffer__11TOBoss4RockFPv(0x840);
    h = set_stream_and_load_file__6TLobbyFi(lbl_805D3190);
    if (h != 0) {
        prs_decompress_buffer(h, symbol_chat_colli_entries);
    }
    safe_free__23TAdSinglePlyChrSelectGCFUi(h);
    for (i = 0; i < 0x18; i++) {
        bswap_entry__20TWindowSubSymbolChatFPv((u8 *)symbol_chat_colli_entries + i * 0x58);
    }
    for (i = 0; i < 3; i++) {
        symbolchat_colli_param_table[i] = 0;
    }
}

void *__dt__17TOSymbolchatColliFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TOSymbolchatColli;
        unregister_object_by_id((M2C_UNK *)arg0);
        free_collision_body_parts(arg0);
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Obj_80178AD4 *TOSymbolchatColli__ct(Obj_80178AD4 *arg0, void *arg1, s32 arg2) {
    s32 i;
    construct_actor_base__10TObjPlayerFPvPv(arg0);
    *(u8 **)((u8 *)arg0 + 0x18) = ((u8 *)&__vt__17TOSymbolchatColli);
    *(s32 *)arg0 = lbl_805D3194;
    arg0->v5(arg2);
    init_collision_body_parts(arg0, lbl_804B4550, 1);
    reset_photon_effect__10TObjPlayerFPv(arg0);
    init_collision_params__17TOSymbolchatColliFPv((void *)(arg0));
    for (i = 0; i < 4; i++) {
        arg0->arr[i] = 0;
    }
    return arg0;
}

}
