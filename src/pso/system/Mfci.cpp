#include "types.h"

typedef s32 (*RecoveredCallback_4873a87e26d6)(s32, s32 *, s32);
struct RecoveredGlobal_803CFEA0_lbl_8047DAE4 {
    s32 value;
    u8 remaining[0x14];
};

#include "pso/system/Mfci.h"

extern "C" {
extern RecoveredGlobal_803CFEA0_lbl_8047DAE4 lbl_8047E170;
extern s32 mfci_error_callback_context;
extern RecoveredCallback_4873a87e26d6 mfci_error_callback;
s32 mfci_get_position(MfciFileEntry *arg0);
void TLobby__sub_803D3988(void);
void TLobby__sub_803D39C0(void);
s32 memset(void *, int, int);
extern s32 lbl_8047E0C8[];
extern RecoveredCallback_4873a87e26d6 mfci_error_callback;
extern s32 mfci_error_callback_context;
void mfci_close(MfciFileEntry *arg0);
void TLobby__sub_803D3988(void);
void TLobby__sub_803D39C0(void);
extern s32 lbl_8047E18C[];
extern RecoveredCallback_4873a87e26d6 mfci_error_callback;
extern s32 mfci_error_callback_context;
s32 mfci_seek(MfciFileEntry *arg0, s32 arg1, s32 arg2);
unsigned long strlen(const char *);
int sprintf(char *, const char *, ...);
unsigned long strtoul(const char *, char **, int);
extern char mfci_error_message_buffer[0x12C];
extern char lbl_8047E04C[];
extern char lbl_8047E08C[];
extern RecoveredCallback_4873a87e26d6 mfci_error_callback;
extern s32 mfci_error_callback_context;
u32 mfci_parse_file_size(char *s);
extern RecoveredCallback_4873a87e26d6 mfci_error_callback;
extern s32 mfci_error_callback_context;
unsigned long strlen(const char *);
int sprintf(char *, const char *, ...);
unsigned long strtoul(const char *, char **, int);
char *strcpy(char *, const char *);
extern char mfci_error_message_buffer[0x12C];
extern char lbl_8047DF90[];
extern MfciFilePool mfci_file_pool;
MfciFileEntry *mfci_open(const char *name, s32 arg1, s32 mode);
}

extern "C" {

typedef char RecoveredGlobal_803CFEA0_lbl_8047DAE4_size[sizeof(RecoveredGlobal_803CFEA0_lbl_8047DAE4) == 0x18 ? 1 : -1];
s32 mfci_get_position(MfciFileEntry *arg0) {
    if (arg0 == NULL) {
        if (((s32 (*)(s32, s32 *, s32)) mfci_error_callback) != NULL) {
            mfci_error_callback(mfci_error_callback_context, &lbl_8047E170.value, 0);
        }
        return 0;
    }
    return arg0->position_sector;
}

s32 mfci_seek(MfciFileEntry *arg0, s32 arg1, s32 arg2) {
    if (arg0 == 0) {
        if (mfci_error_callback != 0) {
            mfci_error_callback(mfci_error_callback_context, lbl_8047E18C, 0);
        }
        return 0;
    }
    TLobby__sub_803D39C0();
    if (arg2 == 0) {
        arg0->position_sector = arg1;
    } else if (arg2 == 2) {
        arg0->position_sector = arg0->sector_count + arg1;
    } else if (arg2 == 1) {
        arg0->position_sector += arg1;
    }
    arg0->position_sector = arg0->position_sector < arg0->sector_count ? arg0->position_sector : arg0->sector_count;
    arg0->position_sector = arg0->position_sector > 0 ? arg0->position_sector : 0;
    TLobby__sub_803D3988();
    return arg0->position_sector;
}

void mfci_close(MfciFileEntry *arg0) {
    if (arg0 != 0) {
        if (arg0 == 0) {
            if (mfci_error_callback != 0) {
                mfci_error_callback(mfci_error_callback_context, lbl_8047E0C8, 0);
            }
        } else {
            TLobby__sub_803D39C0();
            arg0->state = 0;
            TLobby__sub_803D3988();
        }
        if ((s32)arg0->used == 1) {
            arg0->used = 0;
            memset(arg0, 0, sizeof(MfciFileEntry));
        }
    }
}
#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline void parse_803D4290(char *s, u32 *hi, u32 *lo) {
    char *end;
    u32 v;
    end = s;
    v = strtoul(s, &end, 16);
    if (hi != 0) {
        *hi = v;
    }
    if (*end != 0) {
        end++;
    }
    if (lo != 0) {
        *lo = strtoul(end, &end, 16);
    }
}

#pragma push
#pragma dont_inline off
#pragma inline_depth(4)
inline void parse_803D4058(char *s, u32 *hi, u32 *lo) {
    char *end;
    u32 v;
    end = s;
    v = strtoul(s, &end, 16);
    if (hi != 0) {
        *hi = v;
    }
    if (*end != 0) {
        end++;
    }
    if (lo != 0) {
        *lo = strtoul(end, &end, 16);
    }
}
inline MfciFileEntry *find_free_803D4058(void) {
    MfciFileEntry *r = 0;
    s32 i;
    for (i = 0; i < 40; i++) {
        if (mfci_file_pool.entries[i].used == 0) {
            r = &mfci_file_pool.entries[i];
            break;
        }
    }
    return r;
}
MfciFileEntry *mfci_open(const char *name, s32 arg1, s32 mode) {
    char *base = lbl_8047DF90;
    MfciFileEntry *f;
    if (name == 0) {
        if (mfci_error_callback != 0) {
            mfci_error_callback(mfci_error_callback_context, (s32 *)(base + 0x218), 0);
        }
        return 0;
    }
    if (mode != 0) {
        if (mfci_error_callback != 0) {
            mfci_error_callback(mfci_error_callback_context, (s32 *)(base + 0x23C), 0);
        }
        return 0;
    }
    f = find_free_803D4058();
    if (f == 0) {
        if (mfci_error_callback != 0) {
            mfci_error_callback(mfci_error_callback_context, (s32 *)(base + 0x260), 0);
        }
        return 0;
    }
    strcpy(f->name, name);
    f->block_size = 0x800;
    if (strlen(f->name) != 17) {
        sprintf(mfci_error_message_buffer, base + 0xBC, f->name);
        if (mfci_error_callback != 0) {
            mfci_error_callback(mfci_error_callback_context, (s32 *)mfci_error_message_buffer, 0);
        }
    }
    if (f->name[8] != '.') {
        sprintf(mfci_error_message_buffer, base + 0xFC, f->name);
        if (mfci_error_callback != 0) {
            mfci_error_callback(mfci_error_callback_context, (s32 *)mfci_error_message_buffer, 0);
        }
    }
    {
        u32 lo;
        parse_803D4058(f->name, 0, &lo);
        f->file_size = lo;
    }
    f->sector_count = (f->block_size - 1 + f->file_size) / f->block_size;
    f->position_sector = 0;
    f->read_sectors = 0;
    f->read_bytes = 0;
    f->state = 0;
    f->used = 1;
    return f;
}
#pragma pop

u32 mfci_parse_file_size(char *s) {
    u32 lo;
    if (strlen(s) != 17) {
        sprintf(mfci_error_message_buffer, lbl_8047E04C, s);
        if (mfci_error_callback != 0) {
            mfci_error_callback(mfci_error_callback_context, (s32 *)mfci_error_message_buffer, 0);
        }
    }
    if (s[8] != '.') {
        sprintf(mfci_error_message_buffer, lbl_8047E08C, s);
        if (mfci_error_callback != 0) {
            mfci_error_callback(mfci_error_callback_context, (s32 *)mfci_error_message_buffer, 0);
        }
    }
    parse_803D4290(s, 0, &lo);
    return lo;
}
#pragma pop

}

extern "C" {
char mfci_error_message_buffer[0x12C];
MfciFilePool mfci_file_pool;
}
