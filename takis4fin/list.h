#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct listnode listnode;
struct listnode{
  int x;
  char name[100];
  listnode* neighboor;
  listnode* next;
};

void list_insert_last(listnode** list, char country[100]);

void list_print(listnode **list);

void fill_list(listnode*** list);
