#ifndef COLORS_H
#define COLORS_H

#include <iostream>
using namespace std;

/*
==============================
        COLOR GUIDE
==============================
RED       -> Errors / Invalid actions
GREEN     -> Success messages
YELLOW    -> Warnings / Exit messages
BLUE      -> Section headers
CYAN      -> Menu borders / Titles
BRIGHTBLUE   -> User input prompts
WHITE     -> Normal text
BRIGHTCYAN-> Important highlights
RESET     -> Reset to default
==============================
*/

// ===== ANSI COLOR CODES =====
#define RESET       "\033[0m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define CYAN        "\033[36m"
#define WHITE       "\033[37m"
#define BRIGHTBLUE   "\033[94m"
#define BRIGHTCYAN  "\033[96m"

void showMenu();

#endif