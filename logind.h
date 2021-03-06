#include <stdbool.h>
#include <inttypes.h>

#include <libudev.h>
#include <libinput.h>

extern const struct libinput_interface libinput_if_logind;

int logind_init(bool take_control,
                void (*suspend)(void),
                void (*resume)(void));
int logind_dbus_fd(void);
void logind_dbus_input(void);
int logind_switch_vt(int vt);
int logind_take_control(void);
int logind_release_control(void);
int logind_open(const char *path, int flags, void *user_data);
void logind_close(int fd, void *user_data);
