#ifndef _WM_CONFIG_H
#define _WM_CONFIG_H

struct WorkareaInsets wai = {
    .top = 58+29,
    .left = 58,
    .right = 58,
    .bottom = 58,
};

int gap_pixels = 29;
float split_ratio = 0.618;
bool center_title = false;

struct Rule rules[] = {
    /* xprop(1):  WM_CLASS(STRING) = instance, class  */

    /* If both class and instance match a window, the defined actions
     * are taken. If "workspace", "monitor", or "floating" is -1, then
     * the corresponding field is not changed. If "class" or "instance"
     * is NULL, then this field matches everything.
     *
     * Both monitor indexes and workspace indexes start at 0. */

    /* class   instance   workspace   monitor  floating */
    {  NULL,   NULL,      -1,         -1,      -1  },
};

/* Have a look at ipc.h for valid values. */
enum LayoutAlgorithm default_layout = LAFloat;

int default_workspace = 1;
int max_workspaces = 3;

#endif /* _WM_CONFIG_H */
