#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
    int count,round=1;
    do{
        count = round;
        for(int r=0;r<N;r++){
            if(r==count) cout << "[" << d[r] << "]" << " ";
            else cout << d[r] << " ";
        }
        cout << "=>" << " ";
        for(int i = count;i>0;i--){
            if(d[i]>d[i-1]){
                swap(d,i,i-1);
                count--;
            }
        }
        for(int s=0;s<N;s++){
            if(s==count) cout << "[" << d[s] << "]" << " ";
            else cout << d[s] << " ";
        }
        cout << "\n";
        round++;
        if(round==N) break;
    }while(1);

}

int main(){
    int a[10] = {12,25,30,44,2,0,4,7,55,25};
    cout << "Input Array:";
    for(int i = 0; i < 10; i++) cout << a[i] << " ";
    cout << "\n\n";

    insertionSort(a,10);

    cout << "\nSorted Array:";
    for(int i = 0; i < 10; i++) cout << a[i] << " ";
}
