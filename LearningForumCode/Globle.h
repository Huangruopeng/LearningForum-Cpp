#ifndef GLOBLE_H
#define GLOBLE_H
#include"Forum.h"
#include"User.h"
#include"Administrator.h"
#include"Generaluser.h"
#include"Moderatoruser.h"

extern Forum *f;
extern User *user;
extern Administrator* admin;
extern GeneralUser * general;
//extern ModeratorUser* moderator;
extern int current_board;
extern int current_admin;
extern int current_general;
extern int current_post;

#endif // GLOBLE_H
