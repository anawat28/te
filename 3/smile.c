#include <stdio.h>
#include <string.h>

int Count(char** arr, int size) {
  int count = 0;
  
  for (int i = 0; i < size; i++) {
    char* smiley = arr[i];
    if (strlen(smiley) < 2 || strlen(smiley) > 3) {
      continue;
    }

    bool checkEyes = false;
    if (smiley[0] == ':' || smiley[0] == ';') {
      checkEyes = true;
    }

    bool checkNose = false;
    if (strlen(smiley) == 3 && (smiley[1] == '-' || smiley[1] == '~')) {
      checkNose = true;
    }

    bool checkMouth = false;
    if (smiley[strlen(smiley) - 1] == ')' || smiley[strlen(smiley) - 1] == 'D') {
      checkMouth = true;
    }

    if (checkEyes && checkMouth && (!checkNose || checkNose)) {
      count++;
    }
  }

  return count;
}

int main() {
//change testing data
  char* arr[] = {":)", ";(", ";}", ":-D"}; //change testing data this line

  int size = sizeof(arr) / sizeof(arr[0]); 

  int amount = Count(arr, size);
  printf("result : %d\n", amount);

  return 0;
}