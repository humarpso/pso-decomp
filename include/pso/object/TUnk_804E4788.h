#ifndef PSO_OBJECT_TUNK_804E4788_H
#define PSO_OBJECT_TUNK_804E4788_H
#include "types.h"
#include "pso/TObject.h"

class TUnk_804E4788 : public TObject {
public:
    virtual ~TUnk_804E4788();
    void *destroy_and_delete(s16);
    virtual void run_task();
    u8 unk_1C[0x108];
};
typedef char TUnk_804E4788_size[sizeof(TUnk_804E4788) == 0x124 ? 1 : -1];

#endif
