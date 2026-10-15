#ifndef PSO_TOBJCMICON_H
#define PSO_TOBJCMICON_H
#include "pso/TObject.h"
#include "types.h"

class TObjCMIcon : public TObject {
public:
    virtual ~TObjCMIcon();
public:
    static void *create(void *arg0);
    static void reset_icon_flags();
    static void init_icon_table();
};

#endif
