#ifndef BMP_H
#define BMP_H


#include "format.h"

// The support for this format is not yet implemented see bmp.cpp for details.

class Bmp : public Format
{
public:
    using Format::Format;

    size_t Leanify(size_t size_leanified = 0) override;

    static const uint8_t header_magic[2];

};


#endif