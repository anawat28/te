#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
  char temp = *a;
  *a = *b;
  *b = temp;
}

void printStr(char *str, int i, int n) {
  if (i == n) {
    printf("%s ", str);
    return;
  }

  for (int j = i; j <= n; j++) {
    swap(str + i, str + j);
    printStr(str, i + 1, n);
    swap(str + i, str + j);
  }
}

int main() {
  char str[] = "a";
  int n = strlen(str);

  printf("With input :\"%s\"\n", str);
  printStr(str, 0, n - 1);

  return 0;
}