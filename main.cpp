//Tyler Evans
//programing random shuffle project
//using geek for geek python exsample as a project
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <ctime>
#include <vector>
#include <cstdlib>
using namespace std;
//here is the needed libarys above for this
//
//Here is the function for the random sort for arrays
//It takes the array and a size int of the array
//is a void function
void mixedSort(int a[], int size);
//
//Here is the function that is peforms random sort for vector objects
//It takes the vector object by refrence
//it is a void function like wise
void mixedSortVector(vector<int>& a);
//
//print Function for array
void printArr(int a[], int size);
//
//print Function for vector
void printVect(vector<int> a);
//
//Here are two functions
//
void swapArr(int c[], int a, int b);
//these takes items and swaps them yay!
//
void swapVectInt(vector<int>& a, size_t x, size_t y);
//this swaps vector int items
//
void bubSortVect(vector<int>& a);
// this is the sort for a vector object
//
void bubSortArr(int a[], int size);
// this is the bubble sort for array
//
//end of the function def.
int main(){
bool state = true;
    string data = "y";
    system("clear");
    while(state == true){
        //uses time to make random number
        srand(time(NULL));
        const int x= 5;
        int p[x] = {1, 2, 3, 4, 5};
            vector<int> lis = {1, 2,3,4, 5};
            cout << "Here is the Array" << endl;
            printArr(p, x);
            cout << "Here is the Vector" << endl;
            printVect(lis);
            //here is the section where the function is run
            //
            cout << "Here is the array randomized" << endl;
            mixedSort(p, x);
            printArr(p, x);
            cout << "Here is the Vector randomized" << endl;
            mixedSortVector(lis);
            printVect(lis);
            //end of section
            cout << "Reseting The Array" << endl;
            bubSortArr(p, x);
            printArr(p, x);
            cout << "Reseting the Vector" << endl;
            bubSortVect(lis);
            printVect(lis);
            cout << "Mixing array once again" << endl;
            mixedSort(p, x);
            printArr(p, x);
            cout << "Mixing vector once again" << endl;
            mixedSortVector(lis);
            printVect(lis);
            cout << "Would you like to try again?" << endl;
            cout << "Y or N";
        //clear data input before permiting user to
        //enter data
            cin.clear();
            cin >> data;
        cout << data << endl;
        //this makes sure the user would
        //use a cap or a lowercase yes
        // you could make a vector of inputs that you
        // other than that it makes the program
        //simply say good bye  and thank you
        if (data == "n" || data == "N"){
            state = false;
            cout << "Thank you press enter to exit" << endl;
            cin.get();
            cin.get();
        }
        if(state == true){
            cin.clear();
            system("clear");
            cout << "Press Enter to try again:";
            cin.get();
            cin.get();
            cout << endl;
        }
    }
    return 0;
}
void printArr(int a[], int size){
    for(size_t b=0; b < size; b++){
        cout << a[b] << "\t";
    }
    cout << endl;
}
void printVect(vector<int> a){
    for(size_t b=0; b < a.size(); b++){
        cout << a[b] << "\t";
    }
    cout << endl;
}
void swapArr(int c[],int a, int b){
    //this swaps elements it has two elements passed by refrence
    int ex;
    ex = c[a];
    c[a] = c[b];
    c[b] = ex;
}
void swapVectInt(vector<int>& a, size_t x, size_t y){
    //this swaps elements of the vector objects
    vector<int> z ={0};
    z[0] = a[x];
    a[x] = a[y];
    a[y] = z[0];
}
void mixedSort(int a[], int size){
    //srand(time(NULL));
    for (int i =0; i < size; i++){
        int f = 0;
        if (i > 0){
        f = rand() % i;
        swapArr(a, f, i);
    }
        //swapArr(a, 1, i);
}
}
void mixedSortVector(vector<int>& a){
    for(int i =0; i < a.size(); i++){
        if(i > 0){
            int f = 0;
            f = rand() % i;
            swapVectInt(a, i, f);
        }
    }
}
void bubSortVect(vector<int>& a){
    for(int i =0; i < a.size(); i++){
        for(int z = 0; (i-z) < a.size(); z++){
            if(a[i] < a[z]){
                swapVectInt(a, z, i);
            }
        }
    }
}
void bubSortArr(int a[], int size){
    for(size_t i =0; i < size; i++){
        for(size_t j=0; (i-j) < size; j++){
            if(a[j] > a[i]){
                swapArr(a, int(j), int(i));
            }
        }
}
}
