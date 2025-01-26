int main() {
  int i = 1;
  int *ptr = &i;
  *ptr = 10;
  if (i == 10) {
    printf("i is 10\n");
  } else {
    printf("i is not 10\n");
  }
  return 0;
}