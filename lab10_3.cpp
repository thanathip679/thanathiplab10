#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    int count = 0;
    double sum = 0, mean, SUMsd = 0, SD;
    ifstream source;
    source.open("score.txt");
    string textline;
    while(getline(source,textline)){
        sum += stod(textline);
        SUMsd += pow(stod(textline),2);
        count++;
    }
    
    mean = sum/count;
    SD = sqrt((SUMsd/count) - pow(mean,2)) ;
    
    
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << SD;
}