#include <queue>
#include "email.hpp"
#include "UserAccount.hpp"

template <class EmailObj>
class MailServer
{
public:
    friend class email;
    friend class UserAccount< Obj>;
    MailServer();
    ~MailServer();
    void processReceivedMails();
    void sendMailToDestination(  UserAccount User1, UserAccount User2 );
    void keepEmailCopy (); 
    bool checkReachDestination();
    bool MailCopy();
    bool resendEmail();
    int timesEmailIsSent ();
    void destroyEmail();
    void notifySenderOfAnError();
    
    



private:
    queue<Email> EmailsToSend;


};
