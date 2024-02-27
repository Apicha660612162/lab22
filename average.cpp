#include<iostream>
using namespace std;

int main(int argc, char *argv[]){
    if(argc > 1){
        double aver;
        cout << "---------------------------------\n";
        for(int i=1; i < argc;i++){
            aver += atoi(argv[i]); 
        }
        aver = aver/(argc-1);
        cout << "Average of " << argc-1 << " numbers = " << aver << endl;
        cout << "---------------------------------\n";
    }else{
        cout << "Please input numbers to find average.";
    }
}
