#ifndef MODERATORUSER_H
#define MODERATORUSER_H
#include"Generaluser.h"

using namespace std;

class ModeratorUser:public GeneralUser
{
public:
      void delete_post(int i);
      int get_board();

private:
      int board;


};
#endif // MODERATORUSER_H
