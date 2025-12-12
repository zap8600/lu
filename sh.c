#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int main() {
    setbuf(stdout, NULL);
    setbuf(stderr, NULL);
}