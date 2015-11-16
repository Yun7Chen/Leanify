#ifndef PNG_H
#define PNG_H


#include "format.h"


extern bool is_fast;
extern bool is_verbose;
extern int iterations;


class Png : public Format
{

public:
    using Format::Format;

    size_t Leanify(size_t size_leanified = 0) override;

    static const uint8_t header_magic[8];

};




#endif