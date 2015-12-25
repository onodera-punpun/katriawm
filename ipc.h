#ifndef _WM_IPC_H
#define _WM_IPC_H

#define IPC_ATOM_WINDOW "_"__NAME_UPPERCASE__"_COMMAND_WINDOW"
#define IPC_ATOM_COMMAND "_"__NAME_UPPERCASE__"_CLIENT_COMMAND"

enum IPCCommand
{
    IPCMouseMove = 0,
    IPCMouseResize,
    IPCNavMonitor,
    IPCNavWorkspace,
    IPCNavWorkspaceAdj,
    IPCRestart,
    IPCQuit,

    IPCLast,
};

#endif /* _WM_IPC_H */
