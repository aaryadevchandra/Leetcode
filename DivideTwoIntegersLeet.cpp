#include<iostream>
#include<stdlib.h>
using namespace std;
void dendp_sorp(int sor,int ad, bool run, int x, int dend)
{
       while(run == true)
        {
            sor = sor + ad;
            x++;
            if(sor == dend)
            {
                run = false;
                cout<<"Quotient = "<<x;
            }
        }
}
void dendn_sorp(int sor, int ad, bool run, int y, int dend)
{
    while(run == true)
        {
            sor = sor - ad;
            y--;
            if(sor == dend)
            {
                run = false;
                cout<<"Quotient = "<<y;
            }
        }
}
void sor_dend()
{
    cout<<"Quotient = "<<1;
}
int negate_dend(int dend)
{
    dend = dend * -1;
    return dend;
}
int negate_sor(int sor)
{
    sor = sor * -1;
    return sor;
}
void dendp_sorn(int sor, int ad, bool run, int y, int dend)
{
    negate_sor(sor);
    negate_dend(dend);
    while(run == true)
        {
            sor = sor - ad;
            y--;
            if(sor == dend)
            {
                run = false;
                cout<<"Quotient = "<<y;
            }
        }
}
void dendn_sorn(int sor, int dend, int ad, int x, bool run)
{
     while(run == true)
        {
            sor = sor + ad;
            x++;
            if(sor == dend)
            {
                run = false;
                cout<<"Quotient = "<<x;
            }
        }
}
int main()
{
    system("cls");
    int dend, sor, ad, x = 1, y = 1;
    bool run = true;
    char ch;
    do{
    cout<<"Enter dividend: ";
    cin>>dend;
    cout<<endl;
    cout<<"Enter divisor: ";
    cin>>sor;
    cout<<endl;
    ad = sor;

    if(dend>0 && sor>0 && sor!=dend)
    dendp_sorp(sor, ad, run, x, dend);
    
    else if(dend<0 && sor>0 && sor!=dend)
    dendn_sorp(sor, ad, run, y, dend);
    
    else if(dend>0 && sor<0 && sor!=dend)
    dendp_sorn(sor, ad, run, y, dend);

    else if(dend<0 && sor<0 && sor!=dend)
    dendn_sorn(sor, dend, ad, y, run);
    
    else if(sor == dend)
    sor_dend();

    cout<<endl;
    cout<<endl;

    cout<<"Would you like to continue using the program? (y/n)";
    cin>>ch;
    cout<<endl;
    cout<<endl;
    }while(ch=='y'||ch=='Y');
}