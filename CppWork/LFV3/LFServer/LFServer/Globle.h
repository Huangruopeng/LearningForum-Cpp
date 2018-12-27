#ifndef GLOBLE_H
#define GLOBLE_H
#include"Forum.h"
#include"User.h"
#include"UserAdministrator.h"
#include"UserGeneral.h"
#include"UserModerator.h"
#include "UserAnonymous.h"
#include "BoardWin1.h"
#include <QMessageBox>
extern int type;
extern Forum f;

extern int current_board;
extern int current_admin;
extern int current_general;
extern int current_moderator;
extern int current_post;
extern BoardWin *boardwindows;
//extern int deleteBoard;
//extern int deletePost;

#endif // GLOBLE_H
