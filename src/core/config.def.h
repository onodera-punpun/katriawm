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

/* When multiple monitors are connected to your workstation, you might
 * want to select different initial workspaces on each monitor. For
 * example, when 3 monitors are connected, select workspace 20 on
 * monitor 0, workspace 2 on monitor 1, and workspace 12 on monitor 3.
 * If none of these configurations matches, use default_workspace. */
int initial_workspaces[] = {
    1, 3,      /* 2 monitors connected */
};
int default_workspace = 1;

#endif /* _WM_CONFIG_H */
