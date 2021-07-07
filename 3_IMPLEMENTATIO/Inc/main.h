#ifndef MAIN_H
#define MAIN_H
struct coord;
void battle(int **ships_ptr, char **pseudo_gui_ptr,int n, struct coord x,int* count,int* miss);
void result(char **pseudo_gui_ptr,int n);

#endif
