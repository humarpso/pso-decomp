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
s32 TLobby__sub_803CC578(s32, s32, s32);
extern u8 gstream_sector_buffer[];
extern GslArchiveEntry gsl_archive_entries[256];
extern char gsl_archive_filename[32];

const char lbl_8043DAF8[] = "TGStream";
const char lbl_8043DB04[] = "gsl_city.gsl";
const char lbl_8043DB14[] = "gsl_forest01.gsl";
const char lbl_8043DB28[] = "gsl_forest02.gsl";
const char lbl_8043DB3C[] = "gsl_cave01.gsl";
const char lbl_8043DB4C[] = "gsl_cave02.gsl";
const char lbl_8043DB5C[] = "gsl_cave03.gsl";
const char lbl_8043DB6C[] = "gsl_machine01.gsl";
const char lbl_8043DB80[] = "gsl_machine02.gsl";
const char lbl_8043DB94[] = "gsl_ancient01.gsl";
const char lbl_8043DBA8[] = "gsl_ancient02.gsl";
const char lbl_8043DBBC[] = "gsl_ancient03.gsl";
const char lbl_8043DBD0[] = "gsl_versus01.gsl";
const char lbl_8043DBE4[] = "gsl_versus02.gsl";
const char lbl_8043DBF8[] = "gsl_labo.gsl";
const char lbl_8043DC08[] = "gsl_ruins01.gsl";
const char lbl_8043DC18[] = "gsl_space01.gsl";
const char lbl_8043DC28[] = "gsl_aforest01.gsl";
const char lbl_8043DC3C[] = "gsl_aforest02.gsl";
const char lbl_8043DC50[] = "gsl_acave01.gsl";
const char lbl_8043DC60[] = "gsl_acave02.gsl";
const char lbl_8043DC70[] = "gsl_acave03.gsl";
const char lbl_8043DC80[] = "gsl_amachine01.gsl";
const char lbl_8043DC94[] = "gsl_amachine02.gsl";
const char lbl_8043DCA8[] = "gsl_aancient01.gsl";
const char lbl_8043DCBC[] = "gsl_aancient02.gsl";
const char lbl_8043DCD0[] = "gsl_aancient03.gsl";
const char lbl_8043DCE4[] = "gsl_aversus01.gsl";
const char lbl_8043DCF8[] = "gsl_aversus02.gsl";
const char lbl_8043DD0C[] = "gsl_aruins01.gsl";
const char lbl_8043DD20[] = "gsl_aspace01.gsl";
const char lbl_8043DD34[] = "gsl_jungle01.gsl";
const char lbl_8043DD48[] = "gsl_jungle02.gsl";
const char lbl_8043DD5C[] = "gsl_jungle03.gsl";
const char lbl_8043DD70[] = "gsl_jungle04.gsl";
const char lbl_8043DD84[] = "gsl_jungle05.gsl";
const char lbl_8043DD98[] = "gsl_seabed01.gsl";
const char lbl_8043DDAC[] = "gsl_seabed02.gsl";
const char lbl_8043DDC0[] = "gsl_jungle06.gsl";
const char lbl_8043DDD4[] = "gsl_jungle07.gsl";
const char lbl_8043DDE8[] = "gsl_jungle01_multi.gsl";
const char lbl_8043DE00[] = "gsl_jungle02_multi.gsl";
const char lbl_8043DE18[] = "gsl_jungle03_multi.gsl";
const char lbl_8043DE30[] = "gsl_jungle04_multi.gsl";
const char lbl_8043DE48[] = "gsl_jungle05_multi.gsl";
const char lbl_8043DE60[] = "gsl_seabed01_multi.gsl";
const char lbl_8043DE78[] = "gsl_seabed02_multi.gsl";
const char lbl_8043DE90[] = "TGStream::gsSctLoadFile Malloc Failed.";
const char lbl_805DAA38[4] = "";
const char lbl_805DAA3C[4] = "txt";
char *gsl_archive_path_buffer_ptr = (char *)gsl_archive_entries;
s32 gstream_tmp_buffer;
u32 TItemDrop__gsl_adxf_handle;
s32 TItemDrop__gsl_entry_count;
s32 TItemDrop__data_805D53CC;
s32 TItemDrop__data_805D53D0;
s32 gstream_read_offset;
s32 gstream_buffer_read_offset;
s32 gstream_buffer_valid_size;
int gstream_file_size;

const char *area_gsl_filename_table[23] = {
    lbl_8043DB04, lbl_8043DB14, lbl_8043DB28, lbl_8043DB3C, lbl_8043DB4C, lbl_8043DB5C, lbl_8043DB6C, lbl_8043DB80, lbl_8043DB94, lbl_8043DBA8, lbl_8043DBBC, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_8043DBD0, lbl_8043DBE4, lbl_8043DBF8, lbl_8043DC08, lbl_8043DC08, lbl_8043DC18, lbl_8043DC18
};

const char *lbl_8049CAE4[23] = {
    lbl_8043DB04, lbl_8043DC28, lbl_8043DC3C, lbl_8043DC50, lbl_8043DC60, lbl_8043DC70, lbl_8043DC80, lbl_8043DC94, lbl_8043DCA8, lbl_8043DCBC, lbl_8043DCD0, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_8043DCE4, lbl_8043DCF8, lbl_8043DBF8, lbl_8043DD0C, lbl_8043DD0C, lbl_8043DD20, lbl_8043DD20
};

const char *lbl_8049CB40[13] = {
    lbl_8043DD34, lbl_8043DD48, lbl_8043DD5C, lbl_8043DD70, lbl_8043DD84, lbl_8043DD98, lbl_8043DDAC, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_805DAA38, lbl_8043DDC0, lbl_8043DDD4
};

const char *lbl_8049CB74[13] = {
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
            open_gsl_archive((char *)lbl_8049CAE4[n]);
        } else {
            open_gsl_archive((char *)area_gsl_filename_table[n]);
        }
    } else {
        if (is_split_screen() != 0) {
            open_gsl_archive((char *)lbl_8049CB74[n - 23]);
        } else {
            open_gsl_archive((char *)lbl_8049CB40[n - 23]);
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
    temp_r31 = (temp_r3_2 + 0x7FF) / 2048;
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
    TLobby::set_read_params((int)&arg0->adxf_handle, (int)arg1, (int)arg2);
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
}
s32 get_gstream_buffered_bytes();
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
            TLobby::set_read_params((int)&TItemDrop__gsl_adxf_handle, 6, (int)gsl_archive_entries);
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
    TLobby::set_read_params((int)&sp8, (int)arg1, (int)arg2);
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
  new_var = gstream_buffer_read_offset;
  new_var = gstream_buffer_valid_size - new_var;
  gstream_buffer_read_offset = gstream_buffer_read_offset;
  return (gstream_buffer_valid_size - gstream_buffer_read_offset) & (((s32) ((-new_var) & (~new_var))) >> 0x1F);
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
            TLobby::read_data_sync(arg0, (var_r5 + 0x7FF) / 2048, gstream_tmp_buffer);
        }
    }
    return get_gstream_buffered_bytes();
}

TGStreamPrefix *destroy_gstream(TGStreamPrefix *g_stream_prefix, s16 arg1) {
    if (g_stream_prefix != NULL) {
        if ((u32) (u32)g_stream_prefix->archive_entry == 0U) {
            ((TLobby *)(g_stream_prefix->adxf_handle))->close_adxf_handle();
        }
        if ((s32) g_stream_prefix->direct_read_mode == 0) {
            ((TLobby *)lbl_8043DAF8)->tmp_buf_release();
        }
        if (arg1 > 0) {
            ::operator delete(g_stream_prefix);
        }
    }
    return g_stream_prefix;
}

TGStreamPrefix *open__8TGStreamFPvPvi(TGStreamPrefix *g_stream_prefix, void *file, s32 arg2) {
    s32 temp_r3;

    g_stream_prefix->adxf_handle = 0;
    g_stream_prefix->archive_entry = NULL;
    TGStream::reset();
    g_stream_prefix->archive_entry = (GslArchiveEntry *)((void * (*)(void *, s32))find_gsl_entry)(file, 1);
    if ((void *) g_stream_prefix->archive_entry != NULL) {
        g_stream_prefix->adxf_handle = (s32) TItemDrop__gsl_adxf_handle;
        TLobby__sub_803CC578(g_stream_prefix->adxf_handle, g_stream_prefix->archive_entry->archive_offset, 0);
        gstream_file_size = g_stream_prefix->archive_entry->file_size;
        ((s32 (*)(void *, void *, s32))strncpy)(g_stream_prefix, g_stream_prefix->archive_entry, 0x20);
    } else {
        temp_r3 = get_file_size__6TLobbyFv(file);
        gstream_file_size = temp_r3;
        if (temp_r3 > 0) {
            g_stream_prefix->adxf_handle = ((s32 (*)(void *, s32))adxf_open__6TLobbyFUii)(file, 0);
            ((s32 (*)(void *, void *, s32))strncpy)(g_stream_prefix, file, 0x20);
        } else {
            gstream_file_size = 0;
            g_stream_prefix->name[0] = 0;
        }
    }
    g_stream_prefix->direct_read_mode = arg2;
    if ((s32) g_stream_prefix->direct_read_mode == 0) {
        while (TLobby__sub_8001EEF4() == 0) {
            TLobby::pump_frames();
        }
        gstream_tmp_buffer = TLobby::tmp_buf_use_req((const char *)lbl_8043DAF8);
    }
    return g_stream_prefix;
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
