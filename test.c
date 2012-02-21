#include "mem.h"
    

int main()
{
    /*
     * 使用之前要初始化一些变量
     * */
    mem_in_id = -1;
    is_check = 1;
    int *p;
    int *p1;
    int *p2;
    int *p3;
    mem_check_init();
    
    p = MALLOC(10*sizeof(int));
    p2 = MALLOC(10*sizeof(int));
    p3 = MALLOC(10*sizeof(int));
    p1 = MALLOC(10*sizeof(int));
    
    FREE(p2);
    FREE(p1);
    FREE(p);
    FREE(p3);


    mem_check_write();

    return 0;
}
