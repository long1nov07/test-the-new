#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main(){
    int So0 = 0;
    int SoHocSinh = 0;
    int SoDinhDanh = 0;
    string TenHocSinh;

    cout<<"số học sinh: ";
        cin>> SoHocSinh;

    while(So0 < SoHocSinh){
        ++So0;
        cout<<"tên học sinh "<< So0 <<": ";        
        getline(cin, TenHocSinh);
        cin.ignore(32767,'\n');


        cout<<"nhập số định danh của học sinh "<<So0 <<": ";
        cin>> SoDinhDanh;

        
    }

}