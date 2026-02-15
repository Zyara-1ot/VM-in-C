#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

uint16_t program[] = {
    0xF026,
    0x1220,
    0xF026,
    0x1240,
    0x1060,
    0xF027,
    0xF025,
};

int main(int argc, char* * argv){
    char *outf = "sum.obj";
    FILE *f = fopen(outf, "wb");
    if(NULL==f){
        fprintf(stderr, "cannot write to file %s\n", outf);
    }
    size_t writ = fwrite(program, sizeof(uint16_t), sizeof(program), f);
    fprintf(stdout, "written size_t=%lu to file %s\n", writ, outf);

    fclose(f);
    return 0;
}
