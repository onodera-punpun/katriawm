#ifndef _WM_IPC_H
#define _WM_IPC_H

enum IPCCommand
{
    IPCNoop = 0,

    IPCMouseMove,
    IPCMouseResize,

    IPCLast,
};

#endif /* _WM_IPC_H */
