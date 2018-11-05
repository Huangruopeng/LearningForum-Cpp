#ifndef GLOBLE_H
#define GLOBLE_H
#include"Forum.h"
#include"User.h"
#include"Administrator.h"
#include"Generaluser.h"
#include"Moderatoruser.h"
static int type;
static Forum f;
static User *user;
static Administrator* admin;
static GeneralUser * general;
//extern ModeratorUser* moderator;
static int current_board;//is not static?
static int current_admin;
static int current_general;
static int current_post;

#endif // GLOBLE_H
