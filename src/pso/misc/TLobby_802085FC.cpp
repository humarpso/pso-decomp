#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int link_matching_objects__6TLobbyFPv(void* p);
int spawn_objects_at_pos__6TLobbyFPv(void* p);
void TLobby__sub_8020863C(void);
void TLobby__sub_80208648(void);
void TLobby__sub_8020864C(s32 arg0);
int link_matching_objects__6TLobbyFss(void*);
int spawn_objects_at_pos__6TLobbyFss(void*);

int link_matching_objects__6TLobbyFPv(void* p) { return link_matching_objects__6TLobbyFss(p); }
int spawn_objects_at_pos__6TLobbyFPv(void* p) { return spawn_objects_at_pos__6TLobbyFss(p); }

    extern int lbl_805D6080;
void TLobby__sub_8020863C(void) { lbl_805D6080 = 1; }

void TLobby__sub_80208648(void) {  }

typedef struct {
    s32 x0;
    M2C_UNK (*fn)(M2C_UNK);
} Ent_8020864C;

M2C_UNK read_be_u32(void *);
extern Ent_8020864C lbl_804C93A8[];

void TLobby__sub_8020864C(s32 arg0) {
    Ent_8020864C *temp_r3;
    M2C_UNK (*temp_r31)(M2C_UNK);

    temp_r3 = lbl_804C93A8;
    temp_r3 += (u8)arg0;
    temp_r31 = temp_r3->fn;
    temp_r31(read_be_u32(temp_r3));
}

}
