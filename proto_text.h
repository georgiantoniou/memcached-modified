#ifndef PROTO_TEXT_H
#define PROTO_TEXT_H

/* text protocol handlers */

//*** ADD BY GEORGIA: busy wait instead of searching ***//
void busy_wait_microseconds(long microseconds);

void complete_nread_ascii(conn *c);
int try_read_command_asciiauth(conn *c);
int try_read_command_ascii(conn *c);

#endif
