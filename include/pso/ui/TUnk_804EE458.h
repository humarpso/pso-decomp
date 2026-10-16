#ifndef PSO_UI_TUNK_804EE458_H
#define PSO_UI_TUNK_804EE458_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804EE458 : public TObject {
public:
    virtual ~TUnk_804EE458();
    void*init_camera_state(int);
    u8 unk_1C[0x20];
};
typedef char TUnk_804EE458_size[sizeof(TUnk_804EE458) == 0x3C ? 1 : -1];

#endif
