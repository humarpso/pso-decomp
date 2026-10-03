#include "types.h"

struct Node_802FDDD4 {
    u8 pad0[4];
    s32 v;
    u8 pad1[0x24];
    Node_802FDDD4 *c0;
    Node_802FDDD4 *c1;
    u8 pad2[4];
};

extern "C" {
void copy_model_node(u8 *, u8 *);
Node_802FDDD4 *TBoss8Dragon__sub_802FDDD4(Node_802FDDD4 *src, Node_802FDDD4 *dst, s32 v);
}

extern "C" {

void bswap_packet__12TBoss8DragonFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
void send_swapped_packet__12TBoss8DragonFPv(void* p);
int TLobby__send_and_handle_60(void*);
void TBoss8Dragon__sub_802FDE68(void);
void TBoss8Dragon__sub_802FDE6C(void);
void TBoss8Dragon__sub_802FDE70(void);
void TBoss8Dragon__sub_802FDE74(void);
void TBoss8Dragon__sub_802FDE78(void);
void TBoss8Dragon__sub_802FDE7C(void);
void TBoss8Dragon__sub_802FDE80(void);
void build_6xA8_gol_dragon_boss_actions(void* p);

Node_802FDDD4 *TBoss8Dragon__sub_802FDDD4(Node_802FDDD4 *src, Node_802FDDD4 *dst, s32 v) {
    Node_802FDDD4 *cur = dst;
    dst = dst + 1;
    copy_model_node((u8 *)cur, (u8 *)src);
    cur->v = v;
    if (src->c0 != NULL) {
        cur->c0 = dst;
        dst = TBoss8Dragon__sub_802FDDD4(src->c0, dst, v);
    }
    if (src->c1 != NULL) {
        cur->c1 = dst;
        dst = TBoss8Dragon__sub_802FDDD4(src->c1, dst, v);
    }
    return dst;
}

void build_6xA8_gol_dragon_boss_actions(void* p) { *(u8*)((char*)p + 0x0) = 168; *(u8*)((char*)p + 0x1) = 6; }

}
