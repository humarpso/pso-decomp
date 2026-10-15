#ifndef PSO_TOBJDFTENCHUFURU_H
#define PSO_TOBJDFTENCHUFURU_H

#include "pso/TObject.h"
#include "types.h"

class TObjDFTenchuFuru : public TObject {
public:
    u8 _pad1C[0x10];
 void* m_2c;
public:
    virtual ~TObjDFTenchuFuru();
    virtual void run_task();
public:
    void *create(void *arg1);
    static void capture_matrix_by_frame();
    static void register_callback();
    void transform_node_tree();
    void draw_node_tree();
};

#endif
