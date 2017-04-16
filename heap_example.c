#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *char_ptr;
    int *int_ptr;
    int mem_size;

    if (argc < 2) {
        mem_size = 50;
    } else {
        mem_size = atoi(argv[1]);
    }

    printf("\t[+] allocating %d bytes of memory on the heap for char_ptr\n", mem_size);
    char_ptr = (char *) malloc(mem_size); // allocating heap memory

    if(char_ptr == NULL) {
        fprintf(stderr, "Error: could not allocate heap memory.\n");
        exit(-1);
    }

    strcpy(char_ptr, "This memory is located on the heap.");
    printf("char_ptr (%p) --> '%s'\n", char_ptr, char_ptr);

    printf("\t[+] allocating 12 bytes of memory on the heap for int_ptr\n");
    int_ptr = (int *) malloc(12); // allocating more heap memory

    if(int_ptr == NULL) {
        fprintf(stderr, "Error: could not allocate heap memory.\n");
        exit(-1);
    }

    *int_ptr = 31337; // put the value 31337 where int_ptr is pointing.
    printf("int_ptr (%p) ---> %d\n", int_ptr, *int_ptr);

    printf("\t[+] allocating another 15 bytes for char_ptr\n");
    char_ptr = (char *) malloc(15); // moar heap memory
 
    if(char_ptr == NULL) {
        fprintf(stderr, "Error: could not allocate heap memory.\n");
        exit(-1);
    }

    strcpy(char_ptr, "new memory");
    printf("char_ptr (%p) --> '%s'\n", char_ptr, char_ptr);

    printf("\t [-] freeing int_ptr's heap memory...\n");
    free(int_ptr); // freeing heap memory
    printf("\t [-] freeing char_ptr's memory...\n");
    free(char_ptr); // Freeing the other block of heap memory.
}


