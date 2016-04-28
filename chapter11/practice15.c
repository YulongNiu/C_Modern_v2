#include <stdio.h>
#include <stdbool.h>

#define MAXSIZE 1000

int content[MAXSIZE];
int *top = content;

bool IsEmpty(void);
bool IsFull(void);
void StackOverflow(void);
void StackUnderflow(void);
void Push(int a);
int *Pop(void);

int main(void)
{
  Push(1);
  Push(2);
  Push(3);
  printf("%d \n", *Pop());
  printf("%d \n", *Pop());
  printf("%d \n", *Pop());
  Pop();

  return 0;
}

bool IsEmpty(void) {
  return top == content;
}

bool IsFull(void) {
  return top == content + MAXSIZE - 1;
}

void StackOverflow(void) {
  printf("stack overflow! \n");
}

void StackUnderflow(void) {
  printf("stack underflow! \n");
}

void Push(int a) {
  if (IsFull()) {
    StackOverflow();
  } else {
    *top++ = a;
  }
}

int *Pop(void) {
  if (IsEmpty()) {
    StackUnderflow();
    return NULL;
  } else {
    return --top;
  }
}







