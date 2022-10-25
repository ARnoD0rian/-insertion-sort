#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
int main(){
    string f="test.txt";
    ifstream file;
    file.open(f);
    int n;
    int a;
    file>>n;
    vector<int>arr(n);
    for (int i=0;i<n;i++){
        file>>a;
        arr[i]=a;
    }//ввод данных


    
    int a1,a2,j;
    for (int i=1;i<2*(n/2);i+=2){
        a1=arr[i-1];
        a2=arr[i];
        if (a2<a1){
            a2=a1;
            a1=arr[i];
        }
        j=i;
        while ((j>1) && (a2<arr[j-2])){
            arr[j]=arr[j-2];
            arr[j-1]=arr[j-3];
            j-=2;
        }
        arr[j]=a2;
        arr[j-1]=a1;
        j-=1;
        while ((j>0) && (a1<arr[j-1])){
            arr[j]=arr[j-1];
            j-=1;
        }
    }
    if (n%2==1){
        j=n-1;
        a1=arr[j];
        while ((j>0) && (arr[j]<arr[j-1])){
            arr[j]=arr[j-1];
            j--;
        }
        arr[j]=a1;
    }
    cout<<"gotovo"<<endl;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    file.close();
    return 0;
}