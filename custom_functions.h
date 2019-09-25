/*
 * @Author: chankruze (Chandan Kumar Mandal) 
 * @Date: 2019-06-23 11:59:14 
 * @Last Modified by: chankruze (Chandan Kumar Mandal)
 * @Last Modified time: 2019-09-26 03:10:30
 */
/*===============*/
/* Preprocessors */
/*===============*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h> // For ioctl, TIOCGWINSZ
#include <unistd.h> // For STDOUT_FILENO

/*===========*/
/* Functions */
/*===========*/

// FN-01
/**
 * This function show the bits of a given integer
 * 
 * name: showBits
 * params: int
 * return: void 
*/
void showBits(int n){
    for (int i = 8; i > 0; i--){
        n & (1 << (i - 1)) ? printf("1") : printf("0");
    }
}

// FN-02
/**
 * This simple function clears the output screen. Just like clrscr()
 * 
 * name: clearScr
 * params: none
 * return: void 
*/
void clearScr(){
    printf("\033[H\033[J");
}

// FN-03
/**
 * Function to get terminal size (rows & colums).
 * 
 * This function uses ioctl with the standard output file number STDOUT_FILENO and TIOCGWINSZ.
 * It sets output terminal info to a winsize structure which address is provided as param.
 * 
 * name: getTerminal
 * params: struct winsize *ptr
 * return: void
*/
void getTerminal(struct winsize *terminal){
    ioctl(STDOUT_FILENO, TIOCGWINSZ, terminal);
}