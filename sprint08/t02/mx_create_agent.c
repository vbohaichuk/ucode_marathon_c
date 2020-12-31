#include "create_agent.h"
t_agent *mx_create_agent(char *name, int power, int strength) {
    if (!name)
        return NULL;
    t_agent *dublicate = malloc(sizeof(name));
    if(!dublicate)
        return NULL;
    dublicate->name = mx_strdup(name);
    dublicate->power = power;
    dublicate->strength = strength;
    return dublicate;
}
