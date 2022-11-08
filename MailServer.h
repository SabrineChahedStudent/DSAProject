#include <queue>

template <class EmailObj>
class MailServer
{
public:
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
