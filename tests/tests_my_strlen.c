#include "./../includes/my.h"

void redirect(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_strlen, len_str)
{
    int len = my_strlen("NULL");

    cr_assert_eq(len, 4);
}
