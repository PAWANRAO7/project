
  #include<iostream.h>
  #include<conio.h>
  #include<process.h>
  #include<string.h>

    class Customer          //Class Starts From Here
      {
			   //Private Data Members Of the Class
	char Customer_name[20],Customer_password[20],Customer_username[20];
	int Account_no;
	int Total_Amount;
			  //Public Section Starts From Here
	public:


	    Customer()       //Constructor
	      {
	      Account_no=0000000;
	      Total_Amount=10000;
	     strcpy(Customer_name,"Shubham");
	     strcpy(Customer_username,"shubham");
	     strcpy(Customer_password,"shubham058");
	      }

			     //LOG_IN Verification
	  char LOG_IN (char User_Name, char Password)
	    {
	      char v='v', d='d';

	      if(strcmp(User_Name,Customer_username)==0 && strcmp(Password,Customer_password)==0)
	       {
		return v;
	       }
	      else
		return d;

	    }

	  int Register()              //Registration
	    {
	     cout<<"Enter Your name:";
	     cin>>Customer_name;
	     cout<<"Enter Username:";
	     cin>>Customer_username;
	     cout<<"Enter suitable password:";
	     cin>>Customer_password;
	     cout<<"Enter the initial amount:";
	     cin>>Total_Amount;
	     return Account_no;
	    }
			//Credit Process

	  int Credit(int Credit_Amount)
	    {

	      Total_Amount+=Credit_Amount;
	      Credit_Amount=Total_Amount;
	      return Credit_Amount;

	    }
		       //Debit Process

	  int Debit(int Debit_Amount)
	    {

	      Total_Amount-=Debit_Amount;
	      Debit_Amount=Total_Amount;
	      return Debit_Amount;

	    }


      } ;
		      //Class Customer Ends Here

		      //Execution Starts From Here
  void main()
    {
       clrscr();
		   //Variable Declaration in Main
       Customer C;
       char choice,Username[20],Password[20];
       int Amount;
		      //Project Starts From Here

       cout<<"*********************Bank Management*********************";
       cout<<"\nEnter your choice:\n 1. LogIN\n 2. Register\n";
       cin>>choice;

       if(choice=='1')
	 {
	   cout<<"Enter the Username:-";
	   cin>>Username;
			      //The comment should be removed when[]
	   cout<<"Enter the password:-";
	   cin>>Password;

			   //LogIN Verification Starts Here
	   choice=C.LOG_IN(Username,Password);

	   if(choice=='v')
	     {
	       cout<<"\n\t\tEnter What do you want to do:\n 1.Credit\n 2.Debit\n";
	       cin>>choice;

			     //Credit AND Debit Choices
	       if(choice=='1')
		 {
		   cout<<"Enter the Amount to be credit:\nRs.";
		   cin>>Amount;
		   Amount=C.Credit(Amount);
		   cout<<"The Updated Amount is:-"<<Amount;
		 }

	       else
		 {
		   cout<<"Enter the Amount to be debited:\nRs.";
		   cin>>Amount;
		   Amount=C.Debit(Amount);
		   cout<<"The Updated Amount is:\n"<<Amount;
		 }
	     }
			       //Credit and Debit choice ends here

		  //If an Invalid user then condition below get executed
	    else
	      {
		cout<<"You have entered either an invalid Username or Passsword !!";
	      }
	 }

       else
	 {
	    Amount =C.Register();
	    cout<<"Your Account no is:-"<<Amount;

	 }

       getch();


    }

