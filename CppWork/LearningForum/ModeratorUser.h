#ifndef MODERATORUSER_H
#define MODERATORUSER_H
#include"Generaluser.h"
#include<vector>
using namespace std;

class ModeratorUser:public GeneralUser
{
public:
      void delete_post(int deleteBoard,int deletePost);
      int get_board(int i);
      void add_board(int i);
      //void delete_board(int i);
      vector<int> myboard;

private:



};
#endif // MODERATORUSER_H
