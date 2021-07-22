#include <iostream>
#include<string>
using namespace std;

int main(){
    int tab[11];
    int control[10]={1,3,7,9,1,3,7,9,1,3};
    int suma=0;
    string str;
    cout<<"Enter the pesel number (or q): ";
    cin>>str;
    
    while(str[0]!='q'){
        
        for(int i=0;i<11;i++){
            tab[i]=int(str[i])-48;
        }

        for(int i=0;i<10;i++){
            suma+=tab[i]*control[i]>9 ? tab[i]*control[i]%10 : tab[i]*control[i];
        }

        suma=suma>9?suma%10:suma;

        if(10-suma==tab[10]){
            if(tab[9]%2==0){
                if(tab[2]*10+tab[3]<=12){
                    cout<<tab[4]<<tab[5]<<"-"<<tab[2]<<tab[3]<<"-"<<"19"<<tab[0]<<tab[1]<<" "<<"K";
                }else if(tab[2]*10+tab[3]>20 && (tab[2]*10+tab[3]<=32)){
                    cout<<tab[4]<<tab[5]<<"-"<<tab[2]*10-20<<tab[3]<<"-"<<"20"<<tab[0]<<tab[1]<<" "<<"K";
                }else if(tab[2]*10+tab[3]>40 && (tab[2]*10+tab[3]<=52)){
                    cout<<tab[4]<<tab[5]<<"-"<<tab[2]*10-40<<tab[3]<<"-"<<"21"<<tab[0]<<tab[1]<<" "<<"K";
                }else{
                    cout<<tab[4]<<tab[5]<<"-"<<tab[2]*10-60<<tab[3]<<"-"<<"22"<<tab[0]<<tab[1]<<" "<<"K";
                }
            }else{
                if(tab[2]*10+tab[3]<=12){
                    cout<<tab[4]<<tab[5]<<"-"<<tab[2]<<tab[3]<<"-"<<"19"<<tab[0]<<tab[1]<<" "<<"M";
                }else if(tab[2]*10+tab[3]>20 && (tab[2]*10+tab[3]<=32)){
                    cout<<tab[4]<<tab[5]<<"-"<<tab[2]*10-20<<tab[3]<<"-"<<"20"<<tab[0]<<tab[1]<<" "<<"M";
                }else if(tab[2]*10+tab[3]>40 && (tab[2]*10+tab[3]<=52)){
                    cout<<tab[4]<<tab[5]<<"-"<<tab[2]*10-40<<tab[3]<<"-"<<"21"<<tab[0]<<tab[1]<<" "<<"M";
                }else{
                    cout<<tab[4]<<tab[5]<<"-"<<tab[2]*10-60<<tab[3]<<"-"<<"22"<<tab[0]<<tab[1]<<" "<<"M";
                }
            }
            cout<<endl;
        }else{
            cout<<"BLAD\n";
        }
        cout<<"Enter the pesel number (or q): ";
        cin>>str;
        suma=0;
    }
    
}