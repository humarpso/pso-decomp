#ifndef PSO_MISC_TWINDOWCHAT_H
#define PSO_MISC_TWINDOWCHAT_H
#include "pso/TObject.h"
#include "types.h"

class TWindowChat : public TObject {
public:
    virtual ~TWindowChat();
    virtual void run_task();
    virtual void render();

    s32 submit_keyboard_input();
    void open_input();
    void handle_dpad_shortcuts();
    void close_all_children();
    void open_next_input_window();

    u8 inputMode;
    u8 unknown_1D;
    u16 flags;
    void* composer;
    void* softKeyboard;
    void* hardKeyboard;
    void* auxiliaryWindow;
    void* symbolChatWindow;
    void* wordSelectWindow;
    void* result;
};
#include <stddef.h>
typedef char ChatBaseSize[(sizeof(TObject)==0x1C)?1:-1];
typedef char ChatSize[(sizeof(TWindowChat)==0x3C)?1:-1];
#define CHAT_OFFSET(field, offset) typedef char ChatOffset_##field[(offsetof(TWindowChat,field)==offset)?1:-1]
CHAT_OFFSET(inputMode,0x1C); CHAT_OFFSET(flags,0x1E);
CHAT_OFFSET(composer,0x20); CHAT_OFFSET(softKeyboard,0x24);
CHAT_OFFSET(hardKeyboard,0x28); CHAT_OFFSET(auxiliaryWindow,0x2C);
CHAT_OFFSET(symbolChatWindow,0x30); CHAT_OFFSET(wordSelectWindow,0x34);
CHAT_OFFSET(result,0x38);
#undef CHAT_OFFSET
#endif
