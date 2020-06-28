#include <iostream>
#include <iomanip>
using namespace std;
//کلاس ماشین
class Car{
private:
//string con,coln,concm,cn,cm,cc,cp;
//int cocm;

string carOwnerName,carOwnerLName,carName,carModel,carColor,carPelak;
string carOwnerCodeMeli;
public:

    Car(string con,string coln,string cocm,string cn,string cm,string cc,string cp){//سازنده
    this->carOwnerName=con;
    this->carOwnerLName=coln;
    this->carOwnerCodeMeli=cocm;
    this->carName=cn;
    this->carModel=cm;
    this->carColor=cc;
    this->carPelak=cp;
    }
    ~Car(){}//نابودکننده
    void addCar();
    string showAllCars()const{
    return "Car owner name: " + this->carOwnerName +
    "Car owner last name: " + this->carOwnerLName +
    "Car owner code meli: " + this->carOwnerCodeMeli +
    "Car name: " + this->carName +
    "Car model: " + this->carModel +
    "Car color: " + this->carColor +
    "Car pelak: " + this->carPelak;
    ;
    }
    void deleteCar();
};
int main()
{

    int m;
    while(m!=4){
    cout<<"----------------------------------\n";
    cout<<"Select one option from this menu:\n\t1.Add a car\n\t2.Show all cars\n\t3.delete a car\n\t4.exit\n";
    cout<<"----------------------------------\n";

    cin>>m;
        switch(m){
        case 1:cout<<setw(5)<<"you select 1\n\n";
        //addCar();
        break;
        case 2:cout<<setw(5)<<"you select 2\n\n"
        //showAllCars();
        ;break;
        case 3:cout<<setw(5)<<"you select 3\n\n";
        //deleteCar();
        break;
        case 4:goto Bye;
        default:
            cout<<setw(5)<<"this is not a valid choice\n\n";
        }
    }
    const int c=50;
    Car cars[c];
    cars[0]=Car("a","aa","123","as","cv4","red","544ju");
    cars[1]=Car("a","aa","123","as","cv4","red","544ju");

    for(size_t i=0;i<c;i++)
    {
        cout<<cars[i].showAllCars()<<endl;
    }

    Bye: cout<<"good bye :)"<<endl;
    return 0;
}



