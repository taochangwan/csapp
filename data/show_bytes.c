#include <stdio.h>

typedef unsigned char * byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++) {
        printf(" %.2x", start[i]);
    }
    putchar('\n');
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof (int));
}

void show_float(int x) {
    show_bytes((byte_pointer) &x, sizeof (float));
}

void show_pointer(void *  x) {
    show_bytes((byte_pointer) &x, sizeof (void *));
}

void test_show_bytes(int val) {
    int ival = val;
    float fval = (float) val;
    int * pval = &ival;

    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}

int main(void) {

    test_show_bytes(12345);

    return 0;
}
