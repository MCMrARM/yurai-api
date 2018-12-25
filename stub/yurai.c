#include <yurai/hook.h>

void yurai_add_library(void *lib) {}
void yurai_remove_library(void *lib) {}
void *yurai_dlsym(void *lib, const char *name) {}
yurai_hook_t yurai_hook(void *lib, const char *name, void *hook, void **orig) {}
void yurai_delete_hook(yurai_hook_t hook) {}
void yurai_apply_hooks() {}
