#include "list.h"

static int t=0;

void list_insert_neighboor(listnode** list, char country[100]){

  if(*list != NULL){
    list_insert_neighboor(&((*list)->next), country);
  }else{
    *list = (listnode*)malloc(sizeof(listnode));
    (*list)->next=NULL;
    (*list)->neighboor=NULL;
    (*list)->x=t;
    strcpy((*list)->name, country);
  }
}

void list_insert_last(listnode** list, char country[100]){
  char test[100];
  int x;
  if(*list != NULL){
    list_insert_last(&((*list)->next), country);
  }else{
    *list = (listnode*)malloc(sizeof(listnode));
    (*list)->next=NULL;
    (*list)->neighboor = NULL;
    while((x=getchar()) != '\n' && x != EOF){
      ungetc(x, stdin);
      scanf("%s", test);
      list_insert_neighboor(&(*list)->neighboor, test);
    }
    (*list)->x=t++;
    strcpy((*list)->name, country);
  }
}


void list_print(listnode **list){
  printf("%d == %s\n", (*list)->x, (*list)->name);
  //list_print(&(*list)->neighboor);//edw kanei segme
  if((*list)->next != NULL){
    list_print(&((*list)->next));
  }
}

void fill_list(listnode*** list){
  char test[100], color[100];
  int x;
  while(x=getchar() != EOF){
    ungetc(x, stdin);
    scanf("%s", color);
    scanf("%s", test);


    printf("imma bout to insert: %s\n", test);
    list_insert_last(*list, test);
  }
}
