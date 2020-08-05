/*
    Create by Zahra Razzaghi (•ᴗ•)/  2020/09/07
    one project for oop course
*/
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>  //file header
using namespace std;
//public variables
    string carOwnerName,carOwnerLName,carName,carModel,carColor,carPelak,carOwnerCodeMeli,yearOfConstruction,carPrice,carKm;
    int rowCount;// for counting rows of file or array elements


//car class
class Car{
    //private
private:

string carOwnerName,carOwnerLName,carName,carModel,carColor,carPelak,carOwnerCodeMeli,yearOfConstruction,carPrice,carKm;
    //public
public:
    //سازنده
    Car(string con="_",string coln="_",string cocm="_",string cn="_",string cm="_",string cc="_",string cpelak="_",string yOfC="_",string cprice="_",string ckm="_"){//سازنده
    this->carOwnerName=con;
    this->carOwnerLName=coln;
    this->carOwnerCodeMeli=cocm;
    this->carName=cn;
    this->carModel=cm;
    this->carColor=cc;
    this->carPelak=cpelak;
    this->yearOfConstruction=yOfC;
    this->carPrice=cprice;
    this->carKm=ckm;
    }
    //Destructor
    ~Car(){}

    string showAllCars()const{//برای اینکه بتوانیم تابع را برای اشیائ ثابت هام فراخوانی کنیم
        /*
برای زمانی بود که میخواستم اطلاعات رو از داخل
آرایه نشون بدم ولی چون از فایلا استفاده کردم دیگه لازمش ندارم
!ریختن اطلاعات از فایل داخل آرایه و نمایش اون دوباره کاریه
حالا اطلاعات رو مستقیم از داخل فایل نشون میدم
*/

    return "Car owner name: " + this->carOwnerName +"\n"+
    "Car owner last name: " + this->carOwnerLName +"\n"+
    "Car owner code meli: " + this->carOwnerCodeMeli +"\n"+
    "Car name: " + this->carName +"\n"+
    "Car model: " + this->carModel +"\n"+
    "Car color: " + this->carColor +"\n"+
    "Car pelak: " + this->carPelak +"\n"+
    "Year of construction: " + this->yearOfConstruction +"\n"+
    "Car Price: " + this->carPrice +"\n"+
    "Car Km: " + this->carKm;

    }
    //add a new car function
    void addCar(){

    }
    //search for find a car
    void findCar();
};

int main()
{
    /*
    const int c=50;
    Car cars[c];
    */
      //define object of read file stream
            ifstream readRowsFile("rows.dat",ios::in);
            if(!readRowsFile)
            {//if file is not be open show this message
                cout<<"welcome"<<endl<<"Let's add something to the file!(^_^)"<<endl;//(^ᴗ•) kalak rashti
            }else{
                readRowsFile>>rowCount;
            }

    system("color 71");//windows and font color

    bool flag=true;//this flag is for menu l(oᴗo)p
    while(flag){//menu choices
    cout<<"----------------------------------\n";
    cout<<"Select one option from this menu:\n\t1.Add a car\n\t2.Show all cars\n\t3.Find a car\n\t4.exit\n";//Menu
    cout<<"----------------------------------\n";

    int m;
    cin>>m;
        switch(m){
///////////////////////////////////////////////////////////////////////////////////////////

        case 1://add a car
            {
                    if(rowCount==50){cout<<"the array or file is not have enofgh space(max size is 50)"<<endl; break;}//if array was end show this message
    system("color 8f");//windows and font color

                    cout<<"Enater car owner name: ";
                    cin>>carOwnerName;
                    cout<<"Enater car owner last name: ";
                    cin>>carOwnerLName;
                    cout<<"Enater car owner code meli: ";
                    cin>>carOwnerCodeMeli;
                    cout<<"Enater car name: ";
                    cin>>carName;
                    cout<<"Enater car model: ";
                    cin>>carModel;
                    cout<<"Enater car color: ";
                    cin>>carColor;
                    cout<<"Enater car pelak: ";
                    cin>>carPelak;
                    cout<<"Enter year of construction: ";
                    cin>>yearOfConstruction;
                    cout<<"Enter car price: ";
                    cin>>carPrice;
                    cout<<"Enter car Kilo meter: ";
                    cin>>carKm;

                    //open the file for change or create that(◕ᴗ◕)
                    ofstream carfile("file.dat",ios_base::app);
                    //check for file opening
                    if(!carfile)
                    {//if file is not be open show this message
                        cout<<"some thing wrong during opening file!"<<endl;
                        exit(1);
                    }else{//save on file
                    carfile<<carOwnerName<<"\t"<<carOwnerLName<<"\t"<<carOwnerCodeMeli<<"\t"<<carName<<"\t"<<carModel<<"\t"<<carColor<<"\t"<<carPelak<<"\t"<<yearOfConstruction<<"\t"<<carPrice<<"\t"<<carKm<<endl;
                    //___________________________________________________________//
                    rowCount+=1;//when a row added to file this counter save that
                     ofstream CountingFile("rows.dat",ios::out);
                    //check for file opening
                    if(!CountingFile)
                    {//if file is not be open show this message
                        cout<<"some thing wrong during opening file!"<<endl;
                        exit(1);
                    }else{//save on file
                        CountingFile<<rowCount;
                    }
                    }
                    }
            break;
///////////////////////////////////////////////////////////////////////////////////////////
        case 2://print all cars
            {

            //define object of read file stream
            ifstream readFile("file.dat",ios::in);
            //check for file opening
            if(!readFile)
            {//if file is not be open show this message
                cout<<"file still not created! please add something to file"<<endl;//(^ᴗ•) edame kalak rashti
            }else{
            cout<<"id"<<setw(8)<<"OName"<<setw(9)<<"OLNAme"<<setw(9)<<"OCM"<<setw(9)<<"CarName"<<setw(9)<<"Model"<<setw(9)<<"Color"<<setw(9)<<"Pelak"<<setw(9)<<"salSakht"<<setw(9)<<"Price"<<setw(9)<<"Km"<<endl;
            cout<<"____________________________________________________________________________________________"<<endl;
            // show all cars in array
            for(size_t i=1;i<=rowCount;i++)
            {

            readFile>>carOwnerName>>carOwnerLName>>carOwnerCodeMeli>>carName>>carModel>>carColor>>carPelak>>yearOfConstruction>>carPrice>>carKm;
                //read information from file
                     /*
            cout<<cars[i].showAllCars()<<endl;*/
                //show information from file
              cout<<i<<setw(8)<<carOwnerName<<setw(9)<<carOwnerLName<<setw(9)<<carOwnerCodeMeli<<setw(9)<<carName<<setw(9)<<carModel<<setw(9)<<carColor<<setw(9)<<carPelak<<setw(9)<<yearOfConstruction<<setw(9)<<carPrice<<setw(9)<<carKm<<endl;

              /*
              cout<<i<<setw(5)<<"Owner name: "<<carOwnerName<<endl
              <<setw(8)<<carOwnerLName<<"Owner last name: "<<carOwnerName<<endl
              <<setw(8)<<carOwnerCodeMeli<<"Owner code meli: "<<carOwnerName<<endl
              <<setw(8)<<carName<<"Car name: "<<carOwnerName<<endl
              <<setw(8)<<carModel<<"Car model: "<<carOwnerName<<endl
              <<setw(8)<<carColor<<"Car color: "<<carOwnerName<<endl
              <<setw(8)<<carPelak<<"Car pelak: "<<carOwnerName<<endl
              <<setw(8)<<yearOfConstruction<<"sale sakht: "<<carOwnerName<<endl
              <<setw(8)<<carPrice<<"Price: "<<carOwnerName<<endl
              <<setw(8)<<carKm<<endl;
              cout<<"--------------------------------";
              */
            }
            }
            }
        break;
///////////////////////////////////////////////////////////////////////////////////////////
    case 3://find a car
            {
            string key;
            bool found=false;
            cout<<"Enter the car Owner Code Meli(OCM): ";
            cin>>key;
                //define object of read file stream
            ifstream readFile("file.dat",ios::in);
            //check for file opening
            if(!readFile)
            {//if file is not be open show this message
                cout<<"Not found!"<<endl;//(^ᴗ•) bazam kalak rashti
            }else{

            // show all cars in array
            for(size_t i=1;i<=rowCount;i++){
            readFile>>carOwnerName>>carOwnerLName>>carOwnerCodeMeli>>carName>>carModel>>carColor>>carPelak>>yearOfConstruction>>carPrice>>carKm;


                if(key==carOwnerCodeMeli)
                {
                    found=true;
                    cout<<"FOUND"<<endl;
                    cout<<"_____________________________________________________________________________"<<endl;

                    cout<<"OName"<<setw(9)<<"OLNAme"<<setw(9)<<"CarName"<<setw(9)<<"Model"<<setw(9)<<"Color"<<setw(9)<<"Pelak"<<setw(9)<<"salSakht"<<setw(9)<<"Price"<<setw(9)<<"Km"<<endl;
                    cout<<"_____________________________________________________________________________"<<endl;
                    cout<<carOwnerName<<setw(9)<<carOwnerLName<<setw(9)<<carName<<setw(9)<<carModel<<setw(9)<<carColor<<setw(9)<<carPelak<<setw(9)<<yearOfConstruction<<setw(9)<<carPrice<<setw(9)<<carKm<<endl;

                }
            }

            if(found==false)cout<<"Not FOUND!"<<endl;
            }
            }
        break;
///////////////////////////////////////////////////////////////////////////////////////////
        case 4://exit
            flag=false;
            cout<<"Good Bay (o_O)/"<<endl<<endl;
             break;
///////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

        default:
            cout<<setw(5)<<"this is not a valid choice\n\n"; break;
        }
    }

    return 0;
}
/*
من میخواستم از آرایه و کلاس استفاده کنم
ولی وقتی بحث استفاده از فایل شد دیگه نیاز نبود از آرایه ها استفاده کنم
و به تبع اون دیکه حتی لزومی نداشت که از کلاس ها اونطور که باید استفاده کنم
*/
/* در اینجا چون برای ذخیره و بازیابی اطلاعات از فایل ها استفاده کردم دیگه نیازی
به استفاده از کلاس  نبود چون قرار نیست واقعا شی ئی ساخته بشه
*/
