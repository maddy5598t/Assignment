#include<iostream>
#include<string>
#include<cstring>
#include<fstream>
using namespace std;

class Bank{
	private:
		string ac_type, ac_name;
		int ac_num;
		int balance;

	public:
		Bank(std::string name, std::string type, int num, int bal)
		{
			ac_type=type;
			ac_name=name;
			ac_num=num;
			balance=bal;

		}
		
		int getAc_num(){return ac_num;}
		string getAc_type(){return ac_type;}
		string getAc_name(){return ac_name;}
		int getBalance(){return balance;}

		void setvalues(string name, string type, int num, int bal){
			ac_type=type;
			ac_name=name;
			ac_num=num;
			balance=bal;
		}
	protected:
		void display(){
			cout<<"\n Name: "<<ac_name;
			cout<<"\n Account_number: "<<ac_num;
			cout<<"\n Account_type: "<<ac_type;
			cout<<"\n Balance: "<<balace;
		}
};

class Login{
	private:
		string user_name, password;

	public:
		Login(string uname, string pwd)
		{
			user_name=uname;
			password=pwd;
		}
		string getUname() {return user_name;}
		string getPassword(){return password;}

		void setUsername(string uname) {user_name=uname;}
		void setPassword(string pwd) {password=pwd;}
	protected:
		void log(){
			cout<<"\n Enter the user name: "<<endl;
			cin>>user_name;
		if(user_name=="Maddy"){
			cout<<"\n Enter the password: "<<endl;
			cin>>password;
			{
				if(password=="maddy1234"){
					cout<<"\n logged in";
				}
				else{
					cout<<"\n Invalid details ";
				}
			}
		}
	
};

class User: public Bank,public Login{
	private:
		int cell_num;
	public:
		User(std::string name, std::string type, int num, int bal, string uname, string pwd, int clnum):Bank(name,type, num, bal), Login(uname,pwd)
	{
		cell_num=clnum;
	}
	int getcellnum(){return cell_num;}
	void setcellnum(int clnum) {cell_num=clnum;}
	void dispuserdet();
};

       void User::dispuserdet(){
	       		log();
			cout<<"\ncell number: "<<endl;
			cin>>cell_num;
			display();
	}

int main(){
	fstream f1;
	f1.open("Bank.dat",ios::in|ios::app);
	if(!f1){
		cout<<"file not found";
		}
	else{
		string data;
		whiel(!f1.eof())
		{
			f1<<data;
			cout<<data;
		}
		f1.close();
	}

	User U("Maddy","sav", 1456, 15000, "Maddy","maddy1234",97381526);
	U.dispuserdet();
	
	return 0;
}
		U.dispuserdet();
				
		return 0;
}

