#include <iostream>
#include <iomanip>
using namespace std;

char correctAnswers[] = { 'B','D','A','A','C',  'A','B','A','C','D', 'B','C','D','A','D', 'C','C','B','D','A' };

void checkAnswers (char argArrayToGrade[], char argWrongAns[], int &argScore){

}

void generateReport (int argWrongAns[], int argScore){
    
}


int main() {
    char student1[] = { 'B','D','A','A','C',  'A','B','A','C','D', 'B','C','D','A','D', 'C','C','B','D','A' };
    char student2[] = {'B','D','A','A','C',  'A','B','A','C','D', 'B','C','D','A','D', 'B','A','C','B','C'};
    int argScore = 0;
    
    checkAnswers(correctAnswers, student1, argScore);
    
    
    
    
    
    return 0;
}
