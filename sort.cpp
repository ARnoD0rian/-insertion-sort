#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<ctime>
using namespace std;
typedef long long ll;
typedef long double ld;
int main(){
    ld time_tests;
    for (ll h=8;h<9;h++){
        cout<<h<<endl;
        ll n=1;
        time_tests=0;
        for (ll i=0;i<h;i++){
            n*=10;
        }
        for (ll g=1;g<2;g++){

            string filename="test_"+to_string(n)+"_"+to_string(g)+".txt";
            ifstream file;
            file.open(filename);
            vector<ll>arr(n);
            ll a;
            for (ll i=0;i<n;i++){
                file>>a;
                arr[i]=a;
            }
            //ввод данныч

            ld start=clock();
            //начало работы
            for (int i=0;i<n;i++){
                for (int j=i;i>0;j--){
                    if (arr[j]<arr[j-1]){
                        a=arr[j];
                        arr[j]=arr[j-1];
                        arr[j-1]=a;
                    }else{
                        break;
                    }
                }
            }

    //конец работы
            ld send=clock();
            time_tests+=send-start;
            file.close();
            cout<<(send-start)/1000.0<<endl;
        }
        cout<<"mean="<<(time_tests)/1000.0<<endl;
    }
    return 0;
}
