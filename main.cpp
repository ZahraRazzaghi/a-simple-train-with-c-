/*
    Create by Zahra Razzaghi (•ᴗ•)/  2020/09/07
    one project for oop course
*/
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
string carOwnerName,carOwnerLName,carName,carModel,carColor,carPelak,carOwnerCodeMeli,yearOfConstruction,carPrice,carKm;

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
    //نابودکننده
    ~Car(){}
    //protected

    string showAllCars()const{
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
    void addCar(string con="_",string coln="_",string cocm="_",string cn="_",string cm="_",string cc="_",string cp="_",string yOfC="_",string cprice="_",string ckm="_"){
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

    }
    void findCar();
    protected:
};

int main()
{
    const int c=50;
    Car cars[c];

    int j=0;//array counter for add in array 0~49

    system("color 71");//windows and font color

    bool flag=true;//this flag is for menu l(oᴗo)p
    while(flag){
    cout<<"----------------------------------\n";
    cout<<"Select one option from this menu:\n\t1.Add a car\n\t2.Show all cars\n\t3.Find a car\n\t4.exit\n";//Menu
    cout<<"----------------------------------\n";
    int m;
    cin>>m;
        switch(m){
        case 1://add a car
            if(j==50){cout<<"the array is not have enofgh space"<<endl; break;}
            system("color 61");
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

            cars[j]=Car(carOwnerName,carOwnerLName,carOwnerCodeMeli,carName,carModel,carColor,carPelak,yearOfConstruction,carPrice,carKm);
            j++;

        break;
        case 2://print all cars
            system("color 8f");
            // show all cars in array
            for(size_t i=0;i<c;i++)
            {
                cout<<cars[i].showAllCars()<<endl;
                cout<<"-----------------"<<endl;
            }
        break;
        case 3://find a car

        break;
        case 4://exit
            flag=false; break;
        default:
            cout<<setw(5)<<"this is not a valid choice\n\n";
        }
    }

    return 0;
}
