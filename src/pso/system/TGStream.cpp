#include "pso/system/TGStream.h"
#include "pso/misc/TLobby_80131794.h"
#include "pso/unk/text_800F93B4.h"
#include "pso/object/TObjFish_8001ED90.h"
#include "pso/unk/text_800F7DAC.h"
#include "pso/system/memory.h"
#include "pso/misc/TGStream.h"
#include "pso/misc/TLobby.h"
#include "pso/enemy/TObjEneDD.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/misc/TQuestVmDownLoadServer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct Entry_800FD944 { u8 pad[0x24]; s32 size; };

struct Info_800FDBA8 {
    u8 pad[0x28];
    s32 size;
};

struct Stream_800FDBA8 {
    u8 pad[0x28];
    Info_800FDBA8 *info;
    u8 pad2[0xC];
};

extern "C" {
s32 get_file_size__6TLobbyFv(void *);
s32 is_split_screen();
void debug_print__6TLobbyFle(const char *, ...);
s32 TLobby__sub_803CC4C0(s32);
s32 read_checked_align__6TLobbyFlll(s32);
s32 strcmp(void *, void *);
s32 strlen(char *);
s32 strncpy(char *, char *, s32);
u32 adxf_open__6TLobbyFUii(char *, s32);
s32 get_gstream_buffered_bytes();
s32 TLobby__sub_803CC578(s32, s32, s32);
extern char lbl_8043DB04[];
extern char lbl_8043DB14[];
extern char lbl_8043DB28[];
extern char lbl_8043DB3C[];
extern char lbl_8043DB4C[];
extern char lbl_8043DB5C[];
extern char lbl_8043DB6C[];
extern char lbl_8043DB80[];
extern char lbl_8043DB94[];
extern char lbl_8043DBA8[];
extern char lbl_8043DBBC[];
extern char lbl_8043DBD0[];
extern char lbl_8043DBE4[];
extern char lbl_8043DBF8[];
extern char lbl_8043DC08[];
extern char lbl_8043DC18[];
extern char lbl_8043DC28[];
extern char lbl_8043DC3C[];
extern char lbl_8043DC50[];
extern char lbl_8043DC60[];
extern char lbl_8043DC70[];
extern char lbl_8043DC80[];
extern char lbl_8043DC94[];
extern char lbl_8043DCA8[];
extern char lbl_8043DCBC[];
extern char lbl_8043DCD0[];
extern char lbl_8043DCE4[];
extern char lbl_8043DCF8[];
extern char lbl_8043DD0C[];
extern char lbl_8043DD20[];
extern char lbl_8043DD34[];
extern char lbl_8043DD48[];
extern char lbl_8043DD5C[];
extern char lbl_8043DD70[];
extern char lbl_8043DD84[];
extern char lbl_8043DD98[];
extern char lbl_8043DDAC[];
extern char lbl_8043DDC0[];
extern char lbl_8043DDD4[];
extern char lbl_8043DDE8[];
extern char lbl_8043DE00[];
extern char lbl_8043DE18[];
extern char lbl_8043DE30[];
extern char lbl_8043DE48[];
extern char lbl_8043DE60[];
extern char lbl_8043DE78[];
extern char lbl_805DAA38[];
extern char lbl_8043DE90[];
extern u8 gstream_sector_buffer[];
extern s32 gstream_read_offset;
extern s32 gstream_buffer_read_offset;
extern s32 gstream_buffer_valid_size;
extern int gstream_file_size;
extern GslArchiveEntry gsl_archive_entries[256];
extern u32 TItemDrop__gsl_adxf_handle;
extern s32 TItemDrop__gsl_entry_count;
extern char gsl_archive_filename[32];
extern char *gsl_archive_path_buffer_ptr;
extern s32 TItemDrop__data_805D53CC;
extern s32 TItemDrop__data_805D53D0;
extern const char lbl_805DAA3C[4];
extern s32 gstream_tmp_buffer;
extern s32 lbl_8043DAF8[];

char *area_gsl_filename_table[23] = {
    lbl_8043DB04, lbl_8043DB14, lbl_8043DB28, lbl_8043DB3C, lbl_8043DB4C, lbl_8043DB5C, lbl_8043DB6C, lbl_8043DB80, lbl_8043DB94, lbl_8043DBA8, lbl_8043DBBC, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_8043DBD0, lbl_8043DBE4, lbl_8043DBF8, lbl_8043DC08, lbl_8043DC08, lbl_8043DC18, lbl_8043DC18
};

char *lbl_8049CAE4[23] = {
    lbl_8043DB04, lbl_8043DC28, lbl_8043DC3C, lbl_8043DC50, lbl_8043DC60, lbl_8043DC70, lbl_8043DC80, lbl_8043DC94, lbl_8043DCA8, lbl_8043DCBC, lbl_8043DCD0, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_8043DCE4, lbl_8043DCF8, lbl_8043DBF8, lbl_8043DD0C, lbl_8043DD0C, lbl_8043DD20, lbl_8043DD20
};

char *lbl_8049CB40[13] = {
    lbl_8043DD34, lbl_8043DD48, lbl_8043DD5C, lbl_8043DD70, lbl_8043DD84, lbl_8043DD98, lbl_8043DDAC, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_8043DDC0, lbl_8043DDD4
};

char *lbl_8049CB74[13] = {
    lbl_8043DDE8, lbl_8043DE00, lbl_8043DE18, lbl_8043DE30, lbl_8043DE48, lbl_8043DE60, lbl_8043DE78, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_8043DDC0, lbl_8043DDD4
};

s32 TLobby::get_resource_file_size() {
    Entry_800FD944 *e = ((Entry_800FD944 * (*)(void *, s32))find_gsl_entry)(this, 0);
    if (e != NULL) {
        return e->size;
    }
    return get_file_size__6TLobbyFv(this);
}

void load_area_gsl(void) {
    s32 n = TOKeyMachine01::get_global_state();
    if (n < 23) {
        if (TObjEneDD::check_v2_mode() != 0) {
            open_gsl_archive(lbl_8049CAE4[n]);
        } else {
            open_gsl_archive(area_gsl_filename_table[n]);
        }
    } else {
        if (is_split_screen() != 0) {
            open_gsl_archive(lbl_8049CB74[n - 23]);
        } else {
            open_gsl_archive(lbl_8049CB40[n - 23]);
        }
    }
}

s32 TGStream::load_file(s32 arg0) {
    s32 sp8[0xC];
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;

    ((s32 (*)(s32 *, s32, s32))open__8TGStreamFPvPvi)(sp8, arg0, 1);
    temp_r3_2 = ((s32 (*)(s32 *))get_gstream_file_size)(sp8);
    if (temp_r3_2 <= 0) {
        ((s32 (*)(s32 *, s32))destroy_gstream)(sp8, -1);
        return 0;
    }
    temp_r31 = (s32) (temp_r3_2 + 0x7FF) / 2048;
    temp_r3 = ((TQuestVmDownLoadServer *)(temp_r31 << 0xB))->alloc();
    if (temp_r3 == 0) {
        ((s32 (*)(s32 *, s32))destroy_gstream)(sp8, -1);
        return 0;
    }
    ((TGStream *)sp8)->read_sectors_sync(temp_r31, temp_r3);
    ((s32 (*)(s32 *, s32))destroy_gstream)(sp8, -1);
    return temp_r3;
}

s32 TGStream::read_whole_file(s32 arg0, u8 *arg1) {
    struct { u8 d[0x38]; } s;
    s32 size;
    s32 n;
    s32 rem;
    ((s32 (*)(s32 *, s32, s32))open__8TGStreamFPvPvi)((s32 *)&s, arg0, 1);
    size = ((s32 (*)(s32 *))get_gstream_file_size)((s32 *)&s);
    if (size <= 0) {
        ((s32 (*)(s32 *, s32))destroy_gstream)((s32 *)&s, -1);
        return -1;
    }
    n = size / 2048;
    if (n > 0) {
        ((TGStream *)((s32 *)&s))->read_sectors_sync(n, (s32)arg1);
    }
    rem = size % 2048;
    if (rem > 0) {
        ((TGStream *)((s32 *)&s))->read_sectors_sync(1, (s32)gstream_sector_buffer);
        ((TLobby *)(arg1 + n * 2048))->move_data((const void *)gstream_sector_buffer, (u32)rem);
    }
    ((s32 (*)(s32 *, s32))destroy_gstream)((s32 *)&s, -1);
    return size;
}

s32 TGStream::load_sct_file(s32 name, s32 dst) {
    Stream_800FDBA8 st;
    s32 size;
    s32 sectors;
    s32 buf;
    ((s32 (*)(s32 *, s32, s32))open__8TGStreamFPvPvi)((s32 *)((s32 *)&st), name, 1);
    size = ((s32 (*)(s32 *))get_gstream_file_size)((s32 *)((s32 *)&st));
    if (size <= 0) {
        ((s32 (*)(s32 *, s32))destroy_gstream)((s32 *)((s32 *)&st), -1);
        return -1;
    }
    sectors = (size + 0x7FF) / 2048;
    if (st.info != NULL && st.info->size != 0) {
        buf = ((TQuestVmDownLoadServer *)(((st.info->size + 0x7FF) / 2048) << 11))->alloc();
        if (buf == 0) {
            debug_print__6TLobbyFle(lbl_8043DE90);
        }
        ((TGStream *)((s32 *)&st))->read_sectors_sync(sectors, buf);
        prs_decompress_buffer(buf, dst);
        TAdSinglePlyChrSelectGC::safe_free(buf);
        size = st.info->size;
        ((s32 (*)(s32 *, s32))destroy_gstream)((s32 *)((s32 *)&st), -1);
        return size;
    }
    ((TGStream *)((s32 *)&st))->read_sectors_sync(sectors, dst);
    ((s32 (*)(s32 *, s32))destroy_gstream)((s32 *)((s32 *)&st), -1);
    return size;
}

void TGStream::read_sectors_sync(s32 arg1, s32 arg2) {
    TGStreamPrefix *arg0 = (TGStreamPrefix *)this;
    read_checked_align__6TLobbyFlll(arg0->adxf_handle);
    TLobby::set_read_params((int)(&arg0->adxf_handle), (int)arg1, (int)arg2);
loop_1:
    if (TLobby__sub_803CC4C0(arg0->adxf_handle) != 3) {
        TLobby::run_frame();
        goto loop_1;
    }
    TLobby::reset_read_state();
    gstream_read_offset += arg1 << 0xB;
}

void TGStream::reset() { gstream_read_offset = 0; ((int (*)())reset_gstream_buffer)(); }

void reset_gstream_buffer(void) {
    gstream_buffer_valid_size = 0;
    gstream_buffer_read_offset = 0x40000;
}

void TGStream__sub_800FDD64(void) {  }

int get_gstream_file_size(void) {  return gstream_file_size; }

GslArchiveEntry *find_gsl_entry(void *name) {
    GslArchiveEntry *e;
    s32 i;
    if (TItemDrop__gsl_adxf_handle == 0) {
        return 0;
    }
    e = gsl_archive_entries;
    for (i = 0; i < TItemDrop__gsl_entry_count; i++, e++) {
        if (strcmp(e, name) == 0) {
            return e;
        }
    }
    return 0;
}

void close_gsl_archive(void) {
    char buf[32];
    s32 n;
    if (TItemDrop__data_805D53CC == 0) {
        ((TLobby *)TItemDrop__gsl_adxf_handle)->close_adxf_handle();
        TItemDrop__gsl_adxf_handle = 0;
    } else {
        n = strlen(gsl_archive_path_buffer_ptr);
        if (n > 0) {
            change_file_extension__6TLobbyFPvPvPv((char *)buf, (char *)gsl_archive_filename, (char *)lbl_805DAA3C);
            fn_800F93B4((s32)buf, (s32)gsl_archive_entries, (void *)n);
        }
        TItemDrop__data_805D53D0 = 0;
        TItemDrop__data_805D53CC = 0;
    }
}

void open_gsl_archive(char *name) {
    GslArchiveEntry *e;
    s32 i;
    strncpy(gsl_archive_filename, name, 0x20);
    if (TItemDrop__data_805D53CC == 0) {
        TItemDrop__gsl_adxf_handle = adxf_open__6TLobbyFUii(name, 0);
        if (TItemDrop__gsl_adxf_handle != 0) {
            TGStream::reset();
            ((s32 (*)(u32, s32, GslArchiveEntry *))read_checked_align__6TLobbyFlll)(TItemDrop__gsl_adxf_handle, 6, gsl_archive_entries);
            TLobby::set_read_params((int)(&TItemDrop__gsl_adxf_handle), 6, (int)gsl_archive_entries);
            for (;;) {
                if (((s32 (*)(u32))TLobby__sub_803CC4C0)(TItemDrop__gsl_adxf_handle) == 3) {
                    break;
                }
                TLobby::run_frame();
            }
            TLobby::reset_read_state();
            TItemDrop__gsl_entry_count = 0;
            e = gsl_archive_entries;
            for (i = 0; i < 0xFF; i++, e++) {
                if ((s8)e->name[0] == 0) {
                    TItemDrop__gsl_entry_count = i;
                    return;
                }
            }
        }
    } else {
        TItemDrop__gsl_entry_count = 0;
        TItemDrop__data_805D53D0 = 1;
        *gsl_archive_path_buffer_ptr = 0;
    }
}

void TLobby::read_data_sync(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp8;

    sp8 = arg0;
    ((s32 (*)())read_checked_align__6TLobbyFlll)();
    TLobby::set_read_params((int)(&sp8), (int)arg1, (int)arg2);
loop_1:
    if (TLobby__sub_803CC4C0(sp8) != 3) {
        TLobby::run_frame();
        goto loop_1;
    }
    TLobby::reset_read_state();
    gstream_read_offset += arg1 << 0xB;
}

void align_gstream_read_offset(void *self, s32 n) {
    gstream_buffer_read_offset = n * ((gstream_buffer_read_offset + n - 1) / n);
}

s32 TGStream::read_data(s32 dst, s32 size) {
    TGStreamPrefix *arg0 = (TGStreamPrefix *)this;
    s32 total;
    s32 n;
    total = 0;
    while (size > 0) {
        if (refill_gstream_buffer(arg0->adxf_handle) <= 0) {
            break;
        }
        if (size < get_gstream_buffered_bytes()) {
            n = size;
        } else {
            n = get_gstream_buffered_bytes();
        }
        ((TLobby *)dst)->move_data((const void *)(gstream_tmp_buffer + gstream_buffer_read_offset), (u32)n);
        dst += n;
        size -= n;
        total += n;
        gstream_buffer_read_offset += n;
    }
    return total;
}

s32 get_gstream_buffered_bytes(void) {
  unsigned long new_var;
  s32 temp_r3;
  new_var = gstream_buffer_read_offset;
  new_var = gstream_buffer_valid_size - new_var;
  gstream_buffer_read_offset = gstream_buffer_read_offset;
  temp_r3 = new_var;
  return (gstream_buffer_valid_size - gstream_buffer_read_offset) & (((s32) ((-temp_r3) & (~new_var))) >> 0x1F);
}

s32 refill_gstream_buffer(s32 arg0) {
    s32 temp_r0;
    s32 var_r5;
    if (arg0 == 0) {
        return 0;
    }
    if (get_gstream_buffered_bytes() == 0) {
        temp_r0 = gstream_file_size - gstream_read_offset;
        if (temp_r0 < (var_r5 = 0x40000)) {
            var_r5 = temp_r0;
        }
        if (var_r5 > 0) {
            gstream_buffer_valid_size = var_r5;
            gstream_buffer_read_offset = 0;
            TLobby::read_data_sync(arg0, (s32) (var_r5 + 0x7FF) / 2048, gstream_tmp_buffer);
        }
    }
    return get_gstream_buffered_bytes();
}

TGStreamPrefix *destroy_gstream(TGStreamPrefix *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) (u32)arg0->archive_entry == 0U) {
            ((TLobby *)(arg0->adxf_handle))->close_adxf_handle();
        }
        if ((s32) arg0->direct_read_mode == 0) {
            ((TLobby *)lbl_8043DAF8)->tmp_buf_release();
        }
        if (arg1 > 0) {
            ::operator delete(arg0);
        }
    }
    return arg0;
}

TGStreamPrefix *open__8TGStreamFPvPvi(TGStreamPrefix *arg0, void *file, s32 arg2) {
    s32 temp_r3;

    arg0->adxf_handle = 0;
    arg0->archive_entry = NULL;
    TGStream::reset();
    arg0->archive_entry = (GslArchiveEntry *)((void * (*)(void *, s32))find_gsl_entry)(file, 1);
    if ((void *) arg0->archive_entry != NULL) {
        arg0->adxf_handle = (s32) TItemDrop__gsl_adxf_handle;
        TLobby__sub_803CC578(arg0->adxf_handle, arg0->archive_entry->archive_offset, 0);
        gstream_file_size = arg0->archive_entry->file_size;
        ((s32 (*)(void *, void *, s32))strncpy)(arg0, arg0->archive_entry, 0x20);
    } else {
        temp_r3 = get_file_size__6TLobbyFv(file);
        gstream_file_size = temp_r3;
        if (temp_r3 > 0) {
            arg0->adxf_handle = ((s32 (*)(void *, s32))adxf_open__6TLobbyFUii)(file, 0);
            ((s32 (*)(void *, void *, s32))strncpy)(arg0, file, 0x20);
        } else {
            gstream_file_size = 0;
            arg0->name[0] = 0;
        }
    }
    arg0->direct_read_mode = arg2;
    if ((s32) arg0->direct_read_mode == 0) {
        while (TLobby__sub_8001EEF4() == 0) {
            TLobby::pump_frames();
        }
        gstream_tmp_buffer = TLobby::tmp_buf_use_req((const char *)lbl_8043DAF8);
    }
    return arg0;
}

void TItemDrop__sub_800FE2D8(void) {  }

void reset_gstream_globals(void) {
    gstream_tmp_buffer = 0;
    TItemDrop__gsl_adxf_handle = 0;
    gsl_archive_filename[0] = 0;
    TItemDrop__data_805D53CC = 0;
    TItemDrop__data_805D53D0 = 0;
    TItemDrop__gsl_entry_count = 0;
}
GslArchiveEntry gsl_archive_entries[256];
char gsl_archive_filename[32];
u8 gstream_sector_buffer[0x2000];
typedef char GslDirectoryExtent[sizeof(gsl_archive_entries)==0x3000 ? 1 : -1];
typedef char GstreamSectorBufferExtent[sizeof(gstream_sector_buffer)==0x2000 ? 1 : -1];
}
