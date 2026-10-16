#ifndef PSO_MISC_TCHCRTAGINFORMATION_H
#define PSO_MISC_TCHCRTAGINFORMATION_H

#include "types.h"
#include "pso/TChCrTag.h"

struct TChCrTagInformation : public TChCrTag {
    virtual ~TChCrTagInformation();
    void draw_char_info_sprites();
    void render();
    void update_selected_char();
    void run_task();
    static void *create(void *arg0);
    static void *create_default();
    u8 unk_1C[0x20];
};

typedef char TChCrTagInformation_size[sizeof(TChCrTagInformation) == 0x3C ? 1 : -1];
#endif
