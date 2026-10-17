#include "pso/TItemAttacker.h"
#include "pso/system/vector.h"

#include "types.h"
#include "pso/misc/TLobby.h"

struct RecoveredGlobal_8010355C_lbl_8043E038 { char value[0xA]; };
typedef char RecoveredGlobal_8010355C_lbl_8043E038_size[sizeof(RecoveredGlobal_8010355C_lbl_8043E038) == 0xA ? 1 : -1];

struct Rec_80103368 { u8 pad[0x1C]; f32 v[3]; u8 pad2[0x2C - 0x28]; };

struct M_80103368 { u8 pad[0xA4]; Rec_80103368 *recs; };

extern "C" {
void mem_free(void *p);
extern s32 lbl_8043E038[];
extern s32 item_buffer_temp_mode;
extern s32 item_buff_buffer;
void TItemBuff__ct(void);
void *find_entity_by_id(u16 id);
s32 __ct__7TObjectFP7TObject(void*,s32);
extern s32 __vt__13TItemAttacker[];
extern s32 TItemAttacker__name;
u8 *__ct__13TItemAttackerFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void TItemAttacker__sub_8010349C(u32 arg0);
int get_item_chunk_buffer(int a0);
}
s32 create_item_buff(s32 arg0);
extern "C" {
u8 *TItemTimer__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TLobby__sub_8001EEF4();
s32 deliver_delayed_weapon_hit();
u32 __nw__7TObjectFUl(s32);
void *mem_alloc(u32 size);
void queue_destruction__7TObjectFv(void *arg0);

u8 *__ct__13TItemAttackerFv(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u8* temp_r5;
    u8 *entity;
    __ct__7TObjectFP7TObject(arg0,arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TItemAttacker;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TItemAttacker__name;
    ((TItemAttacker *)(arg0 + 0x1C))->copy_from((void *)arg4);
    *(s32 *)((s8 *)arg0 + 0x34) = 0;
    VecCopy((Vec *)(arg0 + 0x44), (const Vec *)(arg2));
    entity = (u8 *)(find_entity_by_id(*(u16 *)((s8 *)arg0 + 0x2A)));
    if (entity != NULL) {
        VecCopy((Vec *)(arg0 + 0x38), (const Vec *)(((M_80103368 *)entity)->recs[*(s16 *)((s8 *)arg0 + 0x2C)].v));
    } else {
        *(s32 *)((s8 *)arg0 + 0x34) = 1;
    }
    return arg0;
}

void TItemAttacker::copy_from(void *arg1) {
    *(s32 *)&this->m_name = (s32) *(s32 *)((s8 *)arg1 + 0);
    *(s32 *)&this->m_flags = (s32) *(s32 *)((s8 *)arg1 + 4);
    *(s32 *)&this->m_prev = (s32) *(s32 *)((s8 *)arg1 + 8);
    *(u16 *)&this->m_next = (u16) *(u16 *)((s8 *)arg1 + 0xC);
    *(u16 *)((s8 *)this + 0xE) = (u16) *(u16 *)((s8 *)arg1 + 0xE);
    *(s16 *)&this->m_up = (s16) *(s16 *)((s8 *)arg1 + 0x10);
    *(f32 *)&this->m_down = (f32) *(f32 *)((s8 *)arg1 + 0x14);
}

void TItemAttacker::spawn_item_timer(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r3;
    if (arg0 != 0) {
        temp_r3 = (void *)__nw__7TObjectFUl(0x28);
        if (temp_r3 != (void *)0U) {
            TItemTimer__ct((u8 *)temp_r3, arg0, arg1, arg2);
        }
    }
}

void TItemAttacker__sub_8010349C(u32 arg0) {
    if (arg0 != 0U) {
        deliver_delayed_weapon_hit();
    }
}

TItemAttacker::~TItemAttacker() {}
void TItemAttacker::run_task() { if (*(int*)((char*)this + 0x34) != 0) { queue_destruction__7TObjectFv(this); } }

    extern int item_nj_chunk_buffer_table[];
int get_item_chunk_buffer(int a0) {  return item_nj_chunk_buffer_table[a0]; }

void TItemBuff__ct(void) {
    if ((u32) (*(u32 *)&item_buff_buffer) != 0) {
        if ((s32) item_buffer_temp_mode != 0) {
            ((TLobby *)((s32) &(*(RecoveredGlobal_8010355C_lbl_8043E038 *)&lbl_8043E038).value))->tmp_buf_release();
        } else {
            mem_free((void *)(*(u32 *)&item_buff_buffer));
        }
        (*(u32 *)&item_buff_buffer) = 0;
    }
}
}

s32 create_item_buff(s32 arg0) {
    s32 temp_r3;

    if (arg0 != 0) {
        TItemBuff__ct();
        temp_r3 = TLobby__sub_8001EEF4();
        item_buffer_temp_mode = temp_r3;
        if ((temp_r3 != 0) && (arg0 < 0x40000)) {
            item_buff_buffer = TLobby::tmp_buf_use_req((const char *)lbl_8043E038);
        } else {
            item_buff_buffer = (s32)mem_alloc(arg0);
        }
    }
    return item_buff_buffer;
}
