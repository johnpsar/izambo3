#include<stdlib.h>
#include<stdio.h>
#include<string.h>

static int t=0;

typedef struct listnode listnode;
struct listnode{
  int x;
  char name[100];
  listnode* next;
};


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


int main(int argc, char **argv) {
  char test[100], color[100];
  listnode** my_list;
  *my_list= NULL;
  while(getchar() != EOF){
    scanf("%s", color);
    scanf("%s", test);

    while(getchar() != '\n');

    printf("imma bout to insert: %s\n", test);
    list_insert_last(my_list, test);

  }
  list_print(my_list);
	return 0;
}
