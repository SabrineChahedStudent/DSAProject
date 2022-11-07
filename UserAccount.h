
#include <queue>
#include<iostream>
#include<list>
#include"email.h"

class MailServer;  //forward declaration 

using std::string;

// Each User

//  Is Identified by:

// his NAME
// UNIQUE ID

// can:

// RECEIVE emails
// SEND emails

class UserAccount
{

    friend class MailServer ; 
public:
  UserAccount(string UserName, string UserID ): m_UserName(nullptr), m_UserID(nullptr)
        {
        m_Username=enterUserName( UserName);
        m_UserID  = enterUserID( UserID );
         }
    
 bool checkIfMailArivedAtDestination  ( UserAccount User1, UserAccount User2) const
    { return User2.MailBox.contains(User1.m_Email)};
        
    ~UserAccount()
    {
        delete [] m_UserName;
        delete [] m_UserID;
    }
    
    m_UserName="NoName";
    m_UserID=0;
    
    char* getUserName() const
    {
        return m_UserName;
    }
    int getUserID() const
    {
        return m_UserID;
    }

   void sendMailToServer( UserAccount Sender ){ EmailsToSend.push( Sender.SentMails.top()); }


private:

    char* m_UserName;
    long m_UserID;
    queue <Email> MailBox;
    queue <Email> SentMails;
    // string TimeZone;   // this additional data to improve sending email phase.
    
    // Some Utility Functions to enter data //
    void enterUserName ( string UserName )
    { 
        for(int i=0; i<UserName.length(); i++)
        cin>>m_UserName [i];
        
     }

      void enterUserID ( string UserID )
    {   do{
         cout<<"enter a valid UserID "<<endl;
          cin>> m_UserID;
        
         }while(IDisTaken(UserID);
                
          validID.push( m_UserID);
          
     }
      bool IDisTaken(int UserID){
  
      return validID.contains(UserID);
    };
