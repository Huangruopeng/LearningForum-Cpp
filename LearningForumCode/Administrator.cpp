#include "Administrator.h"
#include"Moderatoruser.h"
#include"globle.h"
Administrator::Administrator()
{
}

void Administrator::Appoint_moderator(int i)
{
  ModeratorUser *m=new ModeratorUser;
  m->username=f.general[i]->get_username()
}

