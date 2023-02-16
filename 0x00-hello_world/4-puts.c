#!/bin/bash
gcc -o cprogram -x c - <<EOF
#include <stdio.h>

int main() {
	puts("Programming is like building a multilingual puzzle");
		return 0;
}
EOF
./cprogram && echo ""
exit 0
