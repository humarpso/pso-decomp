#ifndef PSO_OBJECT_TOBJCMMAINMENU_H
#define PSO_OBJECT_TOBJCMMAINMENU_H
#include "pso/TObject.h"
#include <stddef.h>
class TObjCMMainMenu : public TObject {
public:
    virtual ~TObjCMMainMenu();
    virtual void run_task();
    virtual void render();
    void handle_creation_input();
    void sub_8029862C();
    void sub_80298534();
    void sub_80298518();
    void sub_802984FC();
    void sub_802981BC();
    void sub_80297EF4();
    void* character;
    s32 mode;
    s32* entries;
    s32 entry_count;
    s32 selected_entry;
    s32 delay;
    s32 reveal_ticks;
    f32 reveal;
    f32 submenu_fade;
    f32 slide_offset;
    f32 unknown44;
    f32 progress;
    s32 idle_ticks;
    TObject* nodes;
    f32 preview;
};
typedef char CreationMainMenuSize[sizeof(TObjCMMainMenu)==0x58?1:-1];
typedef char CreationMainMenu_character_offset[offsetof(TObjCMMainMenu,character)==0x1C?1:-1];
typedef char CreationMainMenu_mode_offset[offsetof(TObjCMMainMenu,mode)==0x20?1:-1];
typedef char CreationMainMenu_entries_offset[offsetof(TObjCMMainMenu,entries)==0x24?1:-1];
typedef char CreationMainMenu_entry_count_offset[offsetof(TObjCMMainMenu,entry_count)==0x28?1:-1];
typedef char CreationMainMenu_selected_entry_offset[offsetof(TObjCMMainMenu,selected_entry)==0x2C?1:-1];
typedef char CreationMainMenu_delay_offset[offsetof(TObjCMMainMenu,delay)==0x30?1:-1];
typedef char CreationMainMenu_reveal_ticks_offset[offsetof(TObjCMMainMenu,reveal_ticks)==0x34?1:-1];
typedef char CreationMainMenu_reveal_offset[offsetof(TObjCMMainMenu,reveal)==0x38?1:-1];
typedef char CreationMainMenu_submenu_fade_offset[offsetof(TObjCMMainMenu,submenu_fade)==0x3C?1:-1];
typedef char CreationMainMenu_slide_offset_offset[offsetof(TObjCMMainMenu,slide_offset)==0x40?1:-1];
typedef char CreationMainMenu_unknown44_offset[offsetof(TObjCMMainMenu,unknown44)==0x44?1:-1];
typedef char CreationMainMenu_progress_offset[offsetof(TObjCMMainMenu,progress)==0x48?1:-1];
typedef char CreationMainMenu_idle_ticks_offset[offsetof(TObjCMMainMenu,idle_ticks)==0x4C?1:-1];
typedef char CreationMainMenu_nodes_offset[offsetof(TObjCMMainMenu,nodes)==0x50?1:-1];
typedef char CreationMainMenu_preview_offset[offsetof(TObjCMMainMenu,preview)==0x54?1:-1];
#endif
