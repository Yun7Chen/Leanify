#ifndef ZIP_H
#define ZIP_H


#include "../lib/zopfli/deflate.h"

#include "format.h"


extern bool is_fast;
extern int iterations;
extern int depth;


class Zip : public Format
{
public:
    explicit Zip(void *p, size_t s = 0) : Format(p, s)
    {
        ZopfliInitOptions(&zopfli_options);
        zopfli_options.numiterations = iterations;
    }
    ~Zip()
    {
        depth--;
    }

    size_t Leanify(size_t size_leanified = 0) override;

    static const uint8_t header_magic[4];

private:
    ZopfliOptions zopfli_options;
};


#endif