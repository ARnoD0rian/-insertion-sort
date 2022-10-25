#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
int main(){
    string f="testnox.txt";
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



    int q=n/2;
    int j;
    int z;
    while (q>0){
        for (int  i=0;i<n-q;i++){
            j=i;
            while ((j>=0) && (arr[j]>arr[j+q])){
                z=arr[j];
                arr[j]=arr[j+q];
                arr[j+q]=z;
                j--;
            }
        }
        q=q/2;
    }
    cout<<"gotovo"<<endl;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    file.close();
    return 0;
}