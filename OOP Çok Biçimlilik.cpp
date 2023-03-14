#include<iostream>
#include<string>

using namespace std;

class Sekil
{
    
    public:
    string ad;
    void ciz()
    {
        
        cout<<" Sekil Ciziliyor.. " <<endl;

    }

};

class Ucgen : public Sekil
{
    
    public:
    int k1,k2,k3; 
    void ciz()
    {
        
        cout<<" Ucgen Ciziliyor.. " <<endl;

    }

    void Alanhesapla()

    {


        cout<<" Ucgen Alani: " << k1*k2/2 <<endl;

    }

 

};

class Dikdortgen : public Sekil
{
    
    public:
    int k1;
    int k2;
    void ciz()
    {
        
        cout<<" Dikdortgen Ciziliyor.. " <<endl;

    }
     
     void Alanhesapla()
     {

        cout<<" Dikdortgen Alani: " << k1*k2 <<endl;

     }
   

    

};

class kare : public Sekil
{
    
    public:
    int k1;
    void ciz()
    {
        
        cout<<" Kare Ciziliyor.. " <<endl;

    }

    void Alanhesapla()
    {
        
        cout<<" Kare Alani: " << k1*k1 <<endl;

    }

};


int main()

{

    Ucgen u1;
    kare k1;
    Dikdortgen d1;
    

    u1.ciz();
    u1.Alanhesapla();
    u1.k1 = 5;
    u1.k2 = 4;
    u1.k3 = 3;

    k1.ciz();
    k1.Alanhesapla();
    k1.k1 = 5;


    d1.ciz();
    d1.Alanhesapla();

     
    
  

    return 0;
}