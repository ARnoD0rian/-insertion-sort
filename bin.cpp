#include<iostream>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
int main(){
    string f="testr.txt";
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


    
    int left,right,arg,q;
    for (int i=1;i<n;i++){
        left=0;
        right=i;
        arg=arr[i];
        while (left<right-1){
            q=(right+left+1)/2;
            if (arg<=arr[q]){
                right=q;
            }else{
                left=q;
            }
        }
        for (int j=i;j>left+1;j--){
            arr[j]=arr[j-1];
        }
        arr[left+1]=arg;
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }  
    file.close();
    return 0;
    }