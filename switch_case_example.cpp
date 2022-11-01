#include<iostream>
using namespace std;

int main(){
    char pil;
    cout<<"======== Ini Program ========"<<endl;
    cout<<"Dia itu...?"<<endl;
    cout<<"1.Keren"<<endl;
    cout<<"2.Jelek"<<endl;
    cout<<"============================="<<endl;
    cout<<"Masukkan pilihan anda : ";
    cin>>pil;
    cout<<endl;

    switch (pil) {
        case '1':
            cout <<"Kita temenan :D "<<endl;
            break;
        case '2':
            cout <<"Parah bet sih :)"<<endl;
            break;
        default:
            cout << "Masukin pilihan yg bener lah!!"<<endl;
            break;
    }
    return 0;
}
