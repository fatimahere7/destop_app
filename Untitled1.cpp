#include <iostream>
#include <fstream>
#include <conio.h>
#include <string.h>
using namespace std;
int main ()
{
	fstream carfile;
	carfile.open("carinfo.txt",ios::in|ios::out);
//    carfile<<"\n\ncar1 = car Name hyundai ; car model 2016MD ; color red\n" ;
//	carfile<<"car2 = car Name BMW ; car model 2018as ; color black\n ";
//    carfile<<"car3 = car Name AUDI ; car model 2019sa ; color black\n";
//    carfile<<"car4 = car Name tesla ; car model 2020Aw ; color red\n";
//    carfile<<"car5 = car Name mehran ; car model 2017LA ; color whilte\n";
//    carfile<<"car6 = car Name tayoto ; car model 2021ea ; color silver\n";
//	carfile<<"car7 = car Name Ford ; car model 2018sw ; color black\n";
//	carfile<<"car0 = if the car is new you added recently\n ";
	//carfile.close();
	string op;
	
	while(!carfile.eof())
	{
		while(getline(carfile,op))
		{
			cout<<op<<"\n";
		}
	}
	carfile.close();
//	ofstream inf;
//   	char filename[20];
//   	cout<<"Enter file name with extention : ";
//	cin>>filename;
//	inf.open(filename);
//	inf.close();
	
	 fstream fi;
     fi.open("user11.txt",ios::out);
     string passward1="fatima22"; 
     fi<<passward1;
     fi.close();
      
     fstream fili;
     fili.open("user22.txt",ios::out);
     string passward2="najaf111"; 
     fili<<passward2;
	 fili.close(); 
	 
	 fstream fila;
     fila.open("user33.txt",ios::out);
     string passward3="samra12"; 
     fila<<passward3;
     fila.close();
     
     fstream file;
     file.open("user44.txt",ios::out);
     string passward4="asma13"; 
     file<<passward4;
     file.close();
//      
//      ofstream i;
//      i.open("RECORD.txt");
//      i<<"\nCUST_NAME | CUSTDRIVE | CUSTEXP | CNIC";
//      i.close();
//      
 //   data.close();
    fstream t;
   	t.open("Carone.txt",ios::out);
   	t<<"available";
   	t<<"\n\n\ncar Name hyundai ; car model 2016MD ; color red " <<endl;
    t<<"Specifications :\n\n40 kWh and 60 kWh\nRange\t\t\tEPA: 139 mi 224 km	  EPA: 210 mi 340 km";
    t<<"\nMax. power, motor			    382 hp 285 kW		382 hp 285 kW";
    t<<"\nMax. power, battery			235 hp 175 kW		302 hp 225 kW";
        //Carstatus(carno);
    t.close();
    fstream s;
   	s.open("Car_2.txt",ios::out);
   	s<<"available";
   	s<<"\n\n\ncar Name BMW ; car model 2018as ; color black "<<endl;
    s<<"Specifications :\n\n50 kWh and 60 kWh\nRange\t\t\tEPA: 139 mi 224 km	  EPA: 210 mi 340 km";
    s<<"\nMax. power, motor			    382 hp 285 kW		381 hp 285 kW";
    s<<"\nMax. power, battery			237 hp 175 kW		300 hp 225 kW";
    s.close();
    
    fstream u;
    u.open("Car_3.txt",ios::out);
    u<<"available";
    u<<"\n\n\ncar Name AUDI ; car model 2019sa ; color black "<<endl;
    u<<"Specifications :\n\n55 kWh and 55 kWh\nRange\t\t\tEPA: 139 mi 224 km	  EPA: 215 mi 341 km";
    u<<"\nMax. power, motor			    382 hp 285 kW		381 hp 285 kW";
    u<<"\nMax. power, battery			    236 hp 175 kW		300 hp 228 kW";
    u.close();
    
    fstream y;
    y.open("Car_4.txt",ios::out);
    y<<"available";
    y<<"\n\n\ncar Name tesla ; car model 2020Aw ; color red "<<endl;
    y<<"Specifications :\n\n55 kWh and 55 kWh\nRange\t\t\tEPA: 140 mi 224 km	  EPA: 215 mi 341 km";
    y<<"\nMax. power, motor			    382 hp 285 kW		381 hp 285 kW";
    y<<"\nMax. power, battery			    236 hp 175 kW		300 hp 228 kW";
    y.close();
    
//    string de;
//    fstream vi;
//    vi.open("Car_5.txt",ios::out|ios::in);
//    while(!vi.eof())
//    {
//        while(getline(vi,de))
//        {
//            cout<<de<<"\n";
//		}
//    }
//    v<<"available";
//	v<<"\n\n\ncar Name mehran ; car model 2017LA ; color whilte "<<endl;
//	v<<"Specifications :\n\n55 kWh and 55 kWh\nRange\t\t\tEPA: 140 mi 224 km	  EPA: 215 mi 341 km";
//    v<<"\nMax. power, motor			    382 hp 285 kW		381 hp 285 kW";
//    v<<"\nMax. power, battery			    236 hp 174 kW		300 hp 226 kW";
  //  vi.close();
    
    fstream h;
    h.open("Car_6.txt",ios::out);
    h<<"available";
    h<<"\n\n\ncar Name tayoto ; car model 2021ea ; color silver"<<endl;
    h<<"Specifications :\n\n55 kWh and 55 kWh\nRange\t\t\tEPA: 139 mi 224 km	  EPA: 215 mi 341 km";
    h<<"\nMax. power, motor			    382 hp 285 kW		381 hp 285 kW";
    h<<"\nMax. power, battery			    236 hp 175 kW		300 hp 228 kW";
    h.close();
	    
    fstream e;
    e.open("Car_7.txt",ios::out);
    e<<"available";
    e<<"\n\n\ncar Name Ford ; car model 2018sw ; color black "<<endl;
	e<<"Specifications :\n\n55 kWh and 55 kWh\nRange\t\t\tEPA: 140 mi 224 km	  EPA: 215 mi 341 km";
    e<<"\nMax. power, motor			    382 hp 285 kW		381 hp 285 kW";
    e<<"\nMax. power, battery			    236 hp 174 kW		300 hp 226 kW";
    e.close();
//    string st;
//    fstream y_;
//   	y_.open("Car_1.txt",ios::out|ios::in);
//   	y_>>st;
//   	y_.close();
//   	cout<<" \n"<<st;
   	
//   	ofstream inf;
//   	char filename[20];
//   	cout<<"Enter file name with extention : ";
//	cin>>filename;
//	inf.open(filename);
//	inf.close();
//	 
   	
    return 0;
}