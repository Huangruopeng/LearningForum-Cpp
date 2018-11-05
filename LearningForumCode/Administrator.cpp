#include "Administrator.h"
#include"Moderatoruser.h"
#include "Globle.h"
extern Forum f;
Administrator::Administrator()
{
}

void Administrator::Appoint_moderator(int i)
{
  ModeratorUser *m=new ModeratorUser;
  m->change_username(f.general[i]->get_username());
  m->change_password(f.general[i]->get_password());
  m->change_id(f.general[i]->get_id());
  m->choose_board(current_board);
  m->set_moderator(1);
  f.general.erase(f.general.begin()+i);
  f.general.insert(f.general.begin()+i,m);

}

void Administrator::Dismiss_moderator(int i)
{
    GeneralUser *g=new GeneralUser;
    g->change_password(f.general[i]->get_password());
    g->change_username(f.general[i]->get_username());
    g->change_id(f.general[i]->get_id());
    g->set_moderator(0);
    f.general.erase(f.general.begin()+i);
    f.general.insert(f.general.begin()+i,g);
}


