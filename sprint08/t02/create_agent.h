#pragma once

#include "stdio.h"
#include "stdlib.h"

typedef struct s_agent 
{
    char *name;
    int power;
    int strength;
}              t_agent;

t_agent *mx_create_agent(char *, int, int);

char *mx_strdup(const char *str);
char *mx_strnew(const int size);
int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
