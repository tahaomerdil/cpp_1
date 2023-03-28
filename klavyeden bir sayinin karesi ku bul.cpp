#include<iostream>

using namespace std;

int main(){
    int sayi, kare, kup;
    cout<<"bir sayi giriniz:";
    cin>>sayi;

    kare = sayi * sayi;
    kup = sayi * sayi * sayi;

    cout<<"girdiginiz sayi:"<<sayi<<endl;
    cout<< "karesi:"<<kare<<endl;
    cout<< "kupu:"<<kup<<endl;

    return 0;
}
