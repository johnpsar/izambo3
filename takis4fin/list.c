#include "list.h"

static int t=0;

void list_insert_last(listnode** list, char country[100]){
  if(*list != NULL){
    list_insert_last(&((*list)->next), country);
  }else{
    *list = (listnode*)malloc(sizeof(listnode));
    (*list)->next=NULL;
    (*list)->x=t++;
    strcpy((*list)->name, country);
  }
}

void list_print(listnode **list){
  printf("%d == %s\n", (*list)->x, (*list)->name);
  if((*list)->next != NULL){
    list_print(&((*list)->next));
  }
}

void fill_list(listnode*** list){
  char test[100], color[100];
  while(getchar() != EOF){
    scanf("%s", color);
    scanf("%s", test);

    while(getchar() != '\n');

    printf("imma bout to insert: %s\n", test);
    list_insert_last(*list, test);
  }
}
