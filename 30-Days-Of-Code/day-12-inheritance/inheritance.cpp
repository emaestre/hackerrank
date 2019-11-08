#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student(string firstName, string lastName, int id, vector<int> testScores) : Person(firstName,lastName,id) {
            this->testScores = testScores;
        }

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate() {
            int acu = 0;
            char score;
            
            for(int i = 0; i < this->testScores.size(); i++)
                acu = acu + this->testScores[i];
            
            acu /= testScores.size();
            
            if(acu <= 100 and acu >= 90)
                score = 'O';
            else if(acu < 90 and acu >= 80)
                score = 'E';
            else if(acu < 80 and acu >= 70)
                score = 'A';
            else if(acu < 70 and acu >= 55)
                score = 'P';
            else if(acu < 55 and acu >= 40)
                score = 'D';
            else
                score = 'T';
                
            return score;
        }
    
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}