//----------------*******CAR RENTAL SYSTEM******----------------
//-----------------*******Header files*******------------------
#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <unistd.h>
#include <dos.h>
#include <iomanip>
//-----------------lOGIN FUNCTION-----------------------------
using namespace std;
int login()
{
   int count = 0;	
  jump:  
   string username1,username2,username3,username4,username;
   string passward1,passward2,passward3,passward4;
   string space ="";
   char input;
   ifstream fil;
   fil.open("user11.txt");
   username1="Fatima";
   if(!fil.eof())
   { 
      fil>>passward1;
   }
   ifstream fili;
   fili.open("user22.txt");
   username2="Najaf";
   if(!fili.eof())
   { 
      fili>>passward2;
   }
   ifstream fila;
   fila.open("user33.txt");
   username3="Samra";
   passward3="samra12"; 
   if(!fila.eof())
   { 
      fila>>passward3;
   } 
   ifstream file;
   file.open("user44.txt");
   username4="Asma";
   if(!file.eof())
   { 
      file>>passward4;
   }
       cout<<"\n\n\t\t\t                .............welcome.............";
       cout<<"\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
       cout<<"\t\t\t\t\t------------------------------";
   
       cout<<"\n\t\t\t\t\t  Enter User name : ";
       cin>>username;
       cout << "\n\t\t\t\t\t  Enter Password: ";
       input = _getch();
       while(input != 13)
       {
         space.push_back(input);
         cout << '*';
         input = _getch();
       }
       if(username==username1 && space==passward1)
       {
          cout << "\n\n\t\t\t\t\t-------    Access Granted!---------- ";
          cout << "\n\t\t\t\t\t-------  Welcome To Our System---------- "<<endl;
          system("PAUSE");
       }
       else if(username==username2 && space==passward2)
       {
   	      cout << "\n\n\t\t\t\t\t-------    Access Granted!---------- ";
          cout << "\n\t\t\t\t\t-------  Welcome To Our System---------- "<<endl; 
          system("PAUSE");
       }
       else if(username==username3 && space==passward3)
       {
          cout << "\n\n\t\t\t\t\t-------    Access Granted!---------- ";
          cout << "\n\t\t\t\t\t-------  Welcome To Our System---------- "<<endl;
          system("PAUSE");
       }
       else if(username==username4 && space==passward4)
       {
          cout << "\n\n\t\t\t\t\t-------    Access Granted!---------- ";
          cout << "\n\t\t\t\t\t-------  Welcome To Our System---------- "<<endl;
          system("PAUSE");
       }
       else
       {
          cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
          system("PAUSE");
          system("CLS");
          count++;
          if (count < 3)
		  { 
			goto jump;
		  }
	      else
		  {
			cout<<"Too many attempt"<<endl;
			fil.close();
            fili.close();
            fila.close();
            file.close();
			exit(0);
		  }
       }
       fil.close();
       fili.close();
       fila.close();
       file.close();

}
//-------------------------------------class car------------------
class Car
{
   private:
	    int carNo;
		string carName;
		char carModel[10];
		char color[10];
		string status;
		char filename[20];
   public:	
        Car()
	    {
	      fstream carfile;
		  carfile.open("carinfo.txt",ios::in|ios::out);
		  carfile<<"\n\ncar1 = car Name hyundai ; car model 2016MD ; color red\n" ;
		  carfile<<"car2 = car Name BMW ; car model 2018as ; color black\n ";
		  carfile<<"car3 = car Name AUDI ; car model 2019sa ; color black\n";
		  carfile<<"car4 = car Name tesla ; car model 2020Aw ; color red\n";
		  carfile<<"car5 = car Name mehran ; car model 2017LA ; color whilte\n";
		  carfile<<"car6 = car Name tayoto ; car model 2021ea ; color silver\n";
		  carfile<<"car7 = car Name Ford ; car model 2018sw ; color black\n";
		  carfile<<"car0 = if the car is new you added recently\n ";
		  carfile.close();
	   }
	   void listofCar()
       {
       	     string line;
             fstream data;
             data.open("carinfo.txt",ios::in);
             while(!data.eof())
             {
             	while(getline(data,line))
             	{
             		cout<<line<<"\n";
				}
                data.close();
			 }
	   }
	   void setcarNo(int carno)
	   {
	   	    carNo = carno;
	   }
	   int getcarNo()
	   {
	   	    return carNo;
	   }
	   void setcarName(string carname)
	   {
	   	    carName = carname;
	   }
	   string getcarName()
	   {
	   	    return carName;
	   }
	    void addCar(){
         ofstream fout;
         //fout.open(filename);
         cout<<"\nEnter file name with extention : ";
         cin>>filename;
         fout.open(filename);
         cout<<"Enter status of car available or rented : ";
         cin>>status;
         fout<<status;
         //cin.ignore();
         cout<<"Enter car No.     : car";
         cin>>carNo;
         fout<<"\n\n\nCarNo : "<<carNo;
         cout<<"Enter  Name of car         : "; 
         cin>>carName;
         fout<<"\tCarName : "<<carName;
      //   cin.ignore(); 
         cout<<"Enter car model      : "; 
         cin>>carModel;
         fout<<"\tCarModel : "<<carModel;
       //  cin.ignore();
         cout<<"Enter color of car  : "; 
         cin>>color;
         fout<<"\nCarColor : "<<color;
       //  cin.ignore();
         cin.getline(color,10);
         fout.close();
      }
      void checkstatus(int carno)
      {
      	    if(carno==1)
            {
    	       string status,de;
    	       ifstream ti;
    	       ti.open("Carone.txt");
    	       ti>>status;
    	       //cout<<status;
    	   
    	       if(status=="available")
    	       { 
    	   	        ti.close();
    	   	        ifstream tin;
    	            tin.open("Carone.txt");
    	            while(!tin.eof())
                    {
                       while(getline(tin,de))
          	           {
             	           cout<<de<<"\n";
             	// tin.close();
			           }
    	   	        }
    	   	        tin.close();
	           }
	           else 
	           {
	   	            cout<<"\nThis car is Rented!!";
	   	            ti.close();
	           }
	        }
	        else if(carno==2)
	        {
	   	        string status1;
    	        ifstream b;
    	        b.open("Car_2.txt");
    	        b>>status1;
    	        if(status1=="available")
    	        {
    	           b.close();
                   string a;
		           ifstream bi;
		           bi.open("Car_2.txt");
    	           while(!bi.eof())
                   {
                      while(getline(bi,a))
          	          {
             	            cout<<a<<"\n";
			          }
	               }	
		           bi.close();
				}
				else
				{
					cout<<"\nThis car is Rented!!";
	   	            b.close();
				}
		    }  
	        else if(carno==3)
	        {
	           string status2;
    	       ifstream dy;
    	       dy.open("Car_3.txt");
    	       dy>>status2;
    	       if(status2=="available") 
    	       {
    	         	dy.close();
    	       	    string c;
    	            ifstream dp;
    	            dp.open("Car_3.txt");
    	            while(!dp.eof())
                    {
                       while(getline(dp,c))
          	           {  
                          cout<<c<<"\n";
			           }
	                }
	                dp.close();
			   }
			   else
			   {
					cout<<"\nThis car is Rented!!";
	   	            dy.close();
			   }
		    }
	        else if(carno==4)
	        {
	        	string status3;
	        	ifstream y;
    	        y.open("Car_4.txt");
    	        y>>status3;
    	        if(status3=="available")
    	        {
    	       	    y.close();
    	       	    string r;
    	            ifstream yu;
    	            yu.open("Car_4.txt");
    	            while(!yu.eof())
                    {
                       while(getline(yu,r))
          	           {
             	           cout<<r<<"\n";
			           }
	                }	
		            yu.close();
			    }
			    else
			    {
			        cout<<"\nThis car is Rented!!";
	   	            y.close();	
				}
	    	}
	    	else if(carno==5)
	    	{
	    	   string status4;
    	       ifstream j;
    	       j.open("Car_5.txt");
    	       j>>status4;
               if(status4=="available")
               {
               	    j.close();
               	    string i;
    	            ifstream ji;
    	            ji.open("Car_5.txt");
    	            while(!ji.eof())
                    {
                       while(getline(ji,i))
          	           {
             	           cout<<i<<"\n";
		           	   }
	                }
	                ji.close();
			   }
			   else
			   {
			   	    cout<<"\nThis car is Rented!!";
	   	            j.close();	
			   }
			}
			else if(carno==6)
			{
			   string status5;
    	       ifstream o;
    	       o.open("six.txt");
    	       o>>status5;
    	       if(status5=="available")
    	       {
    	       	    o.close();
    	       	    string w;
    	            ifstream oi;
    	            oi.open("six.txt");
    	            while(!oi.eof())
                    {
                        while(getline(oi,w))
          	            {
                        	cout<<w<<"\n";
			            }
	                }
	                oi.close();
		       }
		       else
		       {
		       	    cout<<"\nThis car is Rented!!";
	   	            o.close();	  
			   }
			}
	        else if(carno==7)
	        {
	           string status6;
               ifstream k;
    	       k.open("Car_7.txt");
    	       k>>status6;
               if(status6=="available")
    	       {
    	       	    k.close();
    	       	    string g;
                    ifstream ki;
    	            ki.open("Car_7.txt");
    	            while(!ki.eof())
                    {
                        while(getline(ki,g))
          	            {
             	            cout<<g<<"\n";
			            }
	                }	
		            ki.close();
			   }
			   else
			   {
			   	    cout<<"\nThis car is Rented!!";
	   	            k.close();
			   }    	
		    }
		    else if(carno==0)
			{
			//	char y1[20];
				string st,j;
				ifstream dh;
				dh.open(filename);
				dh>>st;
				if(st=="available")
				{
					dh.close();
					ifstream u;
					u.open(filename);
					while(!u.eof()){
					   while(getline(u,j))
					   {
					   	cout<<j<<"\n";
					   }	
				   }
			       u.close();
					
				}
				else
				{
					cout<<"\nThis car is Rented!!";
					dh.close();
				}
			} 
		    else
		    {
		    	cout<<"\n\nThis Car is not in the list...select different car";
			}
	  }
      void update(int carno)
      {
      	if(carno==1)
        {
	       ofstream z_;
		   z_.open("Carone.txt");
		   z_<<"Rented_Car";
		   z_.close();
	    }
	    if(carno==2)
	    {
	        ofstream x_;
		    x_.open("Car_2.txt");
		    x_<<"Rented_Car";
		    x_.close();
        }
	    if(carno==3)
	    {
		  ofstream w_;
		  w_.open("Car_3.txt");
		  w_<<"Rented_Car";
		  w_.close();
	    }
        if(carno==4)
        {
		  ofstream q_;
		  q_.open("Car_4.txt");
		  q_<<"Rented_Car";
		  q_.close();
	    }
	   if(carno==5)
	   {
		  ofstream ji_;
		  ji_.open("Car_5.txt");
		  ji_<<"Rented_Car";
		  ji_.close();	
       }
       if(carno==6)
       {

		  ofstream oi_;
		  oi_.open("six.txt");
		  oi_<<"Rented_Car";
		  oi_.close();	
	   }
	   if(carno==7)
	   {
		  ofstream ki_;
		  ki_.open("car_7.txt");
		  ki_<<"Rented_Car";
		  ki_.close();	
	   }
	   if(carno==0)
	   {
	   	    ofstream lo;
	   	    lo.open(filename);
	   	    lo<<"rented_car";
	   	    lo.close();
	   }
     }
     void modify()
     {
     	fstream crfile;
		crfile.open("carinfo.txt",ios::app|ios::out);
		cout<<"\n"<<"  ; car no : "<<carNo<<"  ; carName : "<<carName<<"  ; carcolor : "<<color<<"  ; carModel : "<<carModel;
		crfile.close();
	 }
};
//-------------------------------------class customer------------------
class Customer // customer class
{
	private:
	    string customerName;
	    int customerCnic;
	    int cusdriverid;
	    int driverexp;
    public:
    	void setcustomerName(string n)
    	{ 
    		customerName = n;
    		//size = 50;
		}
    	string getcustomerName()
    	{
    		return customerName;
		}
		void setcustomerCnic(int cID)
		{
			customerCnic = cID; 
		}
		int getcustomerCnic()
		{
			return customerCnic;
		}
		void  setcusdriverid(int dID)
		{
			cusdriverid = dID;
		}
		int getcusdriverid()
		{
			return cusdriverid;
		}
		void setdriverexp(int exp)
		{
			driverexp = exp;
		}
		int getdriverexp()
		{
			return driverexp;
		}

};
int calculate(int carno,int days)
{
	int rentalfee;
	sleep(1);
	system ("CLS");
	cout<<"Calculating rent. Please wait......"<<endl;
	sleep(2);
	if(carno == 1 ||carno== 2)
    return rentalfee=days*1000;
    if(carno == 3 ||carno== 4)
    return rentalfee=days*6000;
    if(carno == 5 ||carno== 6)
    return rentalfee=days*9000;
    if(carno == 7|| carno== 0)
    return rentalfee = days*4032;
} 
int main(){
 
   login(); 
   system ("CLS");
   Car objcar;
   Customer person;
   string data;
   int carno;
   string  carname;
   int choice = -1;
   while (choice !=12){
   	  	system("CLS");
        cout<<"\n\n\n";
	    cout<<"\t\t\tPress 1 to see the list of car  ";
		cout<<"\n\t\t\tPress 2 If you want to add new car in system ";
		cout<<"\n\t\t\tPress 3 If you want to add customer record and select a car";
	    cout<<"\n\t\t\tPress 4 If you want to check car status";
		cout<<"\n\t\t\tPress 5 After selecting car,calculate,update car status and show rent";
		cout<<"\n\t\t\tPress 6 If you want to update car status";
		cout<<"\n\t\t\tPress 12 If You terminate the program  ";
	    cout<<"\n\n\t\tEnter your choice : ";
		cin>>choice;
		      
		if(choice==1){//show list of car{
    		system("CLS");
		    cout<<"The list of car with details: "<<endl;
		    objcar.listofCar();
		    system("PAUSE");
	    }
	    else if(choice==2){//add new car
	       system("CLS");
	       objcar.addCar();
	       system("PAUSE");
		}
		else if(choice==3){//add customer record and select car
	       system("CLS");
	       int iD,dri,expi;
	       ofstream f;
           f.open("RECORD.txt",ios::app);
         // f<<"\nCUST_NAME | CUSTDRIVE | CUSTEXP | CNIC";
	       cout<<"Enter Custmer Name : ";
           cin>>data;
	       person.setcustomerName(data);
	       cout<<"\nEnter customer CNIC number : ";
           cin>>iD;
	       person.setcustomerCnic(iD);
	       cout<<"\nEnter Customer Driving Licence : ";
           cin>>dri;
           person.setcusdriverid(dri);
           cout<<"\nEnter your Driving experience : ";
       	   cin>>expi;
       	   person.setdriverexp(expi);
       	   f<<"\n"<<data<<" | "<<iD<<" | "<<dri<<" | "<<expi;
           f.close();
           cout<<"\n\n\n";
           objcar.listofCar();
           cout<<"\nSelect the car from above given cars and give car no, For example: 1" <<endl;
           cout<<"\n\nEnter car number : ";
           cin>>carno;
           objcar.setcarNo(carno);
           cout<<"\nEnter car name : ";
           cin>>carname;
           objcar.setcarName(carname);
           system("CLS");
           objcar.checkstatus(carno);
           system("PAUSE");
		}
		else if(choice==4){//to check car status   
		    system ("CLS"); 
		    objcar.listofCar();
		    int carn;
		    cout<<"\n\nEnter the car number you want to check the status";
		    cin>>carn;
		    objcar.checkstatus(carn);
            system("PAUSE");
	    } 
		else if(choice==5){//After selecting car,update car status calculate and show rent
	 system ("CLS");
	 objcar.update(carno);
     int days,rent,advance=0;
	 cout<<"\nEnter the days you want to rent the Car : ";
     cin>>days;
     if(days>15)
     {
     	advance = advance+500;
	 }
     cout<<"\n\nShowing bill please wait.....";
     rent = calculate(carno,days);
	 system("CLS");
	 ofstream inf;
   	 char filename[20];
     cout<<"/n/nEnter file name with extention to save the rent of car rented : ";
	 cin>>filename;
	 inf.open(filename);
	 //inf.close();
     cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
     inf<< "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
     cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
     inf  << "\t\t	///////////////////////////////////////////////////////////"<<endl;
     cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
     inf<<"\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
     cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<data<<" |"<<endl;
     inf<<"\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<data<<" |"<<endl;
     cout << "\t\t	| Car Number :"<<"-------------------|"<<setw(10)<<objcar.getcarNo()<<" |"<<endl;
     inf<<"\t\t	| Car Number :"<<"-------------------|"<<setw(10)<<objcar.getcarNo()<<" |"<<endl;
     cout << "\t\t	| Car Name :"<<"---------------------|"<<setw(10)<<objcar.getcarName()<<" |"<<endl;
     inf<<"\t\t	| Car Name :"<<"---------------------|"<<setw(10)<<objcar.getcarName()<<" |"<<endl;
     cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
     inf<<"\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
     cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rent<<" |"<<endl;
     inf<<"\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rent<<" |"<<endl;
     cout << "\t\t	| Caution Money :"<<"----------------|"<<setw(10)<<"0"<<"  |"<<endl;
     inf<<"\t\t	| Caution Money :"<<"----------------|"<<setw(10)<<"0"<<"  |"<<endl;
     cout << "\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<advance<<" | "<<endl;
     inf<<"\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<advance<<"  |"<<endl;
     cout << "\t\t	 ________________________________________________________"<<endl;
     inf<<"\t\t	 ________________________________________________________"<<endl;
     cout <<"\n";
     inf<<"\n";
     cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rent<<" |"<<endl;
     inf<<"\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rent<<" |"<<endl;
     cout << "\t\t	 ________________________________________________________"<<endl;
     inf<<"\t\t	 ________________________________________________________"<<endl;
     cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
     inf<<"\t\t	 # This is a computer generated invoce and it does not"<<endl;
     cout << "\t\t	 require an authorised signture #"<<endl;
     inf<<"\t\t	 require an authorised signture #"<<endl;
     cout <<" "<<endl;
     inf<<" "<<endl;
     cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
     inf<< "\t\t	///////////////////////////////////////////////////////////"<<endl;
     cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
     inf<<"\t\t	You are advised to pay up the amount before due date."<<endl;
     cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
     inf<<"\t\t	Otherwise penelty fee will be applied"<<endl;
     cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
     inf<<"\t\t	///////////////////////////////////////////////////////////"<<endl;
     inf.close();
     system("PAUSE");
    }
    else if(choice==6){
	  	int a;
	    cout<<"Enter the car no you update the status"<<endl;
	    cin>>a;
	    objcar.update(a);
	    system("PAUSE");
	 }
  }//while end
  return 0;
}//main end
