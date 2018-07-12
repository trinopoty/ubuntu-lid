//
// Created by root on 12/7/18.
//

#ifndef SYSTEMD_LID_LID_H
#define SYSTEMD_LID_LID_H

#include <systemd/sd-bus.h>
#include <systemd/sd-event.h>

struct LidManager;
struct Button;

typedef struct LidManager {
    struct udev* udev;
    sd_event *event;
    sd_bus* system_bus;

    struct Button* button;
} LidManager;

int lidManager_new(LidManager** pLidManager);
void lidManager_close(LidManager* lidManager);

#endif //SYSTEMD_LID_LID_H