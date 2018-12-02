#ifndef MODERATORUSER_H
#define MODERATORUSER_H
#include"UserGeneral.h"
#include<vector>
using namespace std;

class ModeratorUser:public GeneralUser
{
public:

      int get_board(int i);
      void add_board(int i);
      vector<int> myboard;
      void initial(QString name,QString password,QString id,int board);
      int delete_post();//多态
      //void view_my_information();//多态

private:



};
#endif // MODERATORUSER_H
