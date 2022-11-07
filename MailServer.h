#include <queue>
#include<list>
#include"Email.h"
template <class EmailObj>
class MailServer
{
public:
    MailServer();
    ~MailServer();
    void processReceivedMails();
    void sendMailToDestination(  UserAccount User1, UserAccount User2 );
    bool checkReachDestination();
    bool MailCopy();
    void ResendEmail();



private:
    queue<Email> EmailsToSend;
    list<long> validID;


};
