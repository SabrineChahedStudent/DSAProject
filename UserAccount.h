
#include <queue>

class <EmailObj> MailServer;  //forward declaration 

using std::string;

// Each User

//  Is Identified by:

// his NAME
// UNIQUE ID

// can:

// RECEIVE emails
// SEND emails

template < class EmailObj >
class UserAccount
{

    friend class MailServer ;
    bool checkIfMailArivedAtDestination  ( UserAccount User1, UserAccount User2) const{ return User2.MailBox.contains(User1.m_Email)};
public:
    UserAccount(string UserName, string UserID ): m_UserName(nullptr), m_UserID(nullptr)
        {
        m_Username=enterUserName( UserName);
        m_UserID  = enterUserID( UserID );
         }

        
    ~UserAccount()
    {
        delete [] m_UserName;
        delete [] m_UserID;
    }
    
    m_UserName=0;
    m_UserID=0;
    void getUserName() const
    {
        return m_UserName;
    }
    void getUserName() const
    {
        return m_UserName;
    }

    void sendMailToServer( UserAccount Sender ){ EmailsToSend.push( Sender.m_Email); }


private:

    char* m_UserName;
    char* m_UserID;
    Email m_Email;
    Stack <EmailObj> MailBox;
    queue <EmailObj> SentMails;
    
    // Some Utility Functions to enter data //
    void enterUserName ( string UserName )
    { 
        for(int i=0; i<UserName.length(); i++)
        cin>>m_UserName [i];
        
     }

      void enterUserName ( string UserID )
    { 
         for(int i=0; i<UserName.length(); i++)
         cin>>m_UserID [i];
          
     }
   // string TimeZone;   // this additional data to improve sending email phase.

};
