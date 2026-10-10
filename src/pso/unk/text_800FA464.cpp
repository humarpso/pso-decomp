#include "types.h"
struct AsyncFileReadRequest {
    u32 flags;
    u8 pad04[4];
    u8 name[0x20];
    u8 *dst;
    s32 size;
    s32 count;
    u8 pad34[8];
    s32 tex;
    u8 pad40[0x24];
    s32 mode;
};

extern "C" {
void tmp_buf_release__6TLobbyFi(void *);
u32 tmp_buf_use_req__6TLobbyFPv(void *);
s32 load_bml_exec__6TLobbyFPvPv(s32, void *);
void notify_and_close__6TLobbyFv();
void destroy_instance__6TLobbyFv();
void pop_and_close__6TLobbyFv();
void TGStream__sub_800FDD64();
s32 TLobby__sub_803CC4C0(u32);
s32 read_checked_align__6TLobbyFiii(u32, s32, u32);
u32 adxf_open__6TLobbyFUii(void *, s32);
void load_gvm_texture_archive(u32, s32);
void move_data__6TLobbyFv(void *, u32, u32);
void copy_u16_array__6TLobbyFPvPvi(void *, u32, s32);
void move_words__6TLobbyFPvPvi(void *, u32, s32);
extern u8 fsrv_read_pvm_buffer_tag[];
extern AsyncFileReadRequest *async_file_read_current_request;
extern s32 async_file_read_state;
extern u32 async_file_read_sector_buffer;
extern u32 lobby_download_state_ptr;
extern u32 async_file_read_texture_buffer;
void process_async_file_reads(void);
}

extern "C" {

void process_async_file_reads(void) {
    switch (async_file_read_state) {
    case 0:
        if (async_file_read_current_request != NULL) {
            if (async_file_read_current_request->flags & 0x200) {
                pop_and_close__6TLobbyFv();
            } else {
                async_file_read_current_request->flags |= 0x100;
                if (async_file_read_current_request->flags & 2) {
                    async_file_read_texture_buffer = tmp_buf_use_req__6TLobbyFPv(fsrv_read_pvm_buffer_tag);
                    if (async_file_read_texture_buffer != 0) {
                        lobby_download_state_ptr = adxf_open__6TLobbyFUii(async_file_read_current_request->name, 0);
                        read_checked_align__6TLobbyFiii(lobby_download_state_ptr, async_file_read_current_request->count, async_file_read_texture_buffer);
                        async_file_read_state = 3;
                    }
                } else if (async_file_read_current_request->flags & 4) {
                    async_file_read_state = 4;
                } else {
                    u32 h = lobby_download_state_ptr = adxf_open__6TLobbyFUii(async_file_read_current_request->name, 0);
                    if (h != 0) {
                        if (async_file_read_current_request->count > 1) {
                            read_checked_align__6TLobbyFiii(h, async_file_read_current_request->count - 1, (u32)async_file_read_current_request->dst);
                            async_file_read_state = 1;
                        } else {
                            read_checked_align__6TLobbyFiii(h, 1, async_file_read_sector_buffer);
                            async_file_read_state = 2;
                        }
                    }
                }
            }
        }
        break;
    case 1:
        if (async_file_read_current_request->flags & 0x200) {
            destroy_instance__6TLobbyFv();
            pop_and_close__6TLobbyFv();
            async_file_read_state = 0;
        } else if (TLobby__sub_803CC4C0(lobby_download_state_ptr) == 3) {
            read_checked_align__6TLobbyFiii(lobby_download_state_ptr, 1, async_file_read_sector_buffer);
            async_file_read_state = 2;
        }
        break;
    case 2:
        if (async_file_read_current_request->flags & 0x200) {
            destroy_instance__6TLobbyFv();
            pop_and_close__6TLobbyFv();
            async_file_read_state = 0;
        } else if (TLobby__sub_803CC4C0(lobby_download_state_ptr) == 3) {
            u8 *dst = async_file_read_current_request->dst + ((async_file_read_current_request->count - 1) << 11);
            s32 n = async_file_read_current_request->size % 2048;
            if (n == 0) {
                n = 0x800;
            }
            switch (n & 3) {
            case 0:
                move_words__6TLobbyFPvPvi(dst, async_file_read_sector_buffer, n / 4);
                break;
            case 2:
                copy_u16_array__6TLobbyFPvPvi(dst, async_file_read_sector_buffer, n / 2);
                break;
            default:
                move_data__6TLobbyFv(dst, async_file_read_sector_buffer, n);
                break;
            }
            destroy_instance__6TLobbyFv();
            notify_and_close__6TLobbyFv();
        }
        break;
    case 3:
        if (async_file_read_current_request->flags & 0x200) {
            destroy_instance__6TLobbyFv();
            pop_and_close__6TLobbyFv();
            async_file_read_state = 0;
        } else if (TLobby__sub_803CC4C0(lobby_download_state_ptr) == 3) {
            load_gvm_texture_archive(async_file_read_texture_buffer, async_file_read_current_request->tex);
            tmp_buf_release__6TLobbyFi(fsrv_read_pvm_buffer_tag);
            notify_and_close__6TLobbyFv();
        }
        break;
    case 4:
        if (load_bml_exec__6TLobbyFPvPv(async_file_read_current_request->mode, async_file_read_current_request->name) != 0) {
            pop_and_close__6TLobbyFv();
            async_file_read_state = 0;
        }
        break;
    }
    TGStream__sub_800FDD64();
}

}
