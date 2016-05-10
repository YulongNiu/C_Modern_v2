#include <stdio.h>
#include <stdlib.h>

struct node {
  int value;
  struct node *next;
};

struct node *Add(struct node *n, int v);
void Print(struct node *n);

int main(void)
{
  struct node *first = NULL;

  first = Add(first, 1);
  first = Add(first, 2);

  Print(first);

  return 0;
}


void Print(struct node *n) {

  for (; n != NULL; n = n->next) {
    printf("%d->", n->value);
  }

  puts("NULL");
}

struct node *Add(struct node *n, int v) {

  struct node *new;

  new = malloc(sizeof(struct node));

  if (new == NULL) {
    printf("it failed \n");
    exit(EXIT_FAILURE);
  }

  new->value = v;
  new->next = n;

  return new;
}
