// C*cked by Taylor King™ 2016

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char ** argv) {
  if (argc < 2) { 
    printf("run me with the name of the file\n");
    return 1;
  }
  FILE * read_file; 
  read_file = fopen(argv[1], "rb");
  fseek(read_file, 0L, SEEK_END);
  uint32_t size = ftell(read_file); 
  rewind(read_file);
  char * buffer = malloc(size);
  fread(buffer, size, 1, read_file);
  #pragma clang loop unroll(disable)
  for (int i = 0; i < size; i+=2) {
    char old_value = *(buffer + i);
    *(buffer + i) = *(buffer + i + 1);
    *(buffer + i + 1) = old_value;
  }
  FILE * write_file;
  write_file = fopen(strcat(argv[1], ".new.gba"), "wb");
  fwrite(buffer, size, 1, write_file); 
  free(buffer);
  return 0;
}

