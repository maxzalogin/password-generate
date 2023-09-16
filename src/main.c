#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void gen(int len, int *array);
void print(int len, int *array);

int main(int argc, char *argv[]) {
  if (argc != 2) {
    printf("Error!");
  } else {
    int str_len = strlen(argv[1]);
    int pass_len = atoi(argv[1]);
    if (pass_len == 0 || pass_len < 6) {
      printf("Error!");
    } else {
      if ((str_len == 1 && pass_len <= 9) || (str_len == 2 && pass_len >= 10)) {
        int *array = NULL;
        array = malloc(pass_len * sizeof(int));
        srand(time(NULL));
        gen(pass_len, array);
        print(pass_len, array);
        free(array);
      } else {
        printf("Error!");
      }
    }
  }
  return 0;
}

void gen(int pass_len, int *array) {
  for (int i = 0; i < pass_len; i++) {
    array[i] = 33 + rand() % (126 - 33 + 1);
  }
}

void print(int pass_len, int *array) {
  for (int i = 0; i < pass_len; i++) {
    printf("%c", array[i]);
    if (i == pass_len - 1) {
      printf("\n");
    }
  }
}