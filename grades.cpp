#include <iostream>

int return_average(int grades[], int num_subjects){
    int sum = 0;
    for(int i = 0; i < num_subjects; i++) {
        sum += grades[i];
    }

    return sum / num_subjects;
}

void return_grades(){
    int num_grades;
    std::cout << "Please enter the number of grades you wish to compute " << "\n";
    std::cin >> num_grades;

    int new_grades[num_grades];
    std::cout << "Now please enter the actual grade you receieved in each subject " << "\n";

    int lowest;
    int highest;
    
    for(int i = 0; i < num_grades; i++){
        lowest = new_grades[0];
        highest = new_grades[0];

        std::cin >> new_grades[i];
        if(new_grades[i] < 0 || new_grades[i] > 100){
            std::cout << "Grades must be betweeen 0 and 100" << "\n";
            exit(1);
        }
        
        if(new_grades[i] < lowest){
            lowest = new_grades[i];
        }

        if(new_grades[i] > highest){
            highest = new_grades[i];
        }
    }
    std::cout << "The lowest grade is " << lowest << "\n";
    std::cout << "The highest grade is " << highest << "\n";
    int average = return_average(new_grades, num_grades);
    std::cout << "The average grade is " << average << "\n";
}


int main(){

    return_grades();

    return 0;
}