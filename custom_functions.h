/*
 * @Author: chankruze (Chandan Kumar Mandal) 
 * @Date: 2019-06-23 11:59:14 
 * @Last Modified by: chankruze (Chandan Kumar Mandal)
 * @Last Modified time: 2019-06-23 12:10:31
 */
#include <stdio.h>
#include <stdlib.h>
/**
 * name: showbits
 * params: int
 * return: void 
*/
void showbits(int n)
{
    for (int i = 8; i > 0; i--)
    {
        n & (1 << (i - 1)) ? printf("1") : printf("0");
    }
}