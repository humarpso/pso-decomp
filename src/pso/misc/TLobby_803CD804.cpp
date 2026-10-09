#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_803CD804(void);
M2C_UNK close_adxf_handle__6TLobbyFPv(void *);

extern s32 lobby_adxf_current_file_id;
extern s32 lobby_adxf_open_file_handle;
extern s32 lobby_afs_toc_entry_index;
extern s32 lbl_805D75E8;

void TLobby__sub_803CD804(void) {
    close_adxf_handle__6TLobbyFPv((void *) (lobby_adxf_open_file_handle));
    lobby_adxf_open_file_handle = 0;
    lobby_adxf_current_file_id = -1;
    lobby_afs_toc_entry_index = 0;
    lbl_805D75E8 = 0;
}

}
