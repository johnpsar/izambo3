#include "list.h"

int main(int argc, char **argv) {
  listnode** my_list;
  *my_list= NULL;
  fill_list(&my_list);
  list_print(my_list);
  return 0;
}
