#include<iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
    ifstream score;
    score.open("score.txt");
    string num ;
    double sum,mean,N,dev,stdev;
    while(getline(score,num)){
        sum +=atof(num.c_str());
        dev +=pow(atof(num.c_str()),2);
        N++;
    }
    mean=sum/N;
    stdev=sqrt((dev/N)-pow(mean,2));
    cout << "Number of data = "<<N<<endl;
    cout << setprecision(3);
    cout << "Mean = "<<mean<<endl;
    cout << "Standard deviation = "<<stdev<<endl;
return 0;
}