#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Ent_A { s32 a; M2C_UNK (*fn)(s32, s32); };

extern "C" {
void qst_getargs_801F26A8(s32 arg0);
s32 read_be_u16(struct Ent_A *);
s32 read_packet_byte__6TLobbyFv();
extern struct Ent_A qst_opcode_table[];
void qst_getargs_801F26A8(s32 arg0);
void qst_op_gclear(u16 arg0);
M2C_UNK clear_story_flag(s32);
    extern int lbl_805D53A0;
void qst_op_gclear(u16 arg0);
void qst_op_gset(u16 arg0);
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(s32);
void qst_op_gset(u16 arg0);
void qst_op_thread_stg(u16 arg0);
int create__12TQuestThreadFi(void*);
void qst_op_thread_stg(u16 arg0);
void qst_op_thread(u16 arg0);
int create_quest_thread(void*);
void qst_op_thread(u16 arg0);
void qst_op_rev(s32 arg0);
void qst_op_clear(s32 arg0);
void qst_op_set(s32 arg0);
extern s32 TLobby__data_805D5E74;
void TLobby__sub_801F2570(s32 arg0, s32 arg1);
void TLobby__sub_801F258C(s32 arg0, s32 arg1);
void qst_op_let(s32 arg0, s32 arg1);
}

extern "C" {

void TLobby__sub_801F25A4(int a0, int a1);
void qst_op_exit(void);
void qst_op_grev(s32 arg0);
void qst_op_leta_letb(int a0, int a1);
void qst_op_leti(int a0, int a1);
void qst_op_nop(void);
void qst_op_ret(void);
void qst_op_sync(void);
s32 pop_stack_value__6TLobbyFv();
M2C_UNK clear_story_flag(s32);
s32 get_story_flag(s32);
M2C_UNK dispatch_by_main_phase__14TBoss4DarkFalzFUs(s32);

void qst_op_grev(s32 arg0) {
    u16 v = arg0;
    if (get_story_flag(v) != 0) {
        clear_story_flag(v);
        return;
    }
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(v);
}

    extern int* TLobby__script_reg_array;

#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
void qst_op_gclear(u16 arg0) {
    clear_story_flag((s32)((void *) (arg0)));
}

#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
void qst_op_gset(u16 arg0) {
    dispatch_by_main_phase__14TBoss4DarkFalzFUs((s32)((void *) (arg0)));
}

void qst_op_rev(s32 arg0) {
    s32 temp_r3;
    temp_r3 = (arg0 * 4) & 0x3FC;
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r3) = (s32) (u8) (M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, temp_r3) == 0);
}

void qst_op_clear(s32 arg0) {
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 0;
}

void qst_op_set(s32 arg0) {
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = 1;
}

void TLobby__sub_801F2570(s32 arg0, s32 arg1) {
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = TLobby__data_805D5E74 + ((arg1 * 4) & 0x3FFFC);
}

void TLobby__sub_801F258C(s32 arg0, s32 arg1) {
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = (*(s32 *)&TLobby__script_reg_array) + ((arg1 * 4) & 0x3FC);
}

void TLobby__sub_801F25A4(int a0, int a1) { TLobby__script_reg_array[(unsigned char)(a0)] = (a1 & 0xffff); }

    extern int* TLobby__script_reg_array;
void qst_op_leta_letb(int a0, int a1) { TLobby__script_reg_array[(unsigned char)(a0)] = (a1 & 0xff); }

    extern int* TLobby__script_reg_array;
void qst_op_leti(int a0, int a1) { TLobby__script_reg_array[(unsigned char)(a0)] = a1; }

extern s32 TLobby__data_805D5E98;

#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

void qst_op_let(s32 arg0, s32 arg1) {
    M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg0 * 4) & 0x3FC)) = M2C_FIELD((*(s32 *)&TLobby__script_reg_array), M2C_UNK *, ((arg1 * 4) & 0x3FC));
}

void qst_op_thread_stg(u16 arg0) {
    create__12TQuestThreadFi((void *) (arg0));
}

#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
void qst_op_thread(u16 arg0) {
    create_quest_thread((void *) (arg0));
}

void qst_op_sync(void) { TLobby__data_805D5E98 = 1; }

void qst_op_exit(void) { TLobby__data_805D5E98 = 3; }

extern s32 TLobby__data_805D5E8C;
extern s32 TLobby__data_805D5E90;

void qst_op_ret(void) {
    u32 temp_r31;

    temp_r31 = (u32) (-TLobby__data_805D5E8C & ~TLobby__data_805D5E8C) >> 0x1FU;
    if (temp_r31 != 0) {
        TLobby__data_805D5E90 = pop_stack_value__6TLobbyFv();
    }
    if (temp_r31 == 0) {
        TLobby__data_805D5E98 = 2;
    }
}

void qst_op_nop(void) {  }
void qst_getargs_801F26A8(s32 arg0) {
    M2C_UNK (*temp_r31)(s32, s32);
    s32 temp_r30;
    struct Ent_A *e;
    e = (struct Ent_A *) (u8 *) qst_opcode_table;
    e = (struct Ent_A *) ((u8 *) e + (arg0 * 8));
    temp_r31 = e->fn;
    temp_r30 = read_be_u16(e);
    temp_r31(temp_r30, read_packet_byte__6TLobbyFv());
}

}
