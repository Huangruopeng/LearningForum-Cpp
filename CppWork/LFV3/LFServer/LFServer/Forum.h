#ifndef FORUM_H
#define FORUM_H
#include "Board.h"
#include "User.h"
#include "UserAdministrator.h"
#include "UserGeneral.h"
#include "UserModerator.h"
#include <iostream>

using namespace std;

class Forum
{
public:
    Forum();
    vector<Board*> board ;
    vector<Administrator*> admin;
    vector<GeneralUser*> general;
    vector<ModeratorUser*> moderator;
    //void Init();
    //int login(QString name, QString password,int i);
    //void logout();

    void Initforum();

    void Saveforum();
    QString get_current_time();
    friend ostream & operator << (ostream & out,Board *b);
    friend istream & operator >> (istream & in,Board *b);
    friend ostream & operator << (ostream & out,Administrator *a);
    friend istream & operator >> (istream & in,Administrator *a);
    friend ostream & operator << (ostream & out,GeneralUser *g);
    friend istream & operator >> (istream & in,GeneralUser *g);
    friend ostream & operator << (ostream & out,ModeratorUser *m);
    friend istream & operator >> (istream & in,ModeratorUser *m);
};

class MyException
{
public:
    MyException(const QString &message):message(message){}
    ~MyException(){}
    const QString &getMessage()const{return message;}
private:
    QString message;

};

#endif // FORUM_H
