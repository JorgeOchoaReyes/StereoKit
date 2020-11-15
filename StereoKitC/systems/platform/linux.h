#pragma once

#ifdef __linux__

namespace sk {

bool linux_init      ();
bool linux_start     ();
void linux_stop      ();
void linux_shutdown  ();
void linux_step_begin();
void linux_step_end  ();
void linux_vsync     ();

bool linux_get_cursor(vec2 &out_pos);

} // namespace sk

#endif
